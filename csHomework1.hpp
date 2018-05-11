/*Redefine CDAccount from Display 10.1 so that it is a class rather than a
structure. Use the same member variables as in Display 10.1 but make
them private. Include member functions for each of the following: one
to return the initial balance, one to return the balance at maturity, one to
return the interest rate, and one to return the term. Include a constructor
that sets all of the member variables to any specified values, as well as a
default constructor. Embed your class definition in a test program.*/

#ifndef CDaccount
#define CDaccount

using namespace std;


class CDAccount {
	public:
		void get_data();
		void displayMaturity();
	
	private:
		double balance, interestRate;
		double months;




};


#endif

