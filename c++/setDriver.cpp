#include "mySet.hpp"
#include <iostream>
using namespace std;
int main()
  {
  Set a, b, c, U;
  for(double i = 1; i <= 10.5; i += 0.5){
    a.addElement( i );
    U.addElement(i);
  }
  for (double k = 1; k < 11; k += 1)
  {
    b.addElement( k );
    U.addElement( k );
  }
  c = a.uni(b);

  cout << "A U B = ";

  c.display(); // contents should match the universe

  if(U.isEqual( c ))
  {
    cout << " c == Universe\n"; // You should see this display on screen
  }
  else
    cout << "c != Universe\n";
  c = a.intersection(b);

  cout << "A n B = ";

  c.display(); // contents should match those of set a

  c = a.complement(U);
  cout << " a = ";

  c.display(); // set should match set b’s contents
return 0;
}
