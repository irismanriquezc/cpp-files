// Iris Manriquez
// Sept. 8, 2017
// Homework 2, Problem 2
// Using arithmetic to find sum, product, differences and quotient.



#include <iostream>

using namespace std;

int main()
{
int numUno, numDos, sum, diff1, diff2, prod, quo1, quo2;

cout << "Enter your first number" << endl;
cin>> numUno;
cout << " Enter your second number" <<endl;
cin>> numDos;

sum = numUno + numDos; 
diff1 = numUno-numDos;
diff2 = numDos-numUno;
prod = numUno*numDos; 
quo1 = numUno/numDos;
quo2 = numDos/numUno;

if (numUno%numDos ==0 ) {
cout <<numUno<< " divided by  " << numDos<< " is"  <<quo1<< endl;
}
else if (numUno%numDos != 0) {
cout <<numUno<< " is not divisible by " << numDos<< endl;
}


if (numDos%numUno ==0 ) {
cout <<numDos<< " divided by " << numUno<< " is " <<quo2<< endl;
}
else if (numDos%numUno != 0) {
cout << numDos << " is not divisible by " <<numUno<<endl;
}

std:: cout << "The sum of these numbers is " << sum<< endl;
std:: cout << "The product of these numbers is " << prod<< endl;
std:: cout <<numUno<< " minus " << numDos << " is " <<diff1 << endl;
std:: cout <<numDos<< " minus " << numUno<< " is " <<diff2<< endl;


return 0;
}
