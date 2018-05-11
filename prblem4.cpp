

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void compute_coins(int coin_value, int& num, int& amount_left);
int cora ( int amount);
int dimes(int cuanto);


int main()
{

char res;
int change, remaining, dimes1, pennies, original, quarters;
do {
cout << "Input your change"<< endl;
cin >>change;
original = change;

quarters = cora(change);
compute_coins(25, quarters, change);

if (change >=10){
dimes1= dimes(change);
compute_coins(10, dimes1,change);
}
if (change >0){
pennies= change; }
else{ 
pennies =0;}

cout << original << " cents can be given as " << quarters<< " quarter(s) " << dimes1 << " dime(s) and " << pennies << " penny(pennies)" << endl;
cout << "Continue? Press y"<< endl;
cin >> res; 

}while(res=='y' || res== 'Y');

return 0;
}

int cora(int amount){

int coraCoins;
if( amount >=75){
coraCoins=3;}
else if( amount >=50){
coraCoins=2;}
else if( amount >=25){
coraCoins=1;}
else {coraCoins= 0;}
return coraCoins;
}

int dimes(int cuantos){
int dimeCoin;
if (cuantos >=10){
dimeCoin= cuantos/10;
}
return dimeCoin;
}


void compute_coins(int coin_value, int& num, int& amount_left){

int total, takeAway;

if(coin_value==25 && amount_left >25){
takeAway= coin_value*num;
amount_left = amount_left- takeAway;}

if(coin_value==10 && amount_left >10 ){
takeAway= coin_value*num;
amount_left = amount_left- takeAway;}

if(coin_value==1 && amount_left >0){
takeAway= coin_value*num;
amount_left = amount_left- takeAway;}



}
