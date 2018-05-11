#include "CsHomework2.hpp"
#include <iostream>

using namespace std;

void counter::init_value(){
value =0;
}

void counter::addValue(){
	int times;
	
	cout << "How many times do you want to increase the count?" << endl;
	cin >> times;
	
	value+=times;

}

void counter::subValue(){
		int iterations;
		cout << "How many times do you want to decrease the count?" << endl;
	cin >> iterations;
	
		value-= iterations;
		if(value <0){
			cout << "The value has reached 0 and cannot be negative" << endl;
			value=0;}
		
}

void counter::displayValue(){

cout << "The value of the counter is currently: " << value << endl;}


