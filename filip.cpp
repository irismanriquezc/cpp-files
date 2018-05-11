#include <iostream>
#include <cmath>

using namespace std;

int main() {

int a, b;
int usingn;
int reverse=0;


	cin >> a >> b;
	
	while(a!=0&& b!=0){
		if(a==b)
			continue;
		else if(a >b)
			usingn=a;
		else 
			usingn=b;}
	
	
	while( usingn !=0){
		 
		 reverse = reverse*10;
		 reverse = reverse+ usingn%10;
		 usingn = usingn/10; 
		
		 }
		 
	cout << reverse<< endl;
	
	
	}
		










