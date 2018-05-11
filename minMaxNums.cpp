// Iris Manriquez
// Practice Programs #1

#include <iostream> 
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){

int max1, min1, numero;
ifstream file;


file.open("nums.txt");
if ( file >> numero){
max1= numero;
min1=numero;}

while(file>>numero) 
{

if( max1< numero){
	max1= numero;}
if ( min1>  numero){
	min1= numero;}

}

cout << " The maximum is " << max1 << " and the minimum is " << min1 << endl;
file.close();
}

