// Iris Manriquez 
// October 19, 2017
// Homework Wk 10 Problem #5
// Description


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

string res, word;
string l ="love", L= "Love";

cout << "enter a sentence\n";
getline(cin,res);

for (int i =0; i < res.length();i++){

if (isupper(res[i])&&isspace(res[i+4])){
res.erase(i,4	);
res.insert(i, L);

}
if (res[i] == ' ' && isspace(res[i+5]) ){
res.erase(i+1, 4);
res.insert(i+1,l);
}

if (res[i] == ' ' && ispunct(res[i+5]) ){
res.erase(i+1, 4);
res.insert(i+1,l);
}
}
cout << res<< endl;



return 0;
}
