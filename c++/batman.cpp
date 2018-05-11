// Iris Manriquez
// September 28, 2017
// Homework 3, Problem 1



#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <string>

using namespace std;

int main()
{

int one, tens, hun,thou, number;
number= true;
srand( static_cast<unsigned>(time(NULL) ) );

while( number){

one= rand()%10;
tens = rand()%10;
hun= rand()%10;
thou= rand()%10;

int lol[]= {thou, hun, tens, one};


if ((one!= tens && one!=hun && one!=thou && tens !=hun && tens!=thou && hun!=thou && hun!=one) && (thou/3== tens) && (one%2==1) && (one + tens+hun+thou ==27)) {

cout << "The Riddler will strike at " << lol[0]<<lol[1]<<lol[2]<<lol[3] << " on Pennsylvania Ave" << endl;

number=false;
}

}
return 0;
}
