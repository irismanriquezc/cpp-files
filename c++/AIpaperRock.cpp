#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib> 

using namespace std;

int main()
{
char res, res2, resp,resp1;
string comp;

srand( static_cast<unsigned>(time(NULL) ) );


cout << " Welcome enter y to begin." << endl;
cin>> resp1;
 
resp1= toupper(resp1);

while (resp1== 'Y'|| resp == 'Y')
{
cout << "Player one, what is your choice?" << endl;
cin>>res;

res2 = rand()%3;
if (res2== 0){
res2='P';
comp= "Paper";
}
if (res2== 1){
res2='R';
comp= "Rock";
}
if (res2== 2){
res2='S';
comp= "Scissors";
}
res = toupper(res);
res2 = toupper(res2);
cout << "The computer chose " << comp<< endl;

 if (res == 'R' && res2== 'P') 
{ cout << " Paper Wins" << endl; }

 else if ( res== 'S' && res2=='R') 
{cout << " Rock Wins" << endl; }

 else if ( res=='S'  && res2== 'P') 
{cout << " Scissors Win" << endl; }

else if ( res== 'R' && res2=='S') 
{cout << " Rock Wins" << endl; }

 else if ( res=='P'  && res2== 'S') 
{cout << " Scissors Win" << endl; }

else if ( res=='P'  && res2== 'R') 
{cout << " Paper Wins" << endl; }

 else { cout << "It was a tie nobody wins" << endl;}

cout << "Want to continue? Then enter y" << endl;
cin>> resp;
resp = toupper(res);
}



return 0;
}
