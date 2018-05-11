#include "CsHomework2.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	counter valueOne;
	string response;
	
	do{
	cout << "Do you want to add or subtract or exit? " << endl;
	cin>> response;
	
	if(response== "add")
		valueOne.addValue();
	else if(response== "subtract")
		valueOne.subValue();
		


valueOne.displayValue();
}while(response!="exit");


}
