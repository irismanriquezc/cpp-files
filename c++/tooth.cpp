#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(int argc, char *argv[]) {

    
    int toothPicks = 23;
    int player = 0;

    while ((toothPicks > 0) && (toothPicks <= 23)){    
        srand(time(0));    
        if(toothPicks > 4){

        cout << "It's your turn how many toothpicks do you want to take(1-3)" << endl;
        cin >> player;
        toothPicks = toothPicks - player;

        cout << "There are " << toothPicks << " left" << endl; 
        cout << "Its the computers turn" << endl;
        int cpu = 4 - player;
        toothPicks = toothPicks - cpu; 
        cout << "There are " << toothPicks << " left" << endl; 
        }
        
        if((toothPicks <= 4) && (toothPicks >=2)){
            if(toothPicks == 4){
                
                toothPicks -=3;
                cout << "There are " << toothPicks << " left" << endl; 
            }
            else if(toothPicks == 3){
                toothPicks -=2;
                cout << "There are " << toothPicks << " left" << endl; 
            }
            else{
                toothPicks--;
                cout << "There are " << toothPicks << " left" << endl; 
            }        
        }        
    }
}
