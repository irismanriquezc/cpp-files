

#include <iostream> 
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){

ifstream in_file;
in_file.open("me.txt");
if ( in_file.fail())
{
	cout <<"Error opening file\n";
	exit(1);}

// read contents
string first, last;
int age;
in_file >>first >> last;
in_file>> age;

in_file.close();

cout << " First: " << first << " Last: " << last << endl;
cout << "Age: " << age << endl;




return 0;
}

