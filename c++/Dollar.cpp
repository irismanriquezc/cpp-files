#include "Dollar.hpp"

Dollar::Dollar()
{
    //ctor
    amount = 0;
}

bool operator != (const Dollar& dLS, const Dollar& dRS)
{
    return dLS.amount != dRS.amount;
}

bool operator >= (const Dollar& dLS, const Dollar& dRS)
{
    return dLS.amount >= dRS.amount;
}

Dollar operator + (const Dollar& dLS, const Dollar& dRS)
{
    Dollar result;

    result.setAmount(dLS.amount + dRS.amount);
    return result;
}
Dollar operator - (const Dollar& dLS, const Dollar& dRS){
        Dollar minus;
        minus.setAmount(dLS.amount - dRS.amount);
        return minus;
}
istream& operator >> (istream& in, Dollar& d)
{
    unsigned int x;
    in >> x;
    d.setAmount(x);
    return in;
}
// postfix
Dollar Dollar::operator--(int){
    Dollar cDollar;
    cDollar.setAmount(amount);
    amount = amount - 1;
    return cDollar;
}
//prefix
Dollar& Dollar::operator--(){
        amount -= 1;
        return *this;
}
ostream& operator << (ostream& out, const Dollar& d)
{
    out << "$" << setprecision(2) << d.amount;

    return out;
}
Dollar& Dollar::operator += (const Dollar& d){
    *this = *this + d;
    return *this;
    // amount += d.amount;
}
Dollar& Dollar::operator -= (const Dollar& d){
    *this = *this - d;
    return *this;
}
Dollar& Dollar::operator *= (const Dollar& d){
    *this = *this * d;
    return *this;
}
bool operator == (const Dollar& dLS, const Dollar& dRS)
{

    return dLS.amount == dRS.amount;
}
Dollar operator *(const Dollar& dLS, const Dollar& dRS)
{
    Dollar result;

    result.setAmount(dLS.amount * dRS.amount);

    return result;
}
