// Iris Manriquez
// Sept. 22, 2017
// Lab 6 Problem 3


#include <iostream>
#include <string>

using namespace std;

int main()
{
char res, res2, resp,resp1;

cout << " Welcome enter y to begin." << endl;
cin>> resp1;
 
resp1= toupper(resp1);

while (resp1== 'Y'|| resp == 'Y')
{
cout << "Player one, what is your choice?" << endl;
cin>>res;

cout << "Player two, your choice?" << endl;
cin >> res2;

res = toupper(res);
res2 = toupper(res2);

 if (res == 'R' && res2== 'P') 
{ cout << " Paper Wins" << endl; }

 else if ( res== 'S' && res2=='R') 
{cout << " Rock Wins" << endl; }

 else if ( res=='S'  && res2== 'P') 
{cout << "Scissors Win" << endl; }

else if ( res== 'R' && res2=='S') 
{cout << " Rock Wins" << endl; }

 else if ( res=='P'  && res2== 'S') 
{cout << "Scissors Win" << endl; }

else if ( res=='P'  && res2== 'R') 
{cout << "Paper Wins" << endl; }

 else { cout << "nobody wins" << endl;}

cout << " Want to continue? Then enter y" << endl;
cin>> resp;
resp = toupper(res);
}



return 0;
}
