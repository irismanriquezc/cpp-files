#include <iostream>
#include <cmath>
#include<cstdlib>
#include <fstream>


using namespace std;

void mergeFiles(ifstream& file1, ifstream& file2, ofstream& destination);
void errorOpening( ifstream& fileone, ifstream& filetwo, ofstream& combined);

int main(){

ifstream fileone;
ifstream filetwo;
ofstream combinedfile;

fileone.open("merge1.txt"); 
filetwo.open("merge2.txt");
combinedfile.open("mergeAll.txt");

errorOpening(fileone, filetwo, combinedfile);

mergeFiles( fileone, filetwo, combinedfile);

fileone.close();
filetwo.close();
combinedfile.close();

return 0;
}

void errorOpening( ifstream& fileone, ifstream& filetwo, ofstream& combined){

	if ( fileone.fail() || filetwo.fail() || combined.fail() )
			{
			cout <<"Error opening file\n";
			exit(1);}
}


void mergeFiles(ifstream& file1, ifstream& file2, ofstream& destination){
int number1, number2;
	
	file1 >> number1;
	file2 >> number2;

	while( !file1.eof() || !file2.eof() ) {

				if( ( !file1.eof() && !file2.eof() ) && (number1 < number2) ) {
					destination << number1<< " " ; 
						file1 >> number1; }

				else if( (!file1.eof() && !file2.eof()) && (number2 < number1) ) {
					destination << number2<< " " ;
						file2 >> number2;   }

				else if( (!file1.eof() && !file2.eof()) && (number2 == number1) ){
							
							destination << number1 << " " ;
							destination << number2<< " " ;
										file1>> number1 ;
										file2>> number2;   }

				else if( file1.eof() && !file2.eof() ){
					while(file2 >> number2) {
					destination << number2<< " " ; }}

				else if( file2.eof() && !file1.eof() ){
					while(file1 >> number1) {
					destination << number1<< " " ; }}
				
							
		}
}
