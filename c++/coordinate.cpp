#include "coordinate.hpp"
#include <iostream>

using namespace std;
Coordinate::Coordinate(){
  x=0;
  y=0;
}
Coordinate::Coordinate(double x, double y){
  this -> x =x;
  this->y=y;
}
void Coordinate::setX( double x){
  this-> x=x;
}
void Coordinate::setY(double y){
  this->y=y;
}

ostream& operator <<(ostream& out, Coordinate m){
  out << "("<< m.x << ","<< m.y<< ")";
  return out;
}
istream& operator >>(istream& in, Coordinate n){
  double r,s;
  in >>r >> s;
  n.setX(r);
  n.setY(s);
  return in;

}
Coordinate operator +(const Coordinate n1, const Coordinate n2){
  Coordinate r;
  r.setX(n1.x+ n2.x);
  r.setY(n1.y+n2.y);
  return r;
}
Coordinate operator -(const Coordinate n1, const Coordinate n2){
  Coordinate o;
  o.setX(n1.x+ n2.x);
  o.setY(n1.y+n2.y);
  return o;
}
// ++n
Coordinate& Coordinate::operator++(){
  x = x+1;
  y = y+1;
  return *this;

}
Coordinate Coordinate::operator++(int){
  Coordinate w;
  w.setX(getX());
  w.setY(getY());
  w.x= w.x+1;
  w.y= w.y+1;
  return w;
}
