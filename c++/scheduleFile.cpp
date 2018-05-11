#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

string days, course, times;
int numcourses;

	ofstream sfile;
	sfile.open("Manriquez_schedule.txt");
	
	cout << "How many courses are you taking" << endl;
	cin >> numcourses;
	
	for (int i=0; i <numcourses; i++){
		cout << "What is the name of the course" << endl;
		cin >> course;
		
		cout << "What days do you have this class? (Ex: MWF)" << endl;
		cin >> days;
		
		cout << "What time is your class? (Ex: 11:00AM-12:30PM)" << endl;
		cin >> times;
		
		sfile<<  course << " " <<days << " " <<times <<endl;
		}
	
	






}
