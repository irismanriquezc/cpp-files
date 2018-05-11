#include "hugeNum.hpp"
#include <cassert>
using namespace std;

Huge::Huge(){
  for(int i=0; i <13; i++){
    num[i]= 0;
  }
  is_zero= true;
}
Huge::Huge(unsigned short int number[13]){
  for(int i=0; i <13; i++){
    num[i]= number[i];
  }
  is_zero= false;
}

void Huge::setNum(unsigned short int number[13]){
  for(int i=0; i <13; i++){
    num[i]= number[i];
  }
}


// operators
ostream& operator <<(ostream& out,  Huge& m){
  for(int i=0; i<13; i++){
    out << m.num[i];
  }
  return out;
}

istream& operator >>(istream& in, Huge& m){
  unsigned short int n[13];
  for(int i=0; i<13; i++){
    in >> n[i];
  }
  m.setNum(n);
  return in;

}

Huge operator +( Huge& n1,  Huge& n2){
  Huge res;
  for(int i=12; i >-1; i--){

    if(n1.num[i]+n2.num[i] >9 && i!=0){
      res.num[i] = ((n1.num[i]+n2.num[i])%10) ;
      n1.num[i-1]+=1;
    }
    else{
      res.num[i] = n1.num[i]+n2.num[i] ;
    }
  }
  return res;
}

Huge operator -( Huge& n1,  Huge& n2){
  Huge res;
  for(int i=12; i >-1; i--){

    if(n1.num[i]-n2.num[i] <0 && i!=0){
      res.num[i] = (n1.num[i]-n2.num[i])*-1;
      n1.num[i-1]-=1;
    }
    else{
      res.num[i] = n1.num[i]-n2.num[i];
    }
  }
  return res;
}

bool operator ==( Huge& n1,  Huge& n2){
  bool instance= true;

  for(int i=0; i<13; i++){
    if(n1.num[i]!=n2.num[i]){
      instance= false;
    }
  }
  return instance;
}
bool operator <( Huge& n1,  Huge& n2){


  for(int i=0; i <13; i++){
    if(n1.num[i] < n2.num[i]){
      return true;
    }
    else if(n1.num[i] > n2.num[i]){
      return false;
    }

  }
  return false;
}
bool operator >( Huge& n1,  Huge& n2){
  for(int i=0; i <13; i++){
    if(n1.num[i] > n2.num[i]){
      return true;
    }
    else if(n1.num[i] < n2.num[i]){
      return false;
    }
  }
  return false;
}
