#include "coordinate.hpp"
#include <iostream>
using namespace std;

int main(){

Coordinate a,b,c;
a.setX(5);
a.setY(1);
b.setX(2);
b.setY(3);
c.setX(1);
c.setY(1);

cout << "a-b " << a-b<< endl;
cout << "c+b "<< c+b<< endl;
cout << "++a "<< ++a<< endl;
cout << "b++ "<< b++ << endl;
}
