// Iris Manriquez
// November 9, 2017
// Practice Programs #9



#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;
void areaAP( double &side1, double &side2, double &side3);
bool validT(double one, double two, double three);

int main()
{
double side1, side2, side3;
char res;
bool side;

do {
cout << "Enter the first side" << endl;
cin >> side1;

cout << "Enter the second side" << endl;
cin >> side2;

cout << "Enter the third side"<<endl;
cin >> side3;

side = validT(side1, side2, side3);

if (side){
		areaAP( side1, side2, side3);
		cout << "Want to try again? Press y " << endl;
		cin >> res;
					}
else {
		cout << "This is unvalid, please enter new values. Press n"<< endl;
		cin>> res;
			}
	}while(res=='y'|| res=='n');

return 0;
}

bool validT(double one, double two, double three){
bool okay;
if ((one+two>three) && (one +three > two) && (two+three > one)){
okay= true;}
else {
okay = false;}
return okay;


}


void areaAP( double &side1, double &side2, double &side3){
double per, s, area;
per = (side1+ side2+side3);
s= (side1+ side2+side3)/2;
area= sqrt( s * (s - side1) * (s - side2) * (s - side3));
cout << "Perimeter is " << per<< endl;
cout << "Area is " << area<< endl;


}
