#include <iostream>
#include <string>

using namespace std;

int main(){

	int sum=0, num1, num2, num3, num4;
	int arr[5], max;
	int winner, score;
	
	for (int i=0; i <5; i++){
		cin >>num1>> num2>> num3>> num4;
		sum = num1+ num2+ num3+ num4;
		arr[i]= sum;}
		
	max= arr[0];
	for( int l=0; l <5; l++){
		
		if(arr[l] >= max){
			winner = l+1;
			score= arr[l];
			max=arr[l];
			}
	
	}
	cout << winner << " " << score << endl;
}
