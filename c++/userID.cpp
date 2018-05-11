// Iris Manriquez
// October 13, 2017
// Lab 9 Problem 1

#include <iostream>

using namespace std;

int main()
{
string sen;

cout<<" Input your sentence\n";
getline(cin,sen);

for (int i=0; i<sen.length();i++){
if( isdigit(sen[i]) && sen[i-1]=='x'){
sen[i]= 'x';}
else if (isdigit(sen[i]) && isalpha(sen[i-1])){
sen[i]=sen[i];}
else if (isdigit(sen[i]) && isdigit(sen[i+1])){
sen[i]='x';
sen[i+1]='x';}
else if (isdigit(sen[i])&& sen[i+1] ==' '&& sen[i-1]==' '){
sen[i]= 'x';}
else {
sen[i]=sen[i];}

}
cout << sen<< endl;
return 0;
}
