#include <iostream>
#include <string>

using namespace std;

int main(){

	int cases, num, count=0;
	string places[num];
	
	cin >> cases;
	for(int i=0; i<cases; i++){
		cin >> num;
			for(int l=0; l<num; l++){
				cin >> places[l];
				for(int m=1; m<num+1; m++){
					if(places[l] == places[m]){
						count+=1;}}}
	cout << count << endl;
	

}}
