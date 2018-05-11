#ifndef route
#define route

#include <string>
#include "bus.hpp"
#include <iostream>
using namespace std;

class Route{

	public:
		Route();
		void displayInfo();


	private:
		Bus stopsArray[5]={
			Bus("Lincoln St."),Bus("Warner St."), Bus("Jefferson Ave."), Bus("John Dr."), Bus("Sant Cir.")};
		int stops, passengers, cap;





};



#endif
