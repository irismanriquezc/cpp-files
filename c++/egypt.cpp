#include <iostream>
#include <cmath>

using namespace std;

int main(){

int a, b, c;


for( int i=0; i<1000; i++){

cin >> a >> b >> c;

	if( a==0 && b==0 && c==0)
		break;
	else if((pow(a,2)+pow(b,2))== pow(c,2)){
			cout << "right" << endl;
		}
	else 
		cout << "wrong" << endl;

}
	
}
