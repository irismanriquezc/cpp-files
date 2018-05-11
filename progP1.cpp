// Iris Manriquez
// Novemeber 9, 2017
// Programming Projects #1



#include <iostream>
#include <string>
#include <cassert>


using namespace std;
string dayT( int hora);
int conversion( int hr);


int main()
{


int hour, hour2, minutes;
string which;
char res;
do{
cout << "Enter the hour"<<endl;
cin >> hour;

cout << "Enter the minutes"<< endl;
cin >> minutes;

which= dayT(hour);

hour2 = conversion(hour);

cout << hour <<":"<< minutes<< " is converted to " << hour2<< ":" << minutes<< which<< endl;
cout << "Want to continue? Press y"<< endl;
cin >> res;
} while(res=='y');
return 0;
}


int conversion( int hr)
{
hr = hr-12;

return hr;

}

string dayT(int hora){
string cual;

if ( hora >12){
cual = "PM";
}
else{
cual = "AM";}

return cual;
}








