#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int data, data1, months, used, sum=0;

	cin >> data;
	cin >>  months;
	

	
	for( int i=0; i <months; i++){
		cin >>used;
		sum += (data-used);
	}
	
	sum+= data;
	
	cout << sum << endl;




}
