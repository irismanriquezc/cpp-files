#include <iostream>
#include <string>
using namespace std;

int main()
{

double num=0 ,num1=0, outcome; 

char res = 'Y';

while (res == 'Y' || res =='y' )
{
cout << "Enter a number " << endl;
cin >> num;

cout << "Enter another number " <<endl;
cin>> num1;

outcome = num*num1;

cout << "The product of these numbers is " << outcome << endl;

cout << " Want to continue? Then enter y" << endl;
cin>> res;

}

return 0;
}



