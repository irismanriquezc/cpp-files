#include "fortune.hpp"

#include <iostream>
#include <string>
#include <random>

using namespace std;


int main(){

  Fortune boxOfCookies[10];
bool idk= true;
bool alreadyTaken[10]= {
  false, false, false, false, false, false, false, false, false, false
};
do{


  int user_index, counter;


    cout << "Pick a cookie from 1-10, Press 11 to quit"<< endl;
    cin >>user_index;

    user_index-=1;

    if(alreadyTaken[user_index]== false){
      boxOfCookies[user_index].openFortuneCookie();
      alreadyTaken[user_index]= true;
      counter+=1;
    }
    else{
      cout << "You have already opened this cookie"<< endl;

    }
    if(counter ==10 || user_index ==11 ){
      idk= false;
    }
}while(idk);





}
