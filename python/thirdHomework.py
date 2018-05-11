# Iris Manriquez
# CST205
# Homework 3

# The following program intakes a search from the user and gives the option of transforming the image, then returns that new imporved image.


import sys
from PyQt5.QtGui import QPixmap
from PIL import Image
from PyQt5.QtWidgets import (QApplication, QWidget, QLabel, QPushButton,
                             QLineEdit, QHBoxLayout, QVBoxLayout, QComboBox)

effect = ["None", "Grayscale", "Negative", "Sepia", "Thumbnail"]

image_information = [
              {
              "id" : "34694102243_3370955cf9_z",
              "title" : "Eastern",
              "flickr_user" : "Sean Davis",
              "tags" : ["Los Angeles", "California", "building"]
              },
              {
              "id" : "37198655640_b64940bd52_z",
              "title" : "Spreetunnel",
              "flickr_user" : "Jens-Olaf Walter",
              "tags" : ["Berlin", "Germany", "tunnel", "ceiling"]
              },
              {
              "id" : "36909037971_884bd535b1_z",
              "title" : "East Side Gallery",
              "flickr_user" : "Pieter van der Velden",
              "tags" : ["Berlin", "wall", "mosaic", "sky", "clouds"]
              },
              {
              "id" : "36604481574_c9f5817172_z",
              "title" : "Lombardia, september 2017",
              "flickr_user" : "Mónica Pinheiro",
              "tags" : ["Italy", "Lombardia", "alley", "building", "wall"]
              },
              {
              "id" : "36885467710_124f3d1e5d_z",
              "title" : "Palazzo Madama",
              "flickr_user" : "Kevin Kimtis",
              "tags" : [ "Rome", "Italy", "window", "road", "building"]
              },
              {
              "id" : "37246779151_f26641d17f_z",
              "title" : "Rijksmuseum library",
              "flickr_user" : "John Keogh",
              "tags" : ["Amsterdam", "Netherlands", "book", "library", "museum"]
              },
              {
              "id" : "36523127054_763afc5ed0_z",
              "title" : "Canoeing in Amsterdam",
              "flickr_user" : "bdodane",
              "tags" : ["Amsterdam", "Netherlands", "canal", "boat"]
              },
              {
              "id" : "35889114281_85553fed76_z",
              "title" : "Quiet at dawn, Cabo San Lucas",
              "flickr_user" : "Erin Johnson",
              "tags" : ["Mexico", "Cabo", "beach", "cactus", "sunrise"]
              },
              {
              "id" : "34944112220_de5c2684e7_z",
              "title" : "View from our rental",
              "flickr_user" : "Doug Finney",
              "tags" : ["Mexico", "ocean", "beach", "palm"]
              },
              {
              "id" : "36140096743_df8ef41874_z",
              "title" : "Someday",
              "flickr_user" : "Thomas Hawk",
              "tags" : ["Los Angeles", "Hollywood", "California", "Volkswagen", "Beatle", "car"]
              }
            ]

class Window(QWidget):
    def __init__(self):
        super().__init__()

        vertLayout = QVBoxLayout()
        self.setLayout(vertLayout)
        self.inputLine = QLineEdit()
        self.inputLine.selectAll()
        self.inputLine.setFocus()

        self.my_combo = QComboBox()
        self.my_combo.addItems(effect)

        self.button = QPushButton("Click", self)
        self.button.clicked.connect(self.on_click)

        vertLayout.addWidget(self.inputLine)
        vertLayout.addWidget(self.my_combo)
        vertLayout.addWidget(self.button)



    def on_click(self):
        cTex = self.my_combo.currentText()
        inputT = self.inputLine.text()
        imagen = self.imageSearch(inputT)

        if imagen is not "Not Found":
            if(cTex == "Sepia"):
                picture = self.sepia(Image.open("images/" + imagen + ".jpg"))

            elif(cTex == "Thumbnail"):
                picture = self.thumbnail(Image.open("images/" + imagen + ".jpg"))

            elif(cTex == "Grayscale"):
                picture = self.grayscale(Image.open("images/" + imagen + ".jpg"))

            elif(cTex == "Negative"):
                picture = self.negative(Image.open("images/" + imagen + ".jpg"))

            else:
                picture = Image.open("images/" + imagen + ".jpg")

            picture.save("idk.jpg")

            self.newWindow = QWidget()

            lb = QLabel(self.newWindow)
            pixmap = QPixmap("idk.jpg")

            lb.setPixmap(pixmap)
            self.newWindow.resize(pixmap.width(),pixmap.height())
            self.newWindow.show()

    def imageSearch(self, tinput):
        foundIm = []
        over = 0
        counter = 0
        for m in image_information:
            counter = 0
            for y in m:
                if isinstance(m[y], (list,)):
                    for w in m[y]:
                        if w.lower() == tinput.lower():
                            counter +=1
                else:
                    for word in m[y].split(" "):
                        if m[y].lower() == tinput.lower():
                            counter += 1
            if(counter > over):
                foundIm = [m]
                over = counter
            elif(counter == over):
                foundIm.append(m)

        if len(foundIm) == 0:
            return "Not Found"
        else:
            first = sorted(foundIm, key=lambda k: k["title"])
            return first[0]["id"]

    def sepia(self, picture):

        canvas = Image.new("RGB", picture.size)

        for x in range(canvas.width):
            for y in range(canvas.height):

                n = picture.getpixel((x,y))

                if n[0] < 63:
                    r,g,b = int(n[0] * 1),int(n[1]*0.5), int(n[2] * 0.5)
                elif n[0] > 62 and n[0] < 192:
                    r,g,b = int(n[0] * 1),int(n[1]*0.5), int(n[2] * 0.5)
                else:
                    r = int(n[0] * 1.1)
                    if r > 255:
                        r = 255
                        g,b = n[1], int(n[2] * 0.5)
                    g,b = n[1], int(n[2] * 0.5)
                canvas.putpixel((x,y), (r,g,b))

        return canvas

    def thumbnail(self, pic):

        canvas = Image.new("RGB", (pic.width//2+1, pic.height//2+1), "white")

        for x in range(0, pic.width, 2):
            for y in range(0, pic.height, 2):
                canvas.putpixel((x//2,y//2), pic.getpixel((x,y)))

        return canvas


    def grayscale(self, pic):

        canvas = Image.new("RGB", pic.size)

        colorLs = map( lambda m : ( (int(m[0] * 0.3) + int(m[1] * 0.6) + int(m[2] * 0.2) ),) * 3, pic.getdata() )
        canvas.putdata(list(colorLs))
        return canvas

    def negative(self, pic):

        canvas = Image.new("RGB", pic.size)

        ls = map( lambda m : ( (255-m[0]), (255-m[1]), (255-m[2]) ), pic.getdata() )
        canvas.putdata(list(ls))

        return canvas



app = QApplication(sys.argv)

popUp = Window()

popUp.show()

sys.exit(app.exec_())
