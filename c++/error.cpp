// Iris Manriquez
// Sept 1, 2017
// Problem #1
// Errors
//  Filename: errors.cpp
//  Created by Sonia Arteaga on 8/31/17.
//  Copyright © 2017 Sonia Arteaga. All rights reserved.
//  Description: This program computes the area of a triangle.
//

#include <iostream>
//extra space between iostream and <
// error.cpp:8:21: fatal error:  iostream: No such file or directory
//compilation terminated.

using namespace std;

int main()
//   Omit one of the (); then omit both the ().
//error.cpp:15:9: error: expected initializer before ‘)’ token
//int main)
//error.cpp:18:2: error: expected initializer before ‘int’
//int main)
//   Omit the int from int main().
//error.cpp: In function ‘int main()’:
//   Omit or misspell the word main.
//(.text+0x20): undefined reference to `main'

{
    double height = 0,
           base = 0,
           area = 0;
    // Request height and base
    cout << "Enter the height and base of a triangle\n";
    cin >> height;
    cin >> base;
    // Compute the area of the triangle with typed in base and height
    area = 0.5 * base * height;
    // Display the area of the triangle
    cout << "Triangle area with base = " << base << " and height = " << height
         << " is " << area << endl;
//misspelling identifiers (cout, cin, and so on). Omit one or both of the << in the cout statement; leave off the ending curly brace }.
// error.cpp:33:5: error: ‘cPn’ was not declared in this scope
//error.cpp:31:5: error: ‘ciut’ was not declared in this scope
//error.cpp:37:52: error: invalid operands of types ‘double’ and ‘const char [15]’ to binary ‘operator<<’
//error.cpp:48:13: error: expected ‘}’ at end of input





    return 0;

}
