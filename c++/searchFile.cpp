#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

string inputName( );
void errorOpening( ifstream& file);
void searchFile( string name, ifstream& file);

int main() {

string name;

name = inputName();

ifstream origin;

origin.open("babynames2012.txt");

errorOpening(origin);

searchFile(name, origin);

origin.close();
return 0;
}




void errorOpening( ifstream& file) {
	if ( file.fail() )
			{
			cout <<"Error opening file\n";
			exit(1);}
	}


string inputName( ) {

		string name;
		cout << "Enter a name to be searched\n";
		cin >> name;
		return name;
	}

void searchFile( string name, ifstream& file) {

	string males;
	string females;
	int number;
	bool nameNo=false;
	
	while( !file.eof() ) {
		file >> number;
		file >> males;
		file >> females; 	


			if( name == males && name!= females) {
				cout << name << "is ranked " << number << "in boys \n";
				cout << name << " does not appear in the girls list  \n";  
						nameNo= true;	}		

			else if (name != males && name== females) {
			cout << name << "is ranked " << number << "in girls \n";
				cout << name << " does not appear in the boys list  \n"; 
				nameNo= true; 	}
			
		else if ( name == males && name == females) {
			cout << name << "is ranked " << number << "in girls \n";
			cout << name << "is ranked " << number << "in boys \n"; 
				nameNo= true;} 
			
				if( 
	}
		if ( nameNo== false) {
				cout << name << " does not appear in neither list  \n";  
							}
 }
