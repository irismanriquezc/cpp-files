#include "workContact.hpp"
#include <iostream>
using namespace std;

WorkContact::WorkContact(){
  name= "";
  phone_num="";
  email="";
  company="";
  work_phone="";
  title="";
}
WorkContact::WorkContact(string name, string phone_num, string email, string company, string work_phone, string title){
  this-> name=name;
  this-> phone_num=phone_num;
  this-> email=email;
  this-> company= company;
  this-> work_phone= work_phone;
  this->title=title;
}
void WorkContact::setCompany(string company){
  this-> company=company;
}
void WorkContact::setWorkPhone(string work_phone){
  this->work_phone=work_phone;
}
void WorkContact::setTitle(string title){
  this->title=title;
}
void WorkContact::displayContacts(){

}
ostream& operator <<(ostream& out,const WorkContact m){
  out << m.name <<"\n"<< m.phone_num <<"\n"<< m.email <<"\n"<<m.company <<"\n"<< m.work_phone <<"\n"<< m.title;
  return out;
}
