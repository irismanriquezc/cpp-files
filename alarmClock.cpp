#include <iostream>
#include <cmath>

using namespace std;

int main(){

int hour, min, allmin;

	cin >> hour >> min;

	if(hour==0)
		hour=24;

	if( min <45){
		hour -=1;
		allmin=60-45;
		min +=allmin;}
		
	else{
		min-= 45;}
		
	if(hour>23)
		hour= 0;
		
	cout << hour << " "<< min<< endl;
		








}
