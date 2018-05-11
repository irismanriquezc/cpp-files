#include "dog.hpp"
#include <iostream>

void Dog::fetch()
{
	cout << name<< " fetched the stick\n";
}
	
void Dog::bark(){
	cout << "Woof woof\n";}

void Dog::initName(string init_name){
	name=init_name;}
	
void Dog::initGender( char init_gender){
	gender = init_gender;}

void Dog::initColor(string init_color){
	color=init_color; }

void Dog::displayInfo(){
	cout << "Name: " << name<< endl;
	cout << "Color: " <<color<< endl;
	cout << "Gender: " << gender << endl;
	}

/*
	void fetch();
		void bark();
		void initName(string init_name);
		void initGender(char init_gender);
		void initColor( string init_color);
		void displayInfo();*/
