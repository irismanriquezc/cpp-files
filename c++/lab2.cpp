#include <iostream>
#include <string>

using namespace std;

struct songRecord {
	string song_name;
	string artist;
	string album_name;
	int length_minutes;
	int length_secs;
	int year_released;
	int month_released;
	};

char menuDisplay();

void initsong(songRecord song[], int i);


songRecord songArtist(string artist, songRecord array[], int size);

songRecord songName(string name, songRecord array[], int size);

songRecord minuteSongs(int minutes, songRecord array[], int size);

void displayList( const songRecord songs[], int size);

void displaySong(songRecord song);


int main(){
	
	songRecord songArray[10];
	char choice= 'n';
	string artist, name;
	int min, sec, count=0;
	
	do{
	choice=menuDisplay();
		if(choice== '+'){
			
			initsong(songArray, count);
			count+=1;
			}
			
		else if(choice=='a'){
			cout << "What artist do you want to look for?\n";
			cin >>artist;
			songArtist(artist,songArray,count); }
			
		else if(choice== 's'){
		cout << "What song do you want to look for?\n";
			cin >>name;
			songName(name,songArray,count);}
			
		else if(choice== 'm'){
		cout << "What length of minutes do you want to look for?\n";
			cin >>min;
			minuteSongs(min,songArray,count);}
			
		else if(choice == 'd'){
			displayList(songArray,count);}
		
	
	
}while(choice!='n' || choice!='N');

}

char menuDisplay(){
	char choice;
	cout << " + : Add a song (this adds a song to the array)\n"<< "s : Search for a song by song name\n"<< "a : Search for a song by artist (displays all songs with same artist)\n"<< "m: Display songs under x number of minutes long\n"<<  "d : Display song list\n";
	cin>> choice;
	return choice;
}

void initsong(songRecord song[], int i){
	cout << "The name of the song: \n";
	cin >> song[i].song_name;
	
	cout << "Artist of the song: \n";
	cin >> song[i].artist;
	
	cout << "The name of the album: \n";
	cin >> song[i].album_name;
	
	cout << "Length of minutes \n";
	cin >> song[i].length_minutes;
	
	cout << "Length of seconds \n";
	cin >> song[i].length_secs;
	
	cout << "Year released: \n";
	cin >> song[i].year_released;
	
	cout << "Month released: \n";
	cin >> song[i].month_released;}


		
	
songRecord songArtist(string artist, songRecord array[], int size){
	
	for(int i=0; i<size; i++){
		if( artist == array[i].artist){
				displaySong(array[i]);
			return array[i];}}
			
	
	}

songRecord songName(string name, songRecord array[], int size){
	
	for(int i=0; i<size; i++){
		if( name == array[i].song_name){
			displaySong(array[i]);
			return array[i];}}}
			
	
	
	
songRecord minuteSongs(int minutes, songRecord array[], int size){
	
	for(int i=0; i<size; i++){
		if( minutes == array[i].length_minutes){
			displaySong(array[i]);
			return array[i];}}}
			
	
	

void displayList( const songRecord songs[], int size){

	for(int i=0; i<size; i++){
		displaySong(songs[i]);}

}

void displaySong(songRecord song){
	cout << "     \n";
	
	cout << "The name of the song: " << song.song_name<< endl;
	
	cout << "Artist of the song: " <<song.artist<< endl;
	
	cout << "The name of the album: " <<song.album_name<< endl;
	
	cout << "Length of minutes "
	<< song.length_minutes<< endl;
	
	cout << "Length of seconds "<< 
	 song.length_secs<< endl;
	
	cout << "Year released: "
	<< song.year_released<< endl;
	
	cout << "Month released: "
	<< song.month_released<< endl;
	
	cout << "     \n";
	cout << "     \n";
	}



