//
//  Rational.cpp
//  ch10num#3
//
//  Created by Armando Miguel on 2/26/18.
//  Copyright © 2018 Armando Miguel. All rights reserved.
//

#include "Rational.hpp"
using namespace std;
#include <iostream>
#include <string>
#include <cassert>

Rational::Rational(){
    a=0;
    b=0;
    c=0;
    d=0;
}

int Rational::getA(){
    return a;
}
int Rational::getB(){
    return b;
}
int Rational::getC(){
    return c;
}
int Rational::getD(){
    return d;
}

void Rational::seta(int Ca){
    a= Ca;
}
void Rational::setb(int Cb){
    b= Cb;
}
void Rational::setc(int Cc){
    c= Cc;
}
void Rational:: setd(int Cd){
    d= Cd;
}

void Rational::read_input(){
    int a,b,c,d;

    cout << "Enter the first topValue"<< endl;
    cin >> a;
    this->a=a;

    cout << "Enter first denominator"<< endl;
    cin >> b;
    this->b=b;


    cout << "Enter the second topValue"<< endl;
    cin >> c;
    this->c=c;

    cout << "Enter the second denominator"<< endl;
    cin >> d;
    this->d=d;

}

void Rational::add(){
    int topValue, bottomValue;
    bottomValue= (b * d);
    topValue= (a * d + b * c);
    this->a= topValue;
    this->b= bottomValue;

}
void Rational::subtract(){
    int topValue, bottomValue;
    topValue=(a * d - b * c);
    bottomValue=(b * d);
    this->a= topValue;
    this->b= bottomValue;
}
void Rational::divide(){
    int topValue, bottomValue;
    topValue=(a * d);
    bottomValue=(c * b);
    this->a= topValue;
    this->b= bottomValue;
}
void Rational::multiply(){
    int topValue, bottomValue;
    topValue=(a * c);
    bottomValue=(b * d);
    this->a= topValue;
    this->b= bottomValue;
}
bool Rational::equals(){
    int topValue, bottomValue;
    topValue=(a * d);
    bottomValue=(c * b);
    if (topValue==bottomValue){
        return true;
    }
    else{
        return false;
    }
}
bool Rational::less(){
    int topValue, bottomValue;
    topValue=(a * d);
    bottomValue=(c * b);
    if (topValue<bottomValue){
        return true;
    }
    else{
        return false;
    }

}
void Rational::negative(){
   int topValue= a*-1;
    int denominator= b;
    this->a= topValue;
    this->b= denominator;

}




void Rational::print(){
    cout << a << "/"<< b << endl;
}
void Rational::checkboolean(){
    if((a * d) == (b * d))
    {
        cout<<"true"<<endl;
    }
    else if((a * d)< (b * d)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
