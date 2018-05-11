// Iris Manriquez
// Sept 2, 2017
// Lab 4 Problem 2
// Finding out wether the first number is a mutiple of the second 


#include <iostream>
#include <string>
using namespace std;

int main()
{
int number, number2;

cout << "Enter your first number"<< endl;
cin >> number;

cout << "Enter your second number"<< endl;
cin >> number2;

if (number%number2==0){

cout << "This is a multiple of " << number2 << endl;

}

else if (number%number2!=0){

cout << "This is not a multiple of " << number2 << endl;

}


return 0;
}
