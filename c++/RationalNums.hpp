//// Iris Manriquez
// CSS2A
// Homework 3, Problem 7

#ifndef RationalNums_hpp
#define RationalNums_hpp

#include<iostream>
#include<string>

class Rational{

    public:
      Rational();
      void read_input();

      void addition();
      void subtraction();
      void negative();
      void division();
      void multiplication();
      bool equality();
      bool lesserValue();

      int getA();
      int getB();
      int getC();
      int getD();

      void setA(int Ca);
      void setB(int Cb);
      void setC(int Cc);
      void setD(int Cd);

    void print();
    void checkboolean();

  private:
      int a,b,c,d;




};
#endif
