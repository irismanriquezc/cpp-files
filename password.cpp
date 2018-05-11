// Name
// Date
//Assignment
// Description


#include <iostream>
#include <string>
using namespace std;

int main()
{

string psswd;

cout << "Enter a password\n";
cin>>psswd;

for (int index=0; index < psswd.length(); index++){
 if (isupper(psswd[index])) {
 cout<<"Valid Password\n";
}
else if (islower(psswd[index])) {
cout << "Valid Password\n";
}
else if (isdigit(psswd[index])) {
cout << "Valid Password\n";
}
else {
cout << "invalid password\n";}
return 0;
}}
