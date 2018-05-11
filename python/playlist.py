from flask import Flask, render_template, flash, redirect
from flask_bootstrap import Bootstrap
from flask_wtf import FlaskForm
from wtforms import StringField, SubmitField
from wtforms.validators import DataRequired
from datetime import datetime

app = Flask(__name__)
app.config['SECRET_KEY'] = 'csumb-otter'
bootstrap = Bootstrap(app)

class Playlist(FlaskForm):
    song_title = StringField('Song Title', validators=[DataRequired()])
    artist = StringField('Artist',validators=[DataRequired()] )
    submit = SubmitField('Submit')

playlist = []

def store_song(my_song, artist1):
    playlist.append(dict(
        song = my_song,
        art= artist1,
        date = datetime.today()
    ))

@app.route('/', methods=['GET','POST'])
def index():
    form = Playlist()
    if form.validate_on_submit():
        store_song(form.song_title.data)
        store_song(form.artist.data)
        print(playlist)
        return redirect('/pl')
    return render_template('index.html', form=form)

@app.route('/pl')
def pl():
    return render_template('pl.html', playlist=playlist)
