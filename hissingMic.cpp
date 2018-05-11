#include <iostream>
#include <string>

using namespace std;

int main() {

string word;
bool hissing=false;

cin >> word;

for( int i=0; i < word.length(); i++){
	if(word[i] == 's'){
		if(word[i] == word[i+1]){
			hissing = true;
			break;}}}
	if( hissing == true){
		cout << "hiss" << endl;
		}
	else {
		cout << "no hiss" << endl;}





}
