#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
 string cards;
 string temp;
 int Pcounter=13, Kcounter=13, Hcounter=13,Tcounter=13;

 vector<string> cards1;
 cin >> cards;

  for(int i=0;i<cards.length();i++){
    if(i==0||(i%3==0 && i!=12)){
      temp= cards.substr(i,3);
      cards1.push_back(temp);
    }
    else{
      continue;
    }

  }
  for(int i=0;i<cards1.size();i++){
    for(int m=1;m<cards1.size();m++){
      cout << cards1[i] << ' '<< cards1[m]<< endl;
      if(cards1[i]==cards1[m])
        cout << "GRESKA"<<endl;
      else if(cards1[i][0]=='P')
        Pcounter-=1;
      }
      m+=1;

}
}
