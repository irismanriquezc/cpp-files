// Name
// Date
//Assignment
// Description


#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool need_more_money(double total);
char get_coin();
double update_total(double total, char coin);
double getChange(double total);


int main()
{
double have;
double Stotal=3.50, coin;
bool yn;



do{
coin= get_coin();
Stotal= Stotal - update_total(have, coin);

need_more_money(Stotal);
yn=need_more_money(Stotal);
cout << Stotal<< endl;
if (!yn){
getChange(Stotal);
}
}
while(yn);







return 0;
}


bool need_more_money(double total)
{
	if (total < 3.50&& total >0){
	cout << " Please insert another coin, you need \n";
	return true;
}

	else{ 
	return false;
	}
}
// Summary: returns true if the total is less than 3.50 and false otherwise.

 

char get_coin()
{
	char coin;
	cout << "Please insert a q – quarter, d – dime, n-nickel \n";
	cin >> coin;

	return coin;
}
// Summary: Functions asks user to enter coin q – quarter

// d – dime, n-nickel and returns that character

 

double update_total(double total, char coin)
{
	double quarter= 0.25;
	double nickel=0.05;
	double dime=0.10;

	if (coin == 'q'){
	total =+ quarter;}

	else if (coin == 'd'){
	total =+ dime;}

	else if (coin == 'n'){
	total =+ nickel;}

	return total;
}
// Summary: adds the coin amount to the total and returns the new total

 

double getChange(double total)
{
double change=0.00;

change = total*-1;
cout << "Your change would be " << change << " Enjoy your Twinkie!"<< endl;

return change;


}


