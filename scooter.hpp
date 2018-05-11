#ifndef Scooter
#define Scooter
#include <string>

using namespace std;

class scooter {

	public:
		void stop();
		void brake(int times);
		void accel(int times);
		void printInfo();
		void initColor(string InitC);
		void initMake(string initM);
		void initModel(string initMake);
		void initYear(int initY);
		void initSpeed(int initS);
	private:
		string color, make, model;
		int speed, year;
		


};
#endif


