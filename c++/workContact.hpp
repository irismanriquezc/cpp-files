#ifndef workcontact
#define workcontact
#include "contact.hpp"
#include <fstream>

class WorkContact :public Contact{
public:
  WorkContact();
  WorkContact(string name, string phone_num, string email, string company, string work_phone, string title);
  void setCompany(string company);
  void setWorkPhone(string work_phone);
  void setTitle(string title);
  string getCompany() const{return company;}
  string getWorkPhone() const{return work_phone;}
  string getTitle() const{return title;}
  void displayContacts();
  friend ostream& operator <<(ostream& out,
                              const WorkContact m);

protected:
  string company;
  string work_phone;
  string title;

};
#endif
