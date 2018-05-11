#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib> 


using namespace std;

int main(){

srand( static_cast<unsigned>(time(NULL) ) );
 
int number;

ofstream out_file;

out_file.open("randNumbers.txt");

for( int i=0; i < 10; i++){
number = rand()%101;
out_file << number<< endl;

}

out_file.close();

}
