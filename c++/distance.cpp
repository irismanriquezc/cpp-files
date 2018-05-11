// Iris Manriquez
// Sept 2, 2017
// Problem number 4 on homework
// User choosing a time in seconds and finding the distance of an object landing. 

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

double seconds,distance,seconds1;

cout << " Enter the amount of seconds" << endl;
cin >> seconds;

seconds1= pow(seconds,2);

distance = ((32.0 * (seconds1))/2.0) ;
 
cout << "The object will be " << distance << " feet away from you"<<endl;

return 0;

}
