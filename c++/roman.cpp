// Iris Manriquez
// Semptember 15, 2017
// Prblem 2, Lab 5
//  Numbers into their roman value


#include <iostream>
#include <string>
using namespace std;

int main()
{

int num;

char res = 'Y';

while (res == 'Y' )
{
cout << "Enter a number from one through ten" << endl;
cin >> num;

switch (num) {
case 1:
	cout << "This is I in roman numeral" << endl;
	break;

case 2:
	cout << "This is II in roman numeral" << endl;
	break;

case 3:
	cout << "This is III in roman numeral" << endl;
	break;

case 4:
	cout << "This is IV in roman numeral" << endl;
	break;

case 5:
	cout << "This is V in roman numeral" << endl;
	break;

case 6:
	cout << "This is VI in roman numeral" << endl;
	break;

case 7:
	cout << "This is VII in roman numeral" << endl;
	break;

case 8:
	cout << "This is VIII in roman numeral" << endl;
	break;

case 9:
	cout << "This is IX in roman numeral" << endl;
	break;

case 10:
	cout << "This is X in roman numeral" << endl;
	break;

default: 
	cout << "Please enter a number between 1-10" << endl;
	break;
}
cout << " Want to continue? Then enter y" << endl;
cin>> res;

}





return 0;
}
