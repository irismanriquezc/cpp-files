// Name
// Date
//Assignment
// Description


#include <iostream>

using namespace std;

int main()
{
int cel=100, far;

far = ((cel*9/5)+32);

while ( cel != far) {
cout << cel <<" Celsius is equal to " << far << " Farenheit" << endl;
cel--;
far = ((cel*9/5)+32);
}
cout << cel <<" Celsius is equal to " << far << " Farenheit" << endl;




return 0;
}
