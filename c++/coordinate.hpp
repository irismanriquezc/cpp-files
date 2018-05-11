#ifndef coordinate
#define coordinate
#include <fstream>
using namespace std;

class Coordinate{
  public:
    Coordinate();
    Coordinate(double x, double y);
    void setX( double x);
    void setY(double y);
    double getX() const{return x;}
    double getY() const{return y;}

    friend ostream& operator <<(ostream& out, const Coordinate m);
    friend istream& operator >>(istream& in, const Coordinate n);
    friend Coordinate operator +(const Coordinate n1, const Coordinate n2);
    friend Coordinate operator -(const Coordinate n1, const Coordinate n2);
    // ++n
    Coordinate& operator++();
    // n++
    Coordinate operator++(int);
  private:
    double x, y;

};
#endif
