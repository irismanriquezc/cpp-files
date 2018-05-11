#include <iostream>

using namespace std;

int main(){

int arr[8]= {5,9,2,4,0,1,5,8};
int min, size=8;
int target=9;
int s,m,e;
bool found= false;

for(int i=0; i< size; i++){
	min=arr[i];
	for(int m=0;m<size;m++){
		if(min< arr[m]){
			min = arr[m];
			arr[m]=arr[i];
			arr[i]=min;}}}
for(int i=0; i<8; i++){
	cout << arr[i] <<", ";}
	
	s=0;
	e=size-1;
while(s<=e){
	
	m= arr[(s+e)/2];
	
	if(arr[m] ==target){
		found = true;
		cout << "Found in " << m << endl;}
		
	else if(arr[m] <target){
		e = m-1;	}
		
	else if(arr[m]>target){
		s= m+1;}
		
	else {
		break;}
		
	
}
cout << "Not found" << endl;
}




