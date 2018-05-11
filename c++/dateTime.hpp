#ifndef datetime
#define datetime
#include <string>
#include "time.hpp"
#include "dateTime.hpp"
using namespace std;

class DateTime {
public:
  DateTime();
  void setMonth(int month);
  int getMonth()const{return month;}

  void setDay(int day);
  int getDay()const{return day;}

  void setYear(int year);
  int getYear()const{return year;}

  void setTime(Time t);
  Time getTime()const{return t;}

  void displayDateTime();

private:
  int month, day, year;
  Time t;

};

#endif
