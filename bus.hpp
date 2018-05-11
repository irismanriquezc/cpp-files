#ifndef bus
#define bus

#include <string>
using namespace std;


class Bus{

	public:
		Bus();
		Bus(string stop);

		//Driver
		void setDriver(string name);
		string getDriver()const{return driver;}
		//Capacity
		void setCapacity(int num);
		int getCapacity()const{return capacity;}
		//Route
		//void setRoute(string r);
		//string getRoute()const{return ro;}
		//Stop
		void setStop(int s);
		string getStop()const{return currentStop;}
		


	private:
		string driver;
		string routes, currentStop;
		int capacity;








};



#endif
