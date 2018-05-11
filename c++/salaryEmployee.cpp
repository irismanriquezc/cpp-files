#include "salaryEmployee.hpp"

SalariedEmployee::SalariedEmployee(){
  name = "";
  ssn= "";
  salary=0;
}
SalariedEmployee::SalariedEmployee (string the_name, string the_ssn,double the_weekly_salary){
  name = the_name;
  ssn=the_ssn;
  salary= the_weekly_salary;
}
void SalariedEmployee::set_salary(double new_salary){
  salary= new_salary;
}
