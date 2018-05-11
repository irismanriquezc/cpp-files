#include "doctor.hpp"

#include <string>
#include <iostream>
using namespace std;

Doctor::Doctor(){
  specialty="";
  officeVisit=0;
}
Doctor::Doctor(string specialty, double officeVisit){
  this-> specialty= specialty;
  this->officeVisit= officeVisit;
}
Doctor::Doctor(string name, string ssn, double salary, string specialty, double officeVisit){
  this-> specialty= specialty;
  this->officeVisit= officeVisit;
  this->name= name;
  this->salary=salary;
  this ->ssn = ssn;

}

void Doctor::setSpecialty(string specialty){
  this->specialty= specialty;
}
void Doctor::setOfficeVisit(double visit){
  officeVisit=visit;
}
ostream& operator <<(ostream& out, const Doctor m)
{
  out << "Name: "<< m.name << endl;
  out << "Social Security Number: "<< m.ssn<< endl;
  out << "Salary per Week: "<< "$"<< m.salary << endl;
  out << "Specialty : "<< m.specialty << endl;
  out << "Office Visit Cost: "<<"$"<< m.officeVisit<< endl;
  return out;

  }
