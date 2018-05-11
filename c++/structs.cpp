#include <iostream>
#include <string>

using namespace std; 

// define structures globally

struct person {
string first_name;
string last_name;
char middleI;
unsigned int age;
 };

int main(){

	person zach;
	zach.first_name= "Zach";
	zach.last_name= "Ramirez";
	zach.middleI= 'M';
	zach.age = 15;
	cout << "Name: " << zach.first_name << " " << zach.middleI << " " << zach.last_name << endl;

	struct produce {
		string name;
		double cost;
		}melon, apple, oranges;
		
		melon.cost= 1.00;
		melon.name= "Melon";

	return 0;


}


