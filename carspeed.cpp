#include <iostream>
#include <cstring>

using namespace std;

void printSpeed( int mph);
void calcSpeed(int miles, int time);

struct Speed{

int miles;
int time;

};

int main(){

	struct Speed car1, car2;
	

	

	cin >> car1.miles >>car2.miles;
	cin >> car1.time>> car2.time;
	
	
	calcSpeed( car1.miles, car1.time);
	calcSpeed( car2.miles, car2.time);
	

}

void calcSpeed( int miles, int time){

int mph;

	mph = miles/time;
	printSpeed(mph);
	
}


void printSpeed( int mph){

cout << mph <<" MPH"<< endl;
 
}
