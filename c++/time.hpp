#ifndef timee
#define timee
#include <string>

using namespace std;


class Time {
public:
  Time();
  void setHours(int hours);
  int getHours()const{return hours;}

  void setMinutes(int minutes);
  int getMinutes()const{return minutes;}

  void setSeconds(int seconds);
  int getSeconds()const{return seconds;}

  void setAP(string ap);
  string getAP()const{return ap;}

  void displayMilitaryTime();
  void displayTime();

private:
  int hours, minutes, seconds;
  string ap;
};

#endif
