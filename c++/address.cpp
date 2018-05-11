#include "address.hpp"
#include <iostream>




 Address::Address(){
this -> address = "";
this -> name = "";
this -> city = "";
this -> state = "";
this -> zipcode = 11111;
 
 }
 Address::Address(string name, string address, string city, string state, int zipcode){
 this -> name = name;
 this -> address = address;
 this -> city = city;
 this -> state = state;
 this -> zipcode = zipcode;
 }
 Address::Address(string name, string address, string line2_address, string city
,	string state, int zipcode){
	this -> name = name;
 	this -> address = address;
 	this -> line2_address = line2_address;
 	this -> city = city;
 	this -> state = state;
 	this -> zipcode = zipcode; 
}

 
        // Getters
        string Address::getName()const {return name;}
        string Address::getAddress()const {return address;}
        string Address::getLine2Address()const {return line2_address;}
        string Address::getCity()const {return city;}
        string Address::getState()const {return state;}
        int Address::getZipcode()const {return zipcode;}
        // Setters
        void Address::setName(string name){
        this -> name = name;
        }
        void Address::setAddres(string address){
        this -> address = address;
        }
        void Address::setLine2Address(string line2_address){
        this->line2_address = line2_address;
        }
        void Address::setCity(string city){
        this -> city = city;
        }
        void Address::setState(string state){
        this -> state = state;
        }
        void Address::setZipcode(int zipcode){
        this -> zipcode = zipcode ; 
        }



