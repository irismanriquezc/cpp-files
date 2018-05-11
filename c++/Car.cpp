#include "Car.h"
#include <iostream>

using namespace std;

//default constructor
Car::Car(){
    color = " ";
    model = " ";
    year = 0;
    on = false;
    move = false;
}
Car::Car(string carColor, string carModel, int carYear, bool carOn, bool carMove){
    color = carColor;
    model = carModel;
    year = carYear;
    on = carOn;
    move = carMove;
}
//setters(mutators)
void Car::setColor(string carColor){
    color = carColor;
}
void Car::setModel(string carModel){
    model = carModel;
}
void Car::setYear(int carYear){
    year = carYear;
}
void Car::setOn(bool carOn){
    on = carOn;
}
void Car::setMove(bool carMove){
    move = carMove;
}

//getters(accesors)
string Car::getColor(){
    return color;
}
string Car::getModel(){
    return model;
}
int Car::getYear(){
    return year;
}
bool Car::getOn(){
    return on;
}
bool Car::getMove(){
    return move;
}

//functionality
bool Car::carOn(){
    if (on == false){
        cout << "Car is now on";
        on = true;
    }
    else{
        cout << "Car is now off";
        on = false;
    }
    
    return on;
}
bool Car::moving(){
    if (move == false){
        cout << "Car is in reverse";
        move = true;
    }
    else{
        cout << "Car is going forward";
        move = false;
    }
    
    return move;
}
ostream& operator << (ostream& os, const Car& s){
    os << "Color: " << s.color << endl;
    os << "Model: " << s.model << endl;
    os << "Year: " << s.year << endl;
    os << "On: " << s.on << endl;
    os << "Moving: " << s.move << endl;
    
    return os;
}
