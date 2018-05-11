// Name
// Date
//Assignment
// Description


#include <iostream>
#include <string>
#include <cassert>

using namespace std;

unsigned int count_letter();

int main()
{

count_letter();

return 0;
}

unsigned int count_letter(string str, char target){
int letter =0;
cout << "enter a string"<< endl;
cin >> str;
cout << "enter your target" << endl;
cin >> target;
for( int i=0; i <str.length();i++){
if (str[i] == target){
letter += 1;
}
}
return letter;
}
