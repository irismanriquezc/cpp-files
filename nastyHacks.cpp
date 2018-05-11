#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int cases, num1, num2, num3;
	string total;
	
	cin>> cases;
	
	for (int i=0; i <cases; i++){
		cin >> num1>> num2 >> num3;
		
				if( num1+num3== num2)
					total+="does not matter\n";
				else if((num2 -num3)>num1)
					total+= "advertise\n";
				else if( (num2 -num3)<num1)
					total+= "do not advertise\n";
	}

	cout << total << endl;

}
