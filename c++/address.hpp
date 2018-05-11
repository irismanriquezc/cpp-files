#ifndef ADDRESS_HPP_INCLUDED
#define ADDRESS_HPP_INCLUDED

// ****************************************
// Class Name:
//
// Description:
//
// ****************************************
#include <string>
using namespace std;
class Address
{
    public:
        Address();
        Address(string name, string address,
                string city, string state,
                int zipcode);
        Address(string name, string address,
                string line2_address,
                string city, string state,
                int zipcode);
        // Getters
        string getName()const {return name;}
        string getAddress()const {return address;}
        string getLine2Address()const {return line2_address;}
        string getCity()const {return city;}
        string getState()const {return state;}
        int getZipcode()const {return zipcode;}
        // Setters
        void setName(string name);
        void setAddres(string address);
        void setLine2Address(string line2_address){this->line2_address = line2_address;}
        void setCity(string city);
        void setState(string state);
        void setZipcode(int zipcode);

    private:
    
   string address,name, line2_address, city, state;
   int zipcode;
};

#endif // ADDRESS_HPP_INCLUDED
