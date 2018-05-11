#include "Rationale.hpp"
#include <cassert>
using namespace std;

Rational::Rational()
{
    //ctor
    num = 1;
    denom = 1;
}
void Rational::setDenominator(int denom)
{
    assert(denom != 0);
    this->denom = denom;
}
ostream& operator <<(ostream& out, const Rational& r)
{
    out << r.num << "/t" << r.denom;
    return out;
}
istream& operator >>(istream& in, Rational& r)
{
    int n, d;
    in >> n >> d;
    r.setNumerator(n);
    r.setDenominator(d);
    return in;
}
Rational operator +(const Rational& r1,
                    const Rational& r2)
{
    Rational result;
    result.setNumerator(r1.num * r2.denom +
                        r2.num * r1.denom);
    result.setDenominator(r1.denom * r2.denom);
    return result;
}
Rational operator -(const Rational& r1,
                    const Rational& r2)
{
    Rational result;
    result.setNumerator(r1.num * r2.denom -
                        r2.num * r1.denom);
    result.setDenominator(r1.denom * r2.denom);
    return result;
}
bool operator ==(const Rational& r1,
                 const Rational& r2)
{
    return ((static_cast<double>(r1.num) / r1.denom) ==
            (static_cast<double>(r2.num)/r2.denom));
}
bool operator <(const Rational& r1,
                const Rational& r2)
{
    return ((static_cast<double>(r1.num) / r1.denom) <
            (static_cast<double>(r2.num)/r2.denom));
}
bool operator <=(const Rational& r1,
                 const Rational& r2)
{
    if(r1 == r2 || r1 < r2)
        return true;
    else
        return false;
}
// prefix
Rational& Rational::operator++()
{
    num = num + denom;
    return *this; // object itself
}
// postfix r1++
Rational Rational::operator++(int)
{
    // 1. create copy
    Rational rCopy;
    rCopy.setNumerator(getNumerator());
    rCopy.setDenominator(getDenominator());
    // 2. modify object
    num = num + denom;
    // 3. return copy
    return rCopy;
}
Rational& Rational::operator =(const Rational& rhs)
{
    num = rhs.num;
    denom = rhs.denom;
    return *this;
}
Rational& Rational::operator +=(const Rational& rhs)
{
    *this = *this + rhs;
    return *this;
}
Rational& Rational::operator +=(int value)
{
    num += (value * denom);
    return *this;
}
