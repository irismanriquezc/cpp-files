// Iris Manriquez
// October 13, 2017
// Lab 9 Problem 1


#include <iostream>
#include<string>

using namespace std;

int main()
{
string sen;

cout << "Enter the sentence\n";
getline(cin,sen);

for (int i=0; i<sen.length();i++){
if (sen[i] ==' '&& sen[i+1]==' '){
sen.erase(i, 1);}

if (sen[i]!=sen[0]&&isupper(sen[0])){
sen[i]=tolower(sen[i]);}

if (islower(sen[0])){
sen[0]=toupper(sen[0]);}
}
cout<< sen<<endl; 


return 0;
}
