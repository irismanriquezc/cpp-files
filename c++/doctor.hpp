#ifndef doctor_h
#define doctor_h


#include <string>
#include "salaryEmployee.hpp"
#include <fstream>
using namespace std;

class Doctor : public SalariedEmployee
{
public:
  Doctor();
  Doctor(string specialty, double officeVisit);
  Doctor(string name, string ssn, double salary, string specialty, double officeVisit);

  void setSpecialty(string specialty);
  string getSpecialty() const{return specialty;}
  void setOfficeVisit(double visit);
  double getOfficeVisit() const{return officeVisit;}
  friend ostream& operator <<(ostream& out,
                              const Doctor m);

protected:
  double officeVisit;
  string specialty;
};

#endif
