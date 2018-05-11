#ifndef huge_hpp
#define huge_hpp
#include <fstream>
#include <iomanip>

using namespace std;

class Huge {
public:
  Huge();
  Huge(unsigned short int number[14]);
  void setNum(unsigned short int number[14]);
  bool getIsZero()const{return is_zero;}

  // operators
  friend ostream& operator <<(ostream& out,  Huge& m);
  friend istream& operator >>(istream& in,  Huge& m);

  friend Huge operator +( Huge& n1,  Huge& n2);
  friend Huge operator -( Huge& n1,  Huge& n2);

  friend bool operator ==( Huge& n1,  Huge& n2);
  friend bool operator <( Huge& n1,  Huge& n2);
  friend bool operator >( Huge& n1,  Huge& n2);
  unsigned short int num[13];

private:
  bool is_zero;
};

#endif
