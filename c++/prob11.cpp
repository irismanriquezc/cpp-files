// Iris Manriquez 
// October 19, 2017
// Homework Wk 10 Problem #11
// Description


#include <iostream>
#include <string>
using namespace std;

int main()
{

string lol = ":mmZ\dxZmx]Zpgy", lul;
lul= lol;

for (int llave=1; llave<101;llave++){

for(int original=0; original<lol.length();original++){

if(lul[original] < 32 +llave){
lul[original] = ((lul[original] - 32)+127-llave); }

else{
lul[original] = lul[original] - llave;}		

}

cout <<"At key " << llave<< endl;
cout << " Message is " << lul<< endl;
lul=lol; 
}

//REFERENCEEEE
///if(original + key> 126) {
///encrypted = 32 + ((original + key ) – 127)}
//else{
//encrypted = (original + key}




return 0;
}
