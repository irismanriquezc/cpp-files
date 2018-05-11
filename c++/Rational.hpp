//
//  Rational.hpp
//  ch10num#3
//
//  Created by Armando Miguel on 2/26/18.
//  Copyright © 2018 Armando Miguel. All rights reserved.
//

#ifndef Rational_hpp
#define Rational_hpp

#include <stdio.h>
using namespace std;
#include<iostream>
#include<string>

class Rational{
    private:
        int a,b,c,d;
    public:
    Rational();
    void read_input();
    
    void add();
    void subtract();
    void divide();
    void multiply();
    bool equals();
    bool less();
    void negative();
    
    void seta(int new_a);
    void setb(int new_b);
    void setc(int new_c);
    void setd(int new_d);
    
    int geta();
    int getb();
    int getc();
    int getd();
    
    void print();
    void printbool();
    
    
    
    
    
};
#endif /* Rational_hpp */
