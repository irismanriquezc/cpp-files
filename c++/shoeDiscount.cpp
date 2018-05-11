#include <iostream>
#include <string>

using namespace std;

struct ShoeRecord{
	double size;
	string color;
	string style;
	string name;
	double price;
	}boot, shoe, slipper;

void applyDiscount(ShoeRecord& shoe,double discount_percentage);

void displayShoe( ShoeRecord& shoe);
	
	
int main () {

	boot.size=7.5;
	shoe.size=6.5;
	slipper.size= 5.5;
	
	boot.color= "Black";
	shoe.color= "White";
	slipper.color= "Brown";
	
	boot.style = "Boot";
	shoe.style = "Flat";
	slipper.style = "Slipper";
	
	boot.name = "Levis";
	shoe.name = "Vans";
	slipper.name = "Uggs";
	
	boot.price = 50.00;
	shoe.price = 40.00;
	slipper.price = 30.00;

applyDiscount(boot, 0.1);
applyDiscount(shoe, 0.2);
applyDiscount(slipper, 0.5);

displayShoe(boot);
displayShoe(shoe);
displayShoe(slipper);

}


void applyDiscount(ShoeRecord& shoe,double discount_percentage){
	double actualDiscount;
	
	
	actualDiscount= shoe.price*discount_percentage;
	
	shoe.price -= actualDiscount;
}

void displayShoe( ShoeRecord& shoe){

	cout << "The size of the shoe: " << shoe.size << endl;
	cout << "The color of the shoe: " << shoe.color << endl;
	cout << "The style of the shoe: " << shoe.style << endl;
	cout << "The name of the shoe: " << shoe.name << endl;
	cout << "The discounted price of " << shoe.style << " is $" << shoe.price<< endl;
	cout << "        \n";
	cout << "        \n";}


