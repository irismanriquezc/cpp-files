#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int amount, num, sum=0;

	cin>> amount;

	for( int i=0; i < amount; i++){
		cin >> num;
		sum+= pow(num/10, num%10);
	}

	cout << sum<< endl;



}
