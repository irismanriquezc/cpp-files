#include "hugeNum.hpp"
#include <iostream>

using namespace std;

int main(){

unsigned short int arr1[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
unsigned short int arr2[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};


Huge number1, number2;
Huge sum, diff, eq, greater, less;

for(int i=0; i <13;i++){
  cin >> arr1[i];
}

for(int i=0; i <13;i++){
  cin >> arr2[i];
}
number1.setNum(arr1);
number2.setNum(arr2);

sum = number1 + number2;
diff = number1-number2;


if ( number1 > number2){
  cout << " The first number is greater"<< endl;
}
else if( number1 < number2){
  cout << " The second number is greater"<< endl;
}
if( number1 == number2){
  cout << "The numbers are equal"<< endl;
}

 cout << "The sum of the numbers is: "<< sum << endl;
 cout << "The difference of the numbers is: "<< diff << endl;













}
