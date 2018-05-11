  #ifndef RATIONALE_HPP
#define RATIONALE_HPP
#include <fstream>
using namespace std;

class Rational
{
    public:
        Rational();
        void setNumerator(int num){this->num = num;}
        void setDenominator(int denom);
        int getNumerator()const {return num;}
        int getDenominator()const {return denom;}
        // Overloaded Operators
        friend ostream& operator <<(ostream& out,
                                    const Rational& r);
        friend istream& operator >>(istream& in,
                                    Rational& r);
        friend Rational operator +(const Rational& r1,
                                   const Rational& r2);
        friend Rational operator -(const Rational& r1,
                                    conHgst Rational& r2);
        friend bool operator ==(const Rational& r1,
                                const Rational& r2);
        friend bool operator <(const Rational& r1,
                               const Rational& r2);
        friend bool operator <=(const Rational& r1,
                                const Rational& r2);
        // prefix version ++r1
        Rational& operator++();
        // postfix r1++
        Rational operator++(int);

        // assignment operators
        Rational& operator =(const Rational& rhs);
        // r1 += r2;
        Rational& operator +=(const Rational& rhs);
        // r1 += 10
        Rational& operator +=(int value);
    private:
        int num, denom;
};

#endif // RATIONALE_HPP
