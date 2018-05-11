// Iris Manriquez
// Sept. 8, 2017 
// Homework 2, Problem 3
// Comparing numbers


#include <iostream>

using namespace std;

int main()
{
int numero1, numero2;

cout << "Input a number" << endl;
cin>>numero1;

cout<< "Give me another one" << endl;
cin>>numero2;

if ( numero1 == numero2) {
cout << "They are the same number making them equal" <<endl;
}
else if ( numero1 > numero2) {
cout  << numero1 << " happens the rule the house by being the largest one  "<< endl;
}
else if ( numero1< numero2) {
cout <<"Let's be honest " <<numero2 << " is the the larger number here "<< endl;
}

return 0;
}
