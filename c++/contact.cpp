#include "contact.hpp"


Contact::Contact(){
  name= "";
  phone_num= "";
  email="";
}
Contact::Contact(string name, string phone_num,string email){
  this-> name=name;
  this-> phone_num=phone_num;
  this-> email=email;
}
void Contact::setName(string name){
  this->name=name;
}
void Contact::setPhone(string phone){
  phone_num= phone;
}
void Contact::setEmail(string email){
  this-> email=email;
}
ostream& operator <<(ostream& out, const Contact m){
  out << m.name <<"/n"<< m.phone_num <<"/n"<< m.email;
  return out;
}
