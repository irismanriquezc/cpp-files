#include <iostream>
#include <string>

using namespace std;

int main(){

string saying, end, str2;
int iterations, position;

cin >> iterations;

for (int i=-1 ; i <iterations; i++){
	
	getline(cin, saying);
	
	if(saying.find("simon says ")==0){
		position= saying.find("says");
		position+=5;
		str2= saying.substr(position);
		end+= str2 + "\n";}
	else{
		end+= " \n";}
	
	}


	cout << end;
}




