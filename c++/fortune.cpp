#include "fortune.hpp"
#include <iostream>
#include <string>
#include <random>
#include <cassert>

using namespace std;

Fortune::Fortune(){
  rand_index= rand()%11;

}
void Fortune::openFortuneCookie(){
  cout << "================================"<< endl;
  cout <<"| "<< fortunes[rand_index] << " |"<< endl;
  cout << "================================"<< endl;
}
void Fortune::generateNewFortune(){
  rand_index= rand()%10;
;

}
void Fortune::displayMenu(){
  bool man= true;

  do{
  char response;
  cout << "o – will open the fortune cookie\n"<<
    "n – will generate a new cookie\n"<<
    "q – will quit the program\n";
    cin >> response;

    switch(response){
      case 'o':
        openFortuneCookie();
        break;
      case 'n':
        generateNewFortune();
        break;
      case 'q':
        man = false;
        break;
      }


    }while(man);
}
