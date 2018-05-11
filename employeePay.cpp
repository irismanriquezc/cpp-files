// Iris Manriquez
// Sept 8, 2017
// Homework 2 Problem 1
// Pay of a user

#include <iostream>
#include <string>

using namespace std;

int main()
{

double hours, NormalPayHours, NormalPayMoney, OvertimeHours, OvertimePay, dependents, WeekPay, SocialSecurityTax, FedTax, StateTax, UnionDues, Totaal,  TotalWeekPay; 

cout<< "How many hours did you work this week?" << endl;
cin>> hours;

cout <<"How many dependents do you have?" << endl;
cin >> dependents;


OvertimeHours = hours - 40;

NormalPayMoney = 40 * 16.78;
OvertimePay = OvertimeHours*25.17;

WeekPay = NormalPayMoney + OvertimePay;

SocialSecurityTax = WeekPay * .06;
FedTax= WeekPay * .14;
StateTax = WeekPay * .05;
UnionDues= 10;

TotalWeekPay= WeekPay - (SocialSecurityTax + FedTax + StateTax + UnionDues);

cout<< "Your weekly gross pay is " << WeekPay<< endl;

std::cout<< "You are being withheld :" <<endl;
std:: cout << SocialSecurityTax << " dollars or Social Security Taxes "<<endl;
std:: cout<< FedTax << " dollars for Federal Taxes " <<endl;
std:: cout<<StateTax << " dollars for State Taxes " << endl;
std::cout << UnionDues << " dollars for union dues"<<endl;

if (dependents >= 3) {
cout << "and due to having 3 or more dependents $35 are being withheld for health insurance."<<endl;
Totaal= TotalWeekPay - 35;
cout<< "Your total take home pay is " << Totaal << endl;
}
else {
cout<< "Your total take home pay is " << TotalWeekPay << endl;
}

return 0;
}
