// Name
// Date
//Assignment
// Description


#include <iostream>
#include <cassert>
using namespace std;
double kmConverter(double km);
// Summary: Converrs he kilometers to miles and returns
// the iles.
//Preconditions: km >=0
//Postconditions: Equivalent miles is returned.
//*****************************************************************************
//
//*****************************************************************************
double getKM();
// Summary: Get's the value  of kilometers from the user and 
//returns the value.
//Preconditions:
//Postconditions: Kilometer value is returned.
//*****************************************************************************
// 
//*****************************************************************************
void printConversion(double km, double mi);
//Summary: prints the kilometers and equivalent miles
//to the console.
//Preconditions: km >=0 and mi>=0
//Postconditions: The conversion is displayed on console
//******************************************************************************
//
//*******************************************************************************
void runTest ();
//Summary: This function runs the program that
// converts the kilometers to miles.
//Preconditions:
//Postconditions:
//*****************************************************************************
//
int main()
{
		runTest ();
		return 0;
}
double kmCpnverter (double km)
{
		double mi = km * 0.6214;
		return mi;
}
double getKM()
{
		double km=0;
		cout <<"Enter the kilometers\n";
		cin >> km;
		return km;
}
void printConversion (double km, double mi)
{
		assert (km >=0);
return 0;
}

