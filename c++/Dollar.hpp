#ifndef DOLLAR_HPP
#define DOLLAR_HPP
#include <fstream>
#include <iomanip>

using namespace std;

class Dollar
{
    public:
        Dollar();
        unsigned int getAmount() { return amount; }
        void setAmount(unsigned int val) { amount = val; }

        // insertion and extraction operators
        friend ostream& operator << (ostream& out, const Dollar& d);
        // Summary: displays amount as $D.00 (Gio & Christian)
        friend istream& operator >> (istream& in, Dollar& d); // Andrea & Maria

        // math operators
        // Frank & Reyna
        friend Dollar operator + (const Dollar& dLS, const Dollar& dRS);
        // Elizabeth & blanca
        friend Dollar operator - (const Dollar& dLS, const Dollar& dRS);
        // Jessica & Andres
        friend Dollar operator * (const Dollar& dLS, const Dollar& dRS);

        // comparison operators
        // Daniel & David
        friend bool operator != (const Dollar& dLS, const Dollar& dRS);
        // Ana & Jesus
        friend bool operator >= (const Dollar& dLS, const Dollar& dRS);
        // Sam & Sebastian
        friend bool operator == (const Dollar& dLS, const Dollar& dRS);

        //Decrement operator
        Dollar& operator--(); // Prefix decrements amount by 1 - Fernando&Cesar
        Dollar operator--(int); // Postfix decrements amount by 1 - Luis& Francisco

        // Assignment operator
        Dollar& operator +=(const Dollar& d); //Juhi&Enrique
        Dollar& operator -=(const Dollar& d); // Armando& Jonatan
        Dollar& operator *= (const Dollar& d); // Austin & Mat
    private:
        unsigned int amount;
};

#endif // DOLLAR_HPP
