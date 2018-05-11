#include <iostream>
#include <string>


using namespace std;

bool isPowerOfTwo(unsigned int x);

int main() {
    char res;
      int input;
do{


    cout<<"Enter a number"<<endl;
    cin>>input;

    ans= isPowerOfTwo(input);

    if(ans == true){
        cout<<input<<" is a power of 2\n";
    }
    else{
        cout<<input<<" is not a power of 2\n";
    }
    cout<<"Again? Yes- y, No-n"<<endl;
    cin>>res;

  }while(res =='y');


}



bool isPowerOfTwo(unsigned int x){
    return (x & (x - 1)) == 0;
}
