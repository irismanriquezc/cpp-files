// Iris Manriquez
// Sept. 22, 2017
// Lab 6 Problem 3



#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
double num, res;
char resp;
cout << " Enter a numero"  << endl;
cin >> num; 

while( resp == 'y' || resp== 'Y') {

cout << " Enter a numero"  << endl;
cin >> num; 

res = (pow(-1,num))/((2*num)+1);
cout << res << endl;
num--; 

}




return 0;
}
