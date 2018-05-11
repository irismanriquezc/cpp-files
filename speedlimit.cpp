#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

int runs, miles, hours;
int sum;
int mileage[runs], hourlist[runs];



cin >> runs;
	//if(runs==-1)
		//break;

	for(int i = 0; i<runs; i++){
		cin >> miles >> hours;
		hourlist[i]= hours;
		mileage[i]= miles;
		}

	for(int r= 1; r<runs; r++){
		for(int n=0;n <runs-1; n++){
			sum= hourlist[r]-hourlist[n];
			cout << sum<< " SUM " << endl;
			continue; } 
			cout << sum<< " SUM " << endl;}







}
