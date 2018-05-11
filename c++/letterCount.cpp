// Iris Manriquez
// October 13, 2017
// Lab 9 Problem 1

#include <iostream>

using namespace std;

int main()
{
string word;
int let = 0, many= 1;
        
cout << "Enter your string: " <<endl;
getline(cin, word);
for(int i = 0; i <= word.length(); i++){
if(word[i] >= 'A' && word[i] <= 'Z'){
word[i]=word[i] + 32;}}     
	for( char i = 'a'; i <= 'z'; i++){
let = 0;
	for(int x = 0; x < word.length(); x++){
if(i == word[x]){
let++;}}
if(let> 0) {
cout << let << " " << i <<endl;}}
	for(int i = 0; i <= word.length(); i++){
if(word[i]== ' ' ){
many++;}}    
cout << "There are " << many<<" words"<< endl;

return 0;
    }
        
