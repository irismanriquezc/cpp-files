// Iris Manriquez
// Practice Programs #1

#include <iostream> 
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){

int max, min, numero;
ifstream file;


file.open("nums.txt");
if ( file >> numero){
max= numero;
min=numero;}

while(file>> numero) 
{
if( max < numero){
	max= numero;}
else{
	min= numero;}

}

cout << " The maximum is " << max << " and the minimum is " << min << endl;
file.close();
}

