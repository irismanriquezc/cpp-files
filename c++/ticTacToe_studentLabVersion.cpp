//Iris Manriquez
// Lab Week 14


/* =======================================
This program creates a game of TicTacToe
with player versus computer.
User will be 'X' and Computer will be 'O'
==========================================*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

// ***************************************************************
void initBoard(char board[3][3]);
// SUMMARY: (Code provided) Initializes board to
// - - -
// - - -
// - - -
// POSTCONDITIONS: Board has been initialized to above values.
// ***************************************************************
//
// ***************************************************************
void displayBoard(char board[3][3]);
// SUMMARY: Displays board with headings (code provided)
// ***************************************************************
//
// ***************************************************************
void playerMove(char board[3][3], int row, int column);
// SUMMARY: This function asks the user for a row and column
// between 0 - 2. It then assigns an X to the board at that location
// if the board at that location is not already an 'X' or an 'O'.
// If the location is taken, then the user is asked for another
// row and column until a usable location is entered.
// PRECONDITIONS: row and column are positive numbers from 0 - 2.
// POSTCONDITIONS: The player's move has been recorded on the board.
// ***************************************************************
//
// ***************************************************************
void computerMove(char board[3][3]);
// SUMMARY: This function creates two random numbers between 0 - 2.
// It then assigns an O to the board at that location only if
// the board at that location is not already an 'X' or an 'O'.
// If there is an 'X' or 'O' at that location then two new
// random numbers are generated. This is continued until a valid
// row and column is generated.
// PRECONDITIONS: -
// POSTCONDITIONS: The computer's move has been recorded on
// the board.
// ***************************************************************
//
// ***************************************************************
bool checkPlayerWon(char board[3][3]);
// SUMMARY: This function prints "Player Won" if the player won.
// It also returns true if the user has 3 X's in a row, or 3 X's in a column,
// or 3 X's along one of the two diagonals. False otherwise
// PRECONDITIONS:
// POSTCONDITIONS: returns true if the user won the game. False
// otherwise.
// ***************************************************************
//
// ***************************************************************
bool checkComputerWon(char board[3][3]);
// SUMMARY: This function returns true if the computer has
// 3 O's in a row, or 3 O's in a column, or 3 O's along one of
// the two diagonals. False otherwise. It also prints "Computer Won"
// if the computer won.
// PRECONDITIONS:
// POSTCONDITIONS: returns true if the computer won the game. False
// otherwise.
// ***************************************************************
//
// ***************************************************************
bool check4CatsGame(char board[3][3]);
// SUMMARY: Checks if the board is full and therefore, no winner.
// If this is the case then it returns true, false otherwise.
// PRECONDITIONS:
// POSTCONDITIONS: returns true if its a tie and false otherwise.
// ***************************************************************
//

// Main is provided - no changes needed here
int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    
    char ticTacBoard[3][3];
    char again = 'N';
    int userRow, userCol;
    bool winner_p = false, // player won this is set to true
         winner_c = false; // computer won, this is set to true
    
    // repeat as many times as user wants after game over.
    do{
        initBoard(ticTacBoard);
        displayBoard(ticTacBoard);
        do{
            // Get players move
            playerMove(ticTacBoard, userRow, userCol);
            displayBoard(ticTacBoard);
            winner_p = checkPlayerWon(ticTacBoard);
            // If player did not win then continue with computer's move
            if(!winner_p)
            {
                computerMove(ticTacBoard);
                displayBoard(ticTacBoard);
                winner_c=checkComputerWon(ticTacBoard);
            }
        }while(!winner_p && !winner_c && check4CatsGame(ticTacBoard));
        cout << "Would you like to play again? Y- yes\n";
        cin >> again;
    }while(toupper(again) == 'Y'); // start new game
    
    return 0;
}
void initBoard(char board[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            board[row][col] = '-';
        }
    }
}
void displayBoard(char board[3][3])
{
    cout << "   "; // spacing
    for(int i = 0; i <= 2; i++) // display headings
    {
        cout << i << "  ";
    }
    cout << endl;
    // Display board
    for(int row = 0; row < 3; row++)
    {
        cout << row << "|";
        for(int col = 0; col < 3; col++)
        {
            cout <<" " << board[row][col] << "|" ;
        }
        cout << endl;
    }
}

void playerMove(char board[3][3], int row, int column){
bool work = false;

cout << "Please enter a row from 0-2\n";
cin >> row;

cout << "Enter a column 0-2\n";
cin >> column;

if ((column >2 || column <0) || (row >2 || row<0)){
cout << "Invalid, out of range\n";

}
//&& (board[row][column] !='X' && board[row][column] !='O'
if (board[row][column] =='-'){
board[row][column]= 'X';
}
else {
cout << "Invalid input, that space is already taken\n";
 }

}

void computerMove(char board[3][3]){

bool taken=false;

do{
int computerR = rand()%3;
int computerC= rand()%3;
	if(board[computerR][computerC]=='-'){
			board[computerR][computerC] = 'O';
			taken =false;
	}
else{
taken=true;
}
}while(taken == true);
}


bool checkPlayerWon(char board[3][3]){
int count=0;

for ( int r=0; r <3 ; r++){
	for ( int c=0 ; c<3; c++){

	if ( (board[r][c] == 'X' &&  board[r][c+1] == 'X' && board[r][c+2] == 'X' )|| (board[r][c] == 'X' &&  board[r+1][c] == 'X' && board[r+2][c] == 'X')){
		cout << "Player wins\n";
			return true;}

		else if (r==c &&board[r][c] == 'X'){
				count+=1;}
		else if( board[0][2] =='X'&&board[1][1]=='X' && board[2][0]=='X'){
					cout << "Player wins\n";
					return true;}
		else {
				return false;}
}}

if(count ==3){
cout << "Player wins\n";
return true;}

}


bool checkComputerWon(char board[3][3]){

int coun=0;

for ( int r=0; r <3 ; r++){
	for ( int c=0 ; c<3; c++){

	if ( (board[r][c] == 'O' &&  board[r][c+1] == 'O' && board[r][c+2] == 'O') || (board[r][c] == 'O' &&  board[r+1][c] == 'O' && board[r+2][c] == 'O') ){
			cout << "Computer Wins" << endl;
			return true;}

		else if (r==c &&board[r][c] == 'O'){
				coun+=1;}

		else if( board[0][2] =='O'&&board[1][1]=='O'&& board[2][0]=='O'){
					cout << "Computer Wins" << endl;
					return true;}
		else {
				return false;}
	}



}
if(coun ==3){
cout << "Computer Wins" << endl;
return true;}

}


bool check4CatsGame(char board[3][3]){

if ((checkPlayerWon(board)== false ) && (checkComputerWon(board) == false)){
return true;}

}

