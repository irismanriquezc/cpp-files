//
//  main.cpp
//  PolyAnimal
//
//

#include <iostream>
#include <cstdlib>
#include <cctype>
#include "dog.hpp"
#include "sheep.hpp"
#include "cat.hpp"
using namespace std;

int main() {
    int choice;
    Animal *animal = NULL;
    
    do{
        cout << "Select an animal\nD-Dog\nS-Sheep\nC-Cat\n";
        cin >> choice;
        if(animal != NULL)
            delete animal;
        switch (tolower(choice)) {
            case 'd':
                animal = new Dog();
                cout << "A dog's sound is: ";
                animal->sound();
                break;
            case 's':
                animal = new Sheep();
                cout << "A sheep's sound is: ";
                animal->sound();
                break;
            case 'c':
                animal = new Cat();
                cout << "A cat's sound is: ";
                animal->sound();
                break;
            case 'q':
                break;
            default:
                cout << "Wrong choice. Please try again\n";
                break;
        }
        cout << "Would you like to see another animal? y-continue q - quit\n";
        cin >> choice;
    }while(tolower(choice) != 'q');
    if(animal != NULL)
        delete animal;
    return 0;
}
