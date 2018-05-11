#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

float cost, length, width,sum, area, totalC;
int lawns;

cin >> cost;
cin >>lawns;

	for( int i =0; i < lawns; i++){
		cin >> length >> width;
		area= length*width;
		
		sum += area;
			

	totalC=sum*cost;
	
	
	cout <<fixed<<totalC<<  endl;


}
