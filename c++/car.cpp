
#include "car.hpp"
#include <string>
#include <cassert>
#include <iostream>

using namespace std;
void car::initColor(string init_color)
{
    color= init_color;
}
void car::initMake(string init_make)
{
    make = init_make;
}
void car::initModle(string init_modle)
{
    model = init_modle;
}
void car:: intiYear(int years)
{
    year= years;
}
void car::initSpeed(int speeds)
{
    speed = speeds;
}
void car::displayInfo()
{
    
    cout<< "Make: "<< make<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Color: "<<color<<endl;
    cout<< "Speed: "<<speed<<endl;
}
void car::setAcc(int a)
{
    speed = (speed + 2)* a;
}
void car:: setBreak(int b)
{
    speed = (speed - (2*b));
    if(speed<0){
        speed = 0;
    }
}
void car::setStop(int s)
{
    speed = 0;
}
