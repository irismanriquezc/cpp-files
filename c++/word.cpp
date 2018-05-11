// Name
// Date
//Assignment
// Description


#include <iostream>
#include<string>

using namespace std;

int main()
{

string word;
int count=0, pal;

cout<<"Enter a string"<<endl;
getline(cin,word);

//length= word.len()
for (int i=0;i<word.length();i++){
count +=1;
if (word[i] == ' '){
pal++;}
}
cout<< "The string is " << count << " characters long"<<endl;
cout << " The following string has " << pal << " words" << endl;
return 0;
}
