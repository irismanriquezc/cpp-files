// Iris Manriquez
// September 28, 2017
// Homework 3, Problem 2



#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <string>

using namespace std;

int main()
{

int first, total= 23, comp, human;



while ( total >0){

cout << "There are "<<total<< " toothpicks,\n";
cout << "How many do you want to take out\n";
cin >>first;

total = total-first;

if( total >= 4 ) { 
comp= 4- first;
total= total-comp;
cout <<"There are " << total<< " toothpicks left\n";}

else if( total>=2 && total <=4){
total = 1;
cout <<"There are " << total<< " toothpicks left\n";}

else if(total==1) {
total= 0;
cout << "Human wins\n";}

else {
cout << "Computer wins\n";
}
/*cout << "Your turn\n";
cin>>human;*/

/*total= total- human; 
cout <<"There are " << total<< " toothpicks left\n";*/



}return 0;}




