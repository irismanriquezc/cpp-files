#ifndef fortune
#define fortune

#include <iostream>
#include <string>
#include <random>
using namespace std;

class Fortune{
public:
  Fortune();
  void openFortuneCookie();
  void generateNewFortune();
  void displayMenu();
  void getIndex();
  void addFortunes();

private:
  int rand_index;
  string fortunes[10]={
  "The fortune you seek is in another cookie",
  "A conclusion is the place where you get tired of thinking",
  "If you look back, you will be soon headed that way",
  "Do not mistaken temptation for opportunity",
  "Some dream of cookies, others dream of fortunes",
  "The road to riches is paved with homework",
  "It's about time I got out that cookie",
  "That was not chiken..",
  "I am worth a fortune",
  "This cookie contains 117 calories"};







};




#endif
