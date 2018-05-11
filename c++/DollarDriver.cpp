#include "Dollar.hpp"
#include <iostream>
using namespace std;

int main()
{
    Dollar d1, d2, d3;
    cout << "Enter dollars\n";
    cin >> d1;
    cout << "Enter dollars\n";
    cin >> d2;
    cout << "Enter dollars\n";
    cin >> d3;
    cout << (d1 + d2) * d3 << endl;
    if(d1 == d2)
        cout << "d1 == d2" << endl;
    d1 -= d2;
    cout << d1 << endl;
    cout << --d2 << endl;
    cout << d1-- << endl;
    return 0;
}
