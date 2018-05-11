#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main() {

int antler1, antler2;
string odd= "Odd ", even="Even ";
int endnum=0;

	cin >> antler1 >> antler2;
	
	
	if(antler1==0 && antler2==0){
		cout << "Not a moose\n";}
	else if(antler1== antler2){
		endnum= antler1*2;
		cout << even << endnum<<endl; }
	else if( antler1> antler2){
		endnum= antler1*2;
		cout << odd << endnum<<endl; }
	else if( antler2> antler1){
		endnum = antler2*2;
		cout << odd << endnum<<endl; }







}
