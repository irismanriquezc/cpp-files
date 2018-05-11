// Name
// Date
//Assignment
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

if (array[i]<=100&& array[i]>=95){
	cout<<array[i]<<" is the greatest number\n";
	break;}
else if (array[i]>=80&& array[i]<=94){
	cout<<array[i]<<" is the greatest number\n";
	break;}
	

}

return 0;
}
