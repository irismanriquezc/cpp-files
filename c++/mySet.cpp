#include "mySet.hpp"
#include <iostream>
#include <vector>
using namespace std;

Set::Set(){
  for(int i=0;i <a.size();i++){
    a[i]=0;
  }
}
void Set::addElement(double element){
  a.push_back(element);
}
Set Set::uni(const Set& B){
  Set second;
  bool w=true;
  for(int i=0;i <a.size();i++){
    second.a.push_back(a[i]);
    }
    for(int i=0;i <B.a.size();i++){
      for(int p=0;p <second.a.size();p++){
        if(second.a[p]!=B.a[i])
          w;
        else
          w=false;
        }
      if(w)
        second.a.push_back(B.a[i]);
      }

  return second;
  }


Set Set::intersection(const Set& B){
  Set second, first;

    for(int i=0;i <a.size();i++){
        second.a.push_back(a[i]);
      for(int p=0;p <B.a.size();p++){
        if(second.a[i]==B.a[p])
          first.a.push_back(second.a[i]);
        }
      }
  return first;
  }


bool Set::isEqual(const Set& B){
  int count;

  for(int i=0;i <a.size();i++){
    for(int m=0; m<a.size();m++){
      if(a[i]==B.a[m]){
        count +=1;
      }
    }

    if(a.size()== count){
      return true;
    }
    else{
      return false;
    }
  }
}
Set Set::complement(const Set& universe){
  Set first,second;


  for (int i = 0; i < universe.a.size(); i++) {
    first.a.push_back(a[i]);
      bool w = true;
      for (int m = 0; m < first.a.size(); m++) {
          if (universe.a[i] == first.a[m]) {
              w = false;
          }
      }
      if (w) {
          second.a.push_back(a[i]);
      }
  }
  return second;
}
void Set::display(){
  for(int m=0; m<a.size();m++){
    cout << a[m]<< " ";
  }
}
