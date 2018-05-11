#include <iostream>
#include <string>
#include <cassert>
using namespace std;
//********************************************************************

int getNumberOfItems();

// Summary: This function asks the user for the number of items in

// their cart and returns that value.

// Preconditions:

// Postconditions: A value of 0 or more for the number of items is returned

//********************************************************************

//********************************************************************

string getItemName();



// Summary: This function asks the user for the name of an item in the

// cart and returns that name.

// Preconditions: There are 0 or more items in the cart

// Postconditions: One name for an item in the cart is returned.

// ********************************************************************

//********************************************************************

double getItemCost(string s);

// Summary: This function asks the user for the cost of the item with

// the name in variable s.

// Preconditions: There are 0 or more items in the cart

// Postconditions: The cost of item s is returned

// ********************************************************************

// Use the following main program

const int NUM_ITEMS = 10;

int main( )

{

     char repeat = 'N';

     string itemNames[NUM_ITEMS];

     double itemCosts[NUM_ITEMS];

     int totalItems = 0;

     double totalCost = 0;

     double subtotal = 0;

     // Run cash register

     do{

          totalItems = 0;

          totalCost = 0;

          subtotal = 0;

          totalItems = getNumberOfItems( ); //get # of items from user

          // Process each item in cart

          for( int index = 0; index < totalItems; index ++)

          {

               itemNames[ index ] = getItemName( );

               itemCosts[ index ] = getItemCost( itemNames[index] );

          }

          // Print receipt

          cout << "***** Receipt *****\n";

          for ( int i = 0; i < totalItems; i ++ )

          {

               cout << itemNames[ i ] << "\t$ " << itemCosts[ i ] << endl;

               subtotal += itemCosts[ i ] ;

          }

          // Print final costs

         cout << "Subtotal: $ " << subtotal << endl;

          cout << "Tax: $ "<< (0.075 * subtotal) << endl;

          totalCost = subtotal + (0.075 * subtotal) ;

          cout << "Total Amount: $ "<< totalCost << endl;

          cout << "Another customer? Y – yes\n";

          cin >> repeat;

         // if using getlines in functions otherwise delete following line

          cin.ignore( );

     }while(toupper(repeat) == 'Y');

 

     return 0;

}

int getNumberOfItems()

{

int numI;
cout << "how many items are you getting \n";
cin>> numI;
return numI;
 

}

string getItemName()

{
string name;
cout << "What is the name of the item \n";
cin>> name;

return name;
 

}

double getItemCost(string s)

{
double cost;
cout << "What is the value of " << s << endl;
cin >> cost;
return cost;
 

}


