#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int x,y,z;
	
	cin >> x >> y >> z;
	
	for (int i=1; i <z+1 ; i++){
		
		if(i%x==0 && i%y==0)
			cout << "FizzBuzz\n";
		else if(i%x==0)
			cout << "Fizz\n"; 
		else if(i%y==0)
			cout << "Buzz \n";
		else 
			cout << i << endl;
		
		}





}
