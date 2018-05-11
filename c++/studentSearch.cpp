#include <iostream>
#include <string>

using namespace std;

struct student{
	string name;
	};

string inputStudents();
void displayStudents(student arrayS[]);
void searchStudent(student arrS[]);

int main() {
	student arrayStudents[10];
	
	for(int i=0; i < 10; i++){
		arrayStudents[i].name= inputStudents();}

displayStudents(arrayStudents);
searchStudent(arrayStudents);
}

string inputStudents(){
	string n;
	cout << "Enter the name of the student\n";
	cin >> n;
	return n;
}

void searchStudent(student arrS[]){
	string needle;
	cout << "Enter the person to search for \n";
	cin>> needle;
	for(int i=0; i<10; i++){
		if( arrS[i].name == needle)
			cout << "We found " << arrS[i].name << "they are number " << i+1 << " in the roster\n"; }
}

void displayStudents(student arrayS[]){
 for ( int i=0; i<10; i++){
 	cout << "Student number " << i+1 << ": " << arrayS[i].name << endl;}
}
