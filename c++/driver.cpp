#include "dog.hpp"
#include <iostream>

using namespace std;

int main(){
	
	Dog fido;
	fido.initName("Fido");
	fido.initColor("Brown");
	fido.initGender('M');
	//display information
	fido.displayInfo();
	fido.bark();
	fido.fetch();
	return 0;

}
