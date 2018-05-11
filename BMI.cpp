// Iris Manriquez
// Sept. 8
// Lab 4 Problem 3
// Figuring out a user's BMI and ketting them know where they stand.


#include <iostream>

using namespace std;

int main()
{
double weight, height, bmi;

cout << "What is your weight in pounds?" << endl;
cin >>weight;

cout << "What is your height in inches?" << endl;
cin>> height;

bmi = (weight * 703) / (height*height) ;

if (bmi < 18.5) {
cout << " You are underweight " << endl;
}

else if (bmi >= 18.5 && bmi <= 24.9) {
cout << "You are at a normal weight" << endl;
}


else if (bmi >= 25 && bmi <= 29.9) {
cout << "You are  overweight" << endl;
}

else if (bmi >= 30)  {
cout << "You are obese" << endl;
}

return 0;
}
