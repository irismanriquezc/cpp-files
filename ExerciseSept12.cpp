// Iris Manriquez
// Date
//Assignment
// Description


#include <iostream>

using namespace std;

int main()
{
const double PI = 3.1415;
double radius, area, circumference, diameter;


cout << " Please enter the radius" << endl;
cin >> radius; 

area = PI * (radius*radius);
circumference = 2 * PI * radius;
diameter = 2 * radius; 

cout << " The area equals " << area << endl;
cout << "The circumference is " << circumference << endl;
cout << "The diameter equals " << diameter << endl;




return 0;
}
