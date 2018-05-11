// Name
// Date
//Assignment
// Description


#include <iostream>
#include<cmath>
#include <string>

using namespace std;

int main()
{

int days, count=0;
int arr[days];

cin >> days;

for (int i=0; i< days; i++){

cin >> arr[i];

if( arr[i] >= -1000000 && arr[i] <= 1000000){
if (arr[i] < 0){
count += 1;}
}
}
cout << count << endl;

return 0;
}
