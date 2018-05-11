#include "css2Hw3.hpp"
#include <iostream>

using namespace std;


Month::Month(){
	month=1;
	letters= "Jan";
	}
Month::Month(string word){
	char one, two, three;
	one= word[0];
	two= word[1];
	three= word[2];

}
Month::Month(int num){
	month = num;
	}

int Month::setNum(){
	cout << "Enter the number of the month\n";
	cin >> month;
	this ->month = month;
	return month;
	}

string Month::setLetters(){

	string name;
	cout <<"Enter the first three letters of the month\n";
	cin >> name;
	letters=name;
	return letters;

}
void Month::outputNum(int IMonth){
	cout << "The month you input is the " << IMonth<< " month\n";}

void Month::outputLetters(int numero){
	cout << "This is the month ";
	switch (numero) {
		case 1:
		cout << "January"  <<endl;
	break;
		case 2:
		cout << "February"  <<endl;
	break;
		case 3:
		cout << "March"  <<endl;
	break;
		case 4:
		cout << "April"  <<endl;
	break;
		case 5:
		cout << "May"  <<endl;
	break;
		case 6:
		cout << "June"  <<endl;
	break;
	case 7:
	cout << "July"  <<endl;
break;
		case 8:
		cout << "August"  <<endl;
	break;
		case 9:
		cout << "September"  <<endl;
	break;
		case 10:
		cout << "October"  <<endl;
	break;
		case 11:
		cout << "November"  <<endl;
	break;
		case 12:
		cout << "December"  <<endl;
	break;


	}

	}

void Month::nextMonth(int x){
	if(x==12){

		cout << "The next month would be "<< 1 << endl;
	}
	else{
	cout << "The next month would be "<< x+1 << endl;}
	x=+1;
	switch (x) {
		case 1:
		cout << "January"  <<endl;
	break;
		case 2:
		cout << "February"  <<endl;
	break;
		case 3:
		cout << "March"  <<endl;
	break;
		case 4:
		cout << "April"  <<endl;
	break;
		case 5:
		cout << "May"  <<endl;
	break;
		case 6:
		cout << "June"  <<endl;
	break;
	case 7:
	cout << "July"  <<endl;
break;
		case 8:
		cout << "August"  <<endl;
	break;
		case 9:
		cout << "September"  <<endl;
	break;
		case 10:
		cout << "October"  <<endl;
	break;
		case 11:
		cout << "November"  <<endl;
	break;
		case 12:
		cout << "December"  <<endl;
	break;
}
}
