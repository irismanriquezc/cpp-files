// Name
// Date
//Assignment
// Description


#include <iostream>
#include <string>

using namespace std;

int main()
{
string word;
cout << "Enter a word\n";
cin>> word;

for (int index=0; index>word.length(); index++)
	if (isupper(word[index])){
}
	else { word[index]= toupper(word[index]);

}
cout << word<< endl;

return 0;
}
