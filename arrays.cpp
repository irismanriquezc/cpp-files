// Iris Manriquez
// October 6, 2017
// Lab 8 problems 1 and 2
// Description


#include <iostream>
#include <string> 
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
srand( time(0) );

int i;
double array[20], total;

for (i =0;i<20;i++) {
array[i] = rand()%101;

if (array[i]<=10&& array[i]<=5){
	cout<<array[i]<<" is the smallest number\n";
	break;}
else if (array[i]<20&& array[i]>=11){
	cout<<array[i]<<" is the smallest number\n";
	break;}
}

for (i =0;i<20;i++) {
array[i] = rand()%101;

if (array[i]<=100&& array[i]>=95){
	cout<<array[i]<<" is the greatest number\n";
	break;}
else if (array[i]>=80&& array[i]<=94){
	cout<<array[i]<<" is the greatest number\n";
	break;}
	

}

return 0;
}
