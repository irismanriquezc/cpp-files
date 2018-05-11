#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main () {

double number; 
double sum = 0, count=0;
double average;

ifstream file;

file.open("numeros.txt");

while( file >> number){
sum += number;
count+= 1;

}
average = sum/count;

cout << "The average is " << average << endl;


file.close();
return 0;
}
