

#include <iostream>
#include <string>

using namespace std;

int main()
{

int uno,dos,i;
char choice='y';
while (choice == 'y'|| choice == 'Y'){
cout<< "Enter two numbers seperated by a space\n";
cin>>uno>>dos;

cout <<"   \n";

if ( uno > dos){
	for (i=uno; i >=dos; i--){
	cout << i << " " << endl;

	}
}
else if (uno==dos){ 
cout << uno<< endl;}

else {
	for (i=uno; i <=dos; i++){
	cout << i << " " << endl;

}}

cout << "Try again? Press y\n";
cin >> choice;
}
return 0;
}
