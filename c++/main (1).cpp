Iris Manriquez
CSS2A
Homework 3, Problem 7

#include <iostream>
#include "RationalNums.hpp"
int main() {

    Rational nums;

    nums.read_input();

    char inp;

    cout <<"Do you want to add -a, subtract -s, less than -l, divide -d, check if equal -e, or multiply -m "<< endl;
    cin>> inp;

    inp=tolower(inp);

    if(inp== 'a'){
        nums.addition();
        nums.print();
    }
    else if(inp== 's'){
        nums.subtraction();
        nums.print();
    }
    else if(inp== 'd'){
        nums.division();
        nums.print();
    }
    else if(inp== 'm'){
        nums.multiplication();
        nums.print();
    }
    else if(inp== 'e'){
        nums.equality();
        nums.checkboolean();
    }
    else if(inp== 'l'){
        nums.lesserValue();
        nums.checkboolean();
    }

    return 0;
}
