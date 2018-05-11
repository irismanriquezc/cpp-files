#include <iostream>
#include <cmath>

using namespace std;

int main(){

int inputs;
	cin >> inputs;
int array[inputs];
	
	for( int i =0; i <inputs; i++){
		cin >> array[i];
		}
	for (int i=0; i < inputs; i++){
		if( array[i]%2==0)
			cout << array[i] << " is even" << 
			endl;
		else
			cout<<array[i]<<" is odd" << 				endl;}



}
