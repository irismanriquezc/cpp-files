#include "bus.hpp"
#include "route.hpp"
#include <iostream>
#include <string>

		Bus::Bus(){
			driver= "Bob";
			capacity=20;
			currentStop="";
			routes= "";}

		Bus::Bus(string stop){
			currentStop= stop;
		}

		void Bus::setDriver(string name){
			driver = name;	}

		void Bus::setCapacity(int num){
			capacity = num;}

		void Bus::setStop(int s){
			currentStop=s;}
