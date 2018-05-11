#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string name();
double gpa();

const int people = 5;

int main()
{
double average, sum;
char res;
// ARRAY UNO FOR NAMES
string arrayUno[5];
// ARRAY DOS FOR GPA
double arrayDos[5];



do {

for (int i=0; i <5; i++){
arrayUno[i] = name();
arrayDos[i]=gpa(); }

cout <<"[0]"<< arrayUno[0] <<" " << "("<< arrayDos[0]<< ")"<< endl;
cout <<"[1]"<< arrayUno[1] <<" " << "("<< arrayDos[1]<< ")"<< endl;
cout <<"[2]"<< arrayUno[2] <<" " << "("<< arrayDos[2]<< ")"<< endl;
cout <<"[3]"<< arrayUno[3] <<" " << "("<< arrayDos[3]<< ")"<< endl;
cout <<"[4]"<< arrayUno[4] <<" " << "("<< arrayDos[4]<< ")"<< endl;

for (int u =0;  u < 5; u++){
sum += arrayDos[u];
}
average= sum/5;
cout << "The average GPA is " << average<< endl;
cout << "Again? Press y"<< endl;
cin >> res;
}while( toupper(res)=='Y');



return 0;
}

string name(){
string nombre;
 cout << "Enter a name" << endl;
cin >> nombre;
return nombre; }

double gpa(){
double grade;
cout << "Enter a GPA"<< endl;
cin >> grade;
return grade;

}







