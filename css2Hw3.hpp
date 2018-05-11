/*Define a class called Month that is an abstract data type for a month. Your
class will have one member variable of type int to represent a month
(1 for January, 2 for February, and so forth). Include all the following mem-
ber functions:
- a constructor to set the month using the first three letters in
the name of the month as three arguments,
- a constructor to set the month using an integer as an argument (1 for January, 2 for February, and so forth)
- a default constructor,
- an input function that reads the month as an integer,
- an input function that reads the month as the first three letters in the name of
the month,
- an output function that outputs the month as an integer,
- an output function that outputs the month as the first three letters in the name of
the month, and
- a member function that returns the next month as a value
of type Month . The input and output functions will each have one formal
parameter for the stream. Embed your class definition in a test program. */

#ifndef months
#define months

#include <string>
#include <iostream>
using namespace std;

class Month {
	public:
		Month();
		Month(string word);
		Month(int num);
		int setNum();
		string setLetters();
		void outputNum(int IMonth);
		void outputLetters(int numero);
		void nextMonth(int x);


	private:
		int month;
		string letters;


};









#endif
