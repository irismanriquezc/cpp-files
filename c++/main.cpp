#include "Car.h"
#include <iostream>

using namespace std;

int main(){
    Car car1;
    Car car2("Black", "Nissan", 1980, true, true);
    
    car1.setColor("Pink");
    car1.setModel("Toyota");
    car1.setYear(1871);
    car1.setOn(false);
    car1.setMove(false);
    
    cout << car1.getColor() << '\n'
         << car1.getModel() << '\n'
         << car1.getYear() << '\n'
         << car1.getOn() << '\n'
         << car1.getMove() << '\n';
    
    cout << car2;
    
    return 0;
}
