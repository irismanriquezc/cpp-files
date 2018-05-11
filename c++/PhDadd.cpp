#include <iostream>
#include <sstream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
	
	int num1,num2;
	int cases,sum, sumArray[cases];
	string equation;
	bool nonNum= false;

	cin >> cases;
	int second= cases;
	
	for(int i =0; i < cases; i++){

		cin >> num1>> num2;
		
		cout << " " << endl;
		cout << "Numero 1: " << num1 << endl;
		cout << "Numero 2: " << num2<< endl;
		cout << " " << endl;
		
		if(num1==0 && num2==32765){
			nonNum= true;	}
	
		sum= num1+num2;
		sumArray[i]= sum; 
	}
	
	for(int a=0; a<second; a++){
		if(nonNum==true){
		cout << "skipped" << endl;}
		else{
		cout<<sumArray[a] << endl;}
}
}
