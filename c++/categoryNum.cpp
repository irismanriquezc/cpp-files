// Name
// Date
//Assignment
// Description


#include <iostream>

using namespace std;

int main()
{
int i,even=0,odd=0,neg=0,pos=0, array[10];

for (i =0;i<10;i++) {
cout <<"enter a numero\n";
cin>> array[i]; 
if (array[i]%2==0){
even= even+1;}

if (array[i]%2==1){
odd= odd+1;}

if (array[i]>0){
pos= pos+1;}

if (array[i]<0){
neg= neg+1;
}

}
cout << "There are " << odd<< " odd numbers"<< endl;
cout << "There are " << even<< " even numbers"<< endl;
cout << "There are " << neg<< " neg numbers"<< endl;
cout << "There are " << pos<< " pos numbers"<< endl;
return 0;
}
