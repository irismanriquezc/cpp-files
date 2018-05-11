#include <iostream> 
#include <cmath>

using namespace std;

int main() {

	int iterations, num=2;
	int out;

	cin >> iterations;
	if( iterations == 0){
		cout << 4 << endl;}
	else{
		for( int i=0; i<iterations; i++){
			num = (num-1) + num;}
				
		out = pow(num,2);
		cout << out << endl;}
	







}
