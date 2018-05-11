#include <iostream>
#include <string>
using namespace std;

int factorial(int x);
int power(int x, int y );
int gcd(int x, int y);
int fibonacci(int x);


int main() {
    cout<<"1. Factorial Result: "<<factorial(3)<<endl;
    cout<<"2. Power Result: "<<power(2,6)<<endl;
    cout<<"3. GCD Result: "<<gcd(81,27)<<endl;
    cout<<"4. Fibonacci Result: "<<fibonacci(15)<<endl;


return 0;
}



int factorial(int x){
    if(x==0){
        return 1;
    }
    else{
        int result = x * factorial(x-1);
        return result;
    }
}


int power(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
      int res= x*power(x,y-1);
        return res;
    }
}

int gcd(int x, int y){
    if(x==0){
        return y;
    }
    else{
      int res= gcd(y % x, x);
        return res;
    }
}

int fibonacci(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
      int res=fibonacci(x-1)+fibonacci(x-2);
        return res;
    }
}
