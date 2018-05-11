#include <iostream>
#include <string>

using namespace std;


struct date {
	unsigned int month, day, year;
	};
struct contact{
	string name;
	date birthdate;
	string phoneN;
	};
	
int main() {

	contact amy;
	amy.name= "Amy Flowers";
	amy.birthdate.month= 1;
	amy.birthdate.day = 24;
	amy.birthdate.year= 1998;
	amy.phoneN = " 831-776-2227";


	cout<< " Enter Amy's number\n"
			<< " Birthdate month, day and year\n";
	cin >> amy.birthdate.month >> amy.birthdate.day >> amy.birthdate.year;

	cout << "Amy's birthdate is: \n" 
				<< amy.birthdate.month << amy.birthdate.day << amy.birthdate.year << endl;

return 0;





}
