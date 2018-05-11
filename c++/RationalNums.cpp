// Iris Manriquez
// CSS2A
// Homework 3, Problem 7

#include "RationalNums.hpp"
#include <iostream>
#include <string>

using namespace std;


Rational::Rational(){
    a=0;
    b=0;
    c=0;
    d=0; }

int Rational::getA(){
    return a; }
int Rational::getB(){
    return b; }
int Rational::getC(){
    return c; }
int Rational::getD(){
    return d; }

void Rational::setA(int Ca){
    a= Ca; }
void Rational::setB(int Cb){
    b= Cb; }
void Rational::setC(int Cc){
    c= Cc; }
void Rational:: setD(int Cd){
    d= Cd; }

void Rational::read_input(){
    int a,b,c,d;

    cout << "Enter the first numerator"<< endl;
    cin >> a;
    this->a=a;

    cout << "Enter first denominator"<< endl;
    cin >> b;
    this->b=b;


    cout << "Enter the second numerator"<< endl;
    cin >> c;
    this->c=c;

    cout << "Enter the second denominator"<< endl;
    cin >> d;
    this->d=d; }

void Rational::addition(){
    int topValue, bottomValue;
    bottomValue= (b * d);
    topValue= (a * d + b * c);
    this->a= topValue;
    this->b= bottomValue; }

void Rational::subtraction(){
    int topValue, bottomValue;
    topValue=(a * d - b * c);
    bottomValue=(b * d);
    this->a= topValue;
    this->b= bottomValue;}

void Rational::negative(){
   int topValue= a*-1;
    int bottomValue= b;
    this->a= topValue;
    this->b= bottomValue; }

void Rational::division(){
    int topValue, bottomValue;
    topValue=(a * d);
    bottomValue=(c * b);
    this->a= topValue;
    this->b= bottomValue; }

void Rational::multiplication(){
    int topValue, bottomValue;
    topValue=(a * c);
    bottomValue=(b * d);
    this->a= topValue;
    this->b= bottomValue; }

bool Rational::equality(){
    int topValue, bottomValue;
    topValue=(a * d);
    bottomValue=(c * b);
    if (topValue==bottomValue){
        return true; }
    else {
        return false; }}

bool Rational::lesserValue(){
    int topValue, bottomValue;
    topValue=(a * d);
    bottomValue=(c * b);
    if (topValue<bottomValue){
        return true; }
    else {
        return false; }}





void Rational::print(){
    cout << a << "/"<< b << endl; }
void Rational::checkboolean(){
    if((a * d) == (b * d))
    {
        cout<<"True Statement"<<endl; }
    else if((a * d)< (b * d)){
        cout<<"True Statement"<<endl; }
    else{
        cout<<"False Statement"<<endl;
    }}
