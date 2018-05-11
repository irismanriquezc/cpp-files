#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>



using namespace std;

int main(){

int count=0;
double coe[5];
double values[5]= {}, zeros[5]={};
double power=0, power2=0, x1=0, x2=0, hold;
double guess=0, equation=0, derivative=0, result=2;
bool far=true;
/*
cout << "Hello, Welcome to a program designed to help with Newton's Method\n";
cout << "The background of this program consists of small little people who running around and doing the calculations for you\n"
cout << "Now you wont have to worry about that tidious process that can take hours to complete\n";
cout << "Sometimes to even find out THAT THERE IS NO ROOT\n";
cout << "These people work hard for you \n"

cin.get();
  
  */

// PROMPTING THE USER FOR VALUES //
	for( int i =4; i >-1; i--){
		cout<< "How many coefficients for x^"<<i << endl;
		cin >> coe[i];
		
	if( i==0){
		values[i]=coe[i];}
		
	if(coe[i] !=0){
		count+=1;
		values[i]=coe[i];}
}

// DISPLAYING THE EQUATION//
cout << "The equation you are calculating is: "<< endl;
for ( int i=4; i>-1; i--){
		
		if ( (values[i]!=0 )&& (i!=0)) {
			cout << values[i] << "x^" << i << " + "; }
		else if(values[i] == 0) {
			cout <<' '  ;  	}
		else {
 			cout << values[i]<< endl; }
		
	}

// DERIVATIVE EQUATION DISPLAY//
cout << "The derivative of that equation is :" << endl;
for ( int i= 4; i >-1; i--){
	
	if( i==1)
	cout << values[i] *i << " "<< endl;
	else if (values[i] != 0 && i !=0 && i !=1){
		cout << values[i] *i << "x^" << i-1 << " + "; }
	else if( values[i] == 0)
		cout<< ' '; 
	else if( i==0)
	cout <<' ';
	}


cout << "What is your intial guess?\n";
cin >> guess;

for( int iterations=0; iterations < 100000; iterations++)
{




//EQUATION CALCULATION// 
for ( int i=0; i <5; i++){
	if(i==0){

		equation+= values[i]; 		}
		
	else if( i!=0){
		power= pow(guess, i);
		equation = equation + (values[i] * power)  ;  }
		
	}

// DERIVATIVE CALCULATION//
for( int i=1; i<6; i++){
	if(i==1)
		derivative += values[i];
	else if (i !=0){
		power2=pow(guess, i-1);
 		derivative += ((values[i] *i)*power2);	}
 }
 
 x1= guess - (equation/derivative);
  guess= x1;
 equation=0;
 derivative= 0;
  

 
 if(x1 ==x2){
 		far= false;
		break; }
		
	 
	
x2= guess - (equation/derivative);



}

cout << "The little people working have found that the root is " << x1<< endl;
}

