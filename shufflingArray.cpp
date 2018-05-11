


#include <iostream>
#include <string>
#include <cassert>
#include <ctime>
#include <cstdlib> 

using namespace std;
void shuffleArray(char arr[ ], int len);


int main()
{
char letters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

shuffleArray(letters, 26);


return 0;
}

void shuffleArray(char arr[ ], int len){
srand( static_cast<unsigned>(time(NULL) ) );
int r;
char temp;
for (int i=0; i <len; i++){
r= rand()%len;
temp = arr[r];
arr[r] = arr[i];
arr[i]=temp;
}
cout << "Here is the shuffled array of the alphabet:" << endl;
cout << arr <<endl;

}
