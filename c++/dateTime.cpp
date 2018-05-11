#include "dateTime.hpp"
#include "time.hpp"
#include <string>
#include <iostream>
using namespace std;
#include <cassert>
  DateTime:: DateTime(){
    month= 12;
    day= 18;
    year= 1998;
  }

  void DateTime::setMonth(int month){
    assert(month >0&& month <=12);
    this-> month = month;
  }
  void DateTime::setDay(int day){
    assert(day >0 && day <=31);
    this-> day = day;
  }
  void DateTime::setYear(int year){
    assert(year >0);
    this-> year = year;
  }
  void DateTime::setTime(Time t){
    t.setHours(2);
    t.setMinutes(26);
    t.setSeconds(55);
    t.setAP("PM");
    this->t =t;
  }

  void DateTime::displayDateTime(){
    cout << "Today's Date \n";
    cout << month << "-"<< day <<"-"<< year<< endl;

    t.displayTime();
    t.displayMilitaryTime();

  }
