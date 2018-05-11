#include "route.hpp"
#include <iostream>
#include <string>

using namespace std;



	Route::Route(){
		stops=5;
		passengers= 0;
		cap = 20;
		}
	void Route::displayInfo(){
		bool con = true;
		char res;
		int off, on;
		int max = 20;

		cout<< "The capacity of this bus is "<< cap	<< endl;


	do{			for(int i=0; i<5; i++){
					cout << "The bus' current passengers " << passengers << endl;
					cout << "\n";

					if(i==4){

						cout << "We are currently on the last stop :"<< stopsArray[i].getStop()<< endl;

						cout << "How many passengers are getting off?\n";
						cin >> off;

						if(off <= passengers){
							passengers-=off; }
						else{
							cout << "This is invalid\n"; }
							cout << "How many passengers are getting on?\n";
							cin >> on;
							if((passengers+on) > max){
								cout<< "This would overload the capacity\n";
							}
							else{
								passengers += on; }
						cout << "Would you like to continue? Y-yes N-no"<< endl;
						cin >> res;
						toupper(res);

						if(res=='Y'){
							con=true;
						}
						else{
							con= false;
						}
					}


					else if(i!=4){

						cout << "We are currently on: "<< stopsArray[i].getStop()<< endl;
						cout << "The next stop is "<< stopsArray[i+1].getStop()<< endl;

						cout << "How many passengers are getting off?\n";
						cin >> off;
						if(off <= passengers){
							passengers-=off;
						}
						else{
							cout << "This is invalid\n";
						}
						cout << "How many passengers are getting on?\n";
						cin >> on;
							if((passengers+on) > max){
								cout<< "This would overload the capacity\n";
							}
							else{
								passengers += on;
				} }
			 }
		 }while(con== true);

	 }
