//Iris Manriquez
//Armando Miguel


#include "scooter.hpp"
#include "car.hpp"
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
	
car ford;
    ford.initColor("White");
    ford.initMake("Ford");
    ford.initModle("F150");
    ford.intiYear(2018);
    ford.initSpeed(0);
    cout << " " << endl;
    cout<<"DISPLAYED INFORMATION:"<<endl;
    ford.displayInfo();
    
    cout<< "\nNEW INFO:"<<endl;
    ford.setAcc(4);
    ford.displayInfo();
    cout<<"\nNEW INFO:"<<endl;
    ford.setBreak(2);
    ford.displayInfo();



return 0;
}
