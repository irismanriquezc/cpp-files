#ifndef contact
#define contact
#include <string>
#include <fstream>
using namespace std;

class Contact{
public:
  Contact();
  Contact(string name, string phone_num,string email);
  void setName(string name);
  void setPhone(string phone);
  void setEmail(string email);
  string getName() const{return name;}
  string getPhone() const{return phone_num;}
  string getEmail() const{return email;}
  friend ostream& operator <<(ostream& out, const Contact m);
protected:
  string name;
  string phone_num;
  string email;


};

#endif
