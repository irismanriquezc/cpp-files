// Iris Manriquez
// Oct 20, 2017
// Lab 10 Problem 2


#include <iostream>
#include <string>

using namespace std;

int main()
{
char board[20][20];
char res, where;
int urow=0, ucol=0;


for(int row =0; row<20; row++){
	for(int col= 0; col< 20; col++){
	board[row][col] = '.';}}

for (int row = 0; row <20; row++){
for(int col = 0; col<20; col++){
cout << board[row][col] << " ";}
cout << endl;
}
do{

//board[urow][ucol];
cout << " Press a key, L=left, R= right, U= up, D= down)\n";
cin >>where;

switch(where){
case 'L':
if(ucol != 0)
{
	ucol = ucol - 1;
	board[urow][ucol]='_';}
else {
cout << "This is invalid\n";}

break;

case 'R':
if ( ucol != 19){
ucol = ucol +1;
board[urow][ucol]= '_';}
else {
cout << "This is invalid\n";}
break;

case 'U':
if ( urow !=0) {
urow = urow - 1;
board[urow][ucol]='|';
}
else {
cout << "This is invalid\n";}
break;

case 'D':
if( urow!= 19){
urow = urow +1;
board[urow][ucol]= '|';
}
else {
cout << "This is invalid\n";}
break;
}

for (int row = 0; row <20; row++){
for(int col = 0; col<20; col++){
cout << board[row][col] << " ";}
cout << endl; }

cout << "Again? Press y\n";
cin>> res;
}while( res == 'y');



return 0;
}
