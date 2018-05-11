#include <iostream>
#include <string>

using namespace std;


struct player {
	string name;
	int level;
	bool logon;
	int lifelevel;
	int skilllevel;
	};

void initPlayer(player& p);
void displayPlayers(player P1, player P2);	
int main() {

player player1, player2;

 initPlayer(player1);
 initPlayer(player2);

displayPlayers( player1, player2);



}


void initPlayer(player& p){

	cout << "Enter the player name: "<< endl;
	cin >> p.name;
	cout << "What is the player's level: " << endl;
	cin >> p.level;
	cout << " Logged on? " << endl;
	cin >> p.logon;
		if(p.logon ==true){
			p.logon = true;}
		else{
			p.logon=false;}
	cout << " Life level? " << endl;
	cin >> p.lifelevel;
	cout << " Skill level? " << endl;
	cin >>p.skilllevel;

}
void displayPlayers(player p1, player p2){
	if (p1.level > p2.level){
		cout << "First Player: "<< p1.name << " \n" << p1.level << " \n "<< p1.logon << " \n" << p1.lifelevel << " \n" << p1.skilllevel << endl; 
		cout << "Second Player: " <<p2.name << " \n" << p2.level << " \n "<< p2.logon << " \n" << p2.lifelevel << " \n" << p2.skilllevel << endl;}
	else {
		cout << "First Player: "<<p2.name << " \n" << p2.level << " \n "<< p2.logon << " \n" << p2.lifelevel << " \n" << p2.skilllevel << endl;
		cout << "Second Player: " <<p1.name << " \n" << p1.level << " \n "<< p1.logon << " \n" << p1.lifelevel << " \n" << p1.skilllevel << endl;
	}
	}





