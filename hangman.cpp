#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string converter( string word);
void letterCheck( char letter, string word, string& dashes, string& used, int& count);
void gameWinner( string& dashes, bool& guessed, string word);
void hangmanPic( int counter);
bool found ( char letter, string word);
int main ()  {

	int count=6;
	bool guessed = false;
	string Dashes, word, used;
	char letter;

	word = "i love you";
	Dashes= word;

	Dashes= converter(Dashes);

	while( count >0 && guessed== false){
		
		cout << "Letter?   \n";
		cin >> letter;
		cout << " \n";
		
		letterCheck(letter, word, Dashes, used, count) ;
		
		gameWinner( Dashes, guessed, word);
	}

	if(count ==0)
		cout << " Game Over\n";

return 0;

}


	string converter (string word) {
		for( int i=0; i < word.length(); i++){
			if(word[i]!= ' ')
				word[i]= '_'; }
		cout << word<<" "<< endl;
		return word;
}


	void letterCheck( char letter, string word, string& dashes, string& used, int& count)
{
int m=0, n=0;

	for( int i=0; i < word.length(); i++){
		if(used[i]== letter){
		n+=1;
			if(n==word.length()){
				cout << "You have used this letter\n";
				cout << " \n";  }}
		
		
			
		else if(letter == word[i]){
				used[i]= letter;
				dashes[i]=letter;
				cout << dashes<< endl;}
				
		else if (word[i]!=letter){
			m+=1;
			if(m==word.length()){
				
				hangmanPic(count);
				cout <<"This letter is not in the word/phrase\n";
				cout << " \n";
				count-=1;
				}
				}
					//return dashes;
		
		}

}

void hangmanPic(int counter){
	switch(counter){
		
		case 6:
			cout << "      " << endl;
			cout << " ____ "<< endl;
			cout << "|    |  "<< endl;
			cout << "o    |"<< endl;
			cout << "     |"<< endl;
			cout << "     |"<< endl;
			cout << "     -"<< endl;
			break;
		case 5:
			cout << "      " << endl;
			cout << " ____ "<< endl;
			cout << "|    |  "<< endl;
			cout << "o    |"<< endl;
			cout << "|    |"<< endl;
			cout << "     |"<< endl;
			cout << "     -"<< endl;
			break;
		case 4:
			cout << "      " << endl;
			cout << "  ____ "<< endl;
			cout << " |    |  "<< endl;
			cout << " o    |"<< endl;
			cout <<"/|    |"<< endl;
			cout << "      |"<< endl;
			cout << "      -"<< endl;
			break;
		case 3:
			cout << "      " << endl;
			cout << "  ____ "<< endl;
			cout << " |    |  "<< endl;
			cout << " o    |"<< endl;
			cout <<"/|)   |"<< endl;
			cout << "      |"<< endl;
			cout << "      -"<< endl;
			break;
		case 2:
			cout << "      " << endl;
			cout << "  ____ "<< endl;
			cout << " |    |  "<< endl;
			cout << " o    |"<< endl;
			cout <<"/|)   |"<< endl;
			cout <<"/     |"<< endl;
			cout << "      -"<< endl;
			break;
		case 1:
			cout << "      " << endl;
			cout << "  ____ "<< endl;
			cout << " |    |  "<< endl;
			cout << " o    |"<< endl;
			cout <<"/|)   |"<< endl;
			cout <<"//    |"<< endl;
			cout << "      -"<< endl;
			break;}}

void gameWinner( string& dashes, bool& guessed, string word)
{
	if( dashes== word){ 
			guessed= true;
			cout << " YA WON" << endl; }
	else{
			guessed = false; }
}










