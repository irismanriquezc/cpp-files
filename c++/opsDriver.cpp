#include "Rationale.hpp"
#include <iostream>

using namespace std;

int main()
{
    Rational r1, r2;

    cout << "Enter a rational number num space denom\n";
    cin >> r1;
    cout << "Enter a rational number num space denom\n";
    cin >> r2;
    if(r1 == r2)
        cout << "r1 == r2\n";
    if(r1 < r2)
        cout << "r1 < r2\n";
    if(r1 <= r2)
        cout << "r1 <= r2\n";

    cout << "r1 = " << r1 ;
    cout << "\tr1++ = " << r1++ << endl;
    cout << "r2 = " << r2 ;
    cout << "\t++r2 = " << ++r2 << endl;
    r1 += r2;
    cout << "r1 += r2  r1 = " << r1 << endl;
    /*
    Rational r;
    r.setNumerator(3);
    r.setDenominator(5);

    Rational r2;
    r2.setNumerator(1);
    r2.setDenominator(2);

    cout << r << "+" << r2 << " = " << endl;
    cout << "enter the numerator space denominator\n";
    cin >> r;
    cout << r << endl;
    cout << r + r2 << endl;
    */
    return 0;
}
