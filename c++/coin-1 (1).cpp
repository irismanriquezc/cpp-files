// Iris Manriquez
// September 29, 2017
// Lab 7, #1



#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main()
{
srand( static_cast<unsigned>(time(NULL) ) );

int coin, heads=0,tails=0,i	;

for (i=0; i<100; i++){
coin = (rand()%2);
	if (coin ==0){			
	heads++;}
	else if (coin ==1){
	tails++;}
}
cout << heads<< " heads " << heads << "%"<<endl;
cout << tails<< " tails " << tails << "%"<<endl;
return 0;
}
