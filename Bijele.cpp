#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int one=1, two=2, eight=8;
	int arr [6];
	int input1, input2, input3, input4, input5, 	input6;

	cin >>input1>> input2>> input3>> input4>> input5>>input6;
	
	for(int i =0; i<6; i++){
		
		if(i==0)
			arr[i] = one-input1;
		else if(i==1)
			arr[i]=one-input2;
		else if(i==2)
			arr[i]=two-input3;
		else if(i==3)
			arr[i]= two-input4;
		else if(i==4)
			arr[i]= two-input5;
		else
			arr[i]= eight-input6;
		}
		
		for (int i=0; i<6;i++){
			if(i==5)
			cout << arr[i];
			else
			cout<<arr[i]<<" ";
			}
	cout << endl;
}
