#include <iostream>
#include <string>

using namespace std;

int main(){

	string name;
	string output;
	
	cin >> name;
	
	for(int i =0 ; i <name.length(); i++){
		if(isupper(name[i]))
		output += name[i];
		}
	
	for( int i =0; i < output.length(); i++){
		cout <<output[i];
		}

		cout << endl;
}
