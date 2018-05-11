// Iris Manriquez
// September 1, 2017
// Programming Projects #2
// Adding Cents

#include <iostream> 

using namespace std;

int main()
{
double quarters,dimes,nickels,total;

cout << "Enter the amount of quarters"<<endl;
cin >> quarters;


cout << "Enter the amount of dimes"<<endl;
cin >> dimes;
cout << "Enter the amount of nickels"<<endl;
cin >> nickels;

total = (quarters*25)+(dimes*10)+(nickels*5);


cout<< "You have " << total << " cents" <<endl;
return 0;

}
