// Name
// Date
//Assignment
// Description


#include <iostream>

using namespace std;

int main()
{

double stemp, etemp, velocity;

cout << "Enter a starting celsius temperature " << endl;
cin >> stemp;

cout << "Enter an ending celsius temperature " << endl;
cin >> etemp;

while ( stemp <= etemp ) 
{
velocity = 331.3 + 0.61*(stemp);
cout<< " At " << stemp << " degrees Celsius the velocity of sound is " << velocity <<" m/s"<< endl;
stemp++;
}

return 0;
}
