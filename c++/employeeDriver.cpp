#include "doctor.hpp"
#include <string>
#include <iostream>
using namespace std;


int main(){
  Doctor doc[2]= {Doctor("Dr.Manriquez", "132134192", 832.13, "Cardiologist", 50), Doctor("Dr.Alvarez", "124636242", 722.23, "Vetenarian", 50)};
  for(int i = 0;i<2;i++){
      cout << "           "<<endl;
      cout<< i+1 <<"."<<doc[i]<<endl;
  }
}
