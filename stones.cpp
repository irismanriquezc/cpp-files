#include <iostream>
#include <cmath>

using namespace std;

int main(){

string a= "Alice", b="Bob", winner;
int stones;


cin >> stones;

if( stones==1)
	winner=a;
	
if( stones%2==0)
	winner= b;

if( stones%2==1)
	winner= a;

cout << winner<< endl;


}
