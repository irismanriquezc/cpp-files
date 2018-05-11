#include "scooter.hpp"
#include <iostream>

using namespace std;

int main (){
	
	scooter turbo;
	
	turbo.initColor("Magenta");
	turbo.initModel("X");
	turbo.initMake("Razor");
	turbo.initYear(2007);
	turbo.initSpeed(0);
	
	turbo.printInfo();
	
	turbo.accel(4);
	cout << " " << endl;
	
	cout << "After accelarating four times " << endl;
	turbo.printInfo();
	
	turbo.brake(2);
	
	cout << " " << endl;
	
	cout << "After breaking two times " << endl;
	
	turbo.printInfo();
	
	cout << " " << endl;
	




return 0;
}
