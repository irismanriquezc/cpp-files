#include "scooter.hpp"
#include <iostream>

void scooter::stop(){
	speed= 0;
	}

void scooter::brake(int times){
	for(int i=0; i <times; i++){ 
	speed-=3;}
	if(speed <0)
		speed=0;

	}

void scooter::accel(int times){
	for(int i=0; i <times; i++){ 
		speed+=1;}
	if(speed<0)
		speed=0;
		
	}


void scooter::initColor(string initC){
	color= initC;}
	
void scooter::initMake(string initM){
	make= initM;}
	
void scooter::initModel(string initMake){
	model=initMake;}
	
void scooter::initYear(int initY){
	year=initY;}
	
void scooter::initSpeed(int initS){
	speed=initS;}
	
void scooter::printInfo()	{
	cout<< "The Make : " << make << endl;
	cout << "The Model : " << model << endl;
	cout << "The Year : " << year<< endl;
	cout << "The Color : " << color << endl;
	cout << "The Speed : " << speed<< endl;
		}
		
		
		
		
