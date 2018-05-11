// Iris Manriquez
// Sept. 22, 2017
// Lab 6 Problem 2




#include <iostream>

using namespace std;

int main()
{

int num =3;
bool pri=true; 

while( num<100)
{
	pri = true;
 	for(int o =2; o < num-1; o++)
{

	if( num%o==0)
{
pri = false;
}
}
if(pri)
{ 
cout << num << endl;
}

num = num + 2;
}
return 0;
}
