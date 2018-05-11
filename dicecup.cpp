#include <iostream>
#include <cmath> 
#include <cstring>

using namespace std;



int main() {

int num1, num2;


	cin >> num1 >> num2;
	
	if(num1==num2){
		cout<< num1+1<< endl;}
	else if( num1 > num2){
		for(int i =num1-1; i<num1+2; i++){
			cout << i << endl;}}
	else if( num2 > num1){
		for(int i =num1+1; i<num2+2; i++){
			cout << i << endl;}}

}
