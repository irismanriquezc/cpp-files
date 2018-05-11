#include "csHomework1.hpp"
#include <iostream>

using namespace std;



	
void CDAccount::get_data(){
	double balance1, inR;
	double m;
	cout << "Enter account balance: $";
	cin >> balance1;
	balance = balance1;
	cout << "Enter account interest rate: ";
	cin >> inR;
	interestRate= inR;
	cout << "Enter the number of months until maturity\n"
	<< "(must be 12 or fewer months): ";
	cin >> m;
	months=m;
	}
	

void CDAccount::displayMaturity(){
	double rate_fraction, interest;
	
	rate_fraction= interestRate/100.00;

	interest= balance*rate_fraction *(months/12.0);
	
	balance= balance + interest;
	
	cout << "balance " << balance;
	cout << "When your CD matures in " << months << " months,\n" << "it will have a balance of $"<< balance << endl;

}

