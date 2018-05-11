//Iris Manriquez
//Sept 1, 2017
//Problem #4
//Madlibs

#include <iostream>
#include <string>

using namespace std;

int main()
{
string namePerson,nameInstructor,food,adj,color,animal;
int numero1;

cout << "Please enter your name"<< endl;
cin>>namePerson;

cout << "Enter name of your instructor"<< endl;
cin >> nameInstructor;

cout << "Favorite Food?"<< endl;
cin>> food;

cout << "Give an adjective"<< endl;
cin>> adj;

cout << "Favorite color?"<< endl;
cin >> color;

cout << "Select an animal"<< endl;
cin >> animal; 

cout << "Select a number from 100-120"<< endl;
cin >> numero1;

cout <<"\nDear Instructor " << nameInstructor <<  endl;

cout<< "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " <<food << ", which made me turn " <<color<< " and extremely ill. I came down with a fever of " << numero1<<". Next, my " << adj<<" pet " <<animal<< " must have smelled the remains of the " << food<< " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late."<< endl;
cout << "Sincerely, " << endl;
cout <<namePerson<<endl;

return 0;

}

