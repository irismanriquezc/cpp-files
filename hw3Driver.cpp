#include "css2Hw3.hpp"
#include <iostream>

using namespace std;

int main(){

Month theirMonth;
string monthL;
int num;
// char res;
// 	cout << "Press -l to enter the first three letters of the month \n -n to enter the number of the month\n";
// 	cin >> res;
//
// 	if(res == 'l' || res== 'L'){
// 		inputLetters();
// 		outputNum()
// 		nextMonth();
// 		}
monthL= theirMonth.setLetters();
num= theirMonth.setNum();
theirMonth.outputNum(num);
theirMonth.outputLetters(num);
theirMonth.nextMonth(num);







}
