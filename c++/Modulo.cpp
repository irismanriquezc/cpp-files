#include <iostream>
#include <string>

using namespace std;

int main(){

	int sum=0, num, all=10;
	int arr[10], diff=0;
	bool mod;
	
	for (int i=0; i <10; i++){
		cin >>num;
		arr[i]= num;
		arr[i] = (arr[i]%42);		
		 }
		 
	for (int i = 0; i < 10 - 1; i++) { 
    for (int j = i + 1; j < 10; j++) {
      
      if (arr[i] == arr[j]){
         sum+=1;
         cout << "  " << endl;
         cout << " THE SUM IS " <<sum << endl;
         cout << "  " << endl;
     		}
  
}}
 cout << all - sum << endl;
 }
