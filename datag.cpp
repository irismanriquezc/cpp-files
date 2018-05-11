//Creates directory into a .csv file

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

string name , workPhone;
int age;
int num_entries=0;

ofstream out_file;

out_file.open("datl.csv");

cout << "How many entries do you want" << endl;
cin >> num_entries;

while (num_entries <0) {
cout << "Negative values not allowed"<< endl;
cout << "Enter a value greater than zero"<< endl;
cin >> num_entries;
}
cin.ignore();
for (int i=0; i < num_entries; i++){
cout << "Enter name for entry " << (i+1) << endl;
getline(cin, name);

cout << "Enter age\n";
cin >> age;

cout << "Enter phone number\n";
cin >> workPhone;

cin.ignore();
out_file<< name << ", " << age << ", " << workPhone<< endl;
}
out_file.close();


return 0;

}

