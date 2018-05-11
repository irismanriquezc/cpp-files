#ifndef myset
#define myset
#include <vector>
#include <iostream>
using namespace std;

class Set{
public:
  Set();
  void addElement(double element);
  Set uni(const Set& B);
  Set intersection(const Set& B);
  bool isEqual(const Set& B);
  Set complement(const Set& universe);
  void display();
private:
  vector<double> a;
};
#endif
