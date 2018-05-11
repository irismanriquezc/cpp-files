#ifndef DOG_H
#define DOG_H
#include <string>
using namespace std;


class Dog { //class definition
	public:
		void fetch();
		void bark();
		void initName(string init_name);
		void initGender(char init_gender);
		void initColor( string init_color);
		void displayInfo();
	private:
		string name, color;
		char gender;
		

#endif
