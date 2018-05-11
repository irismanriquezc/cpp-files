#include "time.hpp"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

  Time::Time(){
    hours= 12;
    minutes= 00;
    seconds=0;

  }

  void Time::setHours(int hours){
    assert(hours >0 && hours <=12);
    this-> hours= hours;
  }
  void Time::setMinutes(int minutes){
    assert(minutes >=0 && minutes <=59);
    this-> minutes= minutes;

  }
  void Time::setSeconds(int seconds){
    assert(seconds >=0 && seconds <=59);
    this-> seconds= seconds;
  }
  void Time::setAP(string ap){
    this-> ap= ap;
  }
  void Time::displayTime(){
    cout <<"Regular Time: "<<hours << ":"<< minutes<< ":"<< seconds<< " "<<ap <<endl;
  }
  void Time::displayMilitaryTime(){
    if(ap == "PM"&& hours !=12){
      hours= 12+hours;
    }
    if(ap=="AM"&& hours==12){
      hours+=12;
    }
    cout << "Military Time: "<< hours << ":"<< minutes<< ":"<< seconds<< endl;
  }
