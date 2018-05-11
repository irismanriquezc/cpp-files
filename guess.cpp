// Iris Manriquez
// September 29, 2017
// Lab 7, #1



#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>


using namespace std;

int main()
{
srand( static_cast<unsigned>(time(NULL) ) );
int num,ans;
char choice='Y';

while( choice=='y'|| choice == 'Y'){
num = rand()%101;
while(num!=ans){

cout<< "Enter a guess\n";
cin>>ans;

if (num ==ans){
cout<< "You guessed it\n";
	}

else if(num>ans){
cout<< "Too low\n";}

else if(num<ans){
cout<<" Too high\n";}

}
cout << " Want to continue? Then enter y" << endl;
cin>> choice;
}

return 0;
}
