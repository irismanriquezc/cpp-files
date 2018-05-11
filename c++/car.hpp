#ifndef car_hpp
#define car_hpp
#include<string>
#include <stdio.h>

using namespace std;

class car{
private:
    string color;
    string make;
    string model;
    int year;
    int speed;
public:
    
    void initColor(string init_color);
    void initMake(string init_make);
    void initModle(string init_modle);
    void intiYear(int years);
    void initSpeed(int speeds);
    void displayInfo();
    void setStop(int s);
    void setAcc(int a);
    void setBreak(int b);


    
};
#endif /* car_hpp */
