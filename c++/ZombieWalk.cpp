#include "ZombieWalk.hpp"
#include "Tile.hpp"
#include <iostream>
using namespace std;
ZombieWalk::ZombieWalk(){
  srand (time(NULL));

  int x, y;

  int numOfZobies = rand()%100;

  do{
      x = rand()%30;
      y = rand()%30;

      if(!board[y][x].getIsZombie() && !(((x==0 && y==0) || (x==29)) && y==29) ){
          board[y][x] = Tile(true, 0);
          numOfZobies-=1;
      }

  }while(numOfZobies  >-1);

  current_col = 0;
  current_row = 0;
}
void ZombieWalk::moveUp(){
  if(current_row-1>-1){
    current_row-=1;
    board[current_row][current_col].exploreTile();
  }
}
void ZombieWalk::moveDown(){
  if(current_row+1 <30){
    current_row+=1;
    board[current_row][current_col].exploreTile();
  }
}
void ZombieWalk::moveLeft(){
  if(current_col-1>-1){
    current_col-=1;
    board[current_row][current_col].exploreTile();
  }
}
void ZombieWalk::moveRight(){
  if(current_col+1<30){
    current_col+=1;
    board[current_row][current_col].exploreTile();
  }
}
void ZombieWalk::upDiag(){
  if(current_row-1>-1 && current_col+1<30){
    current_col+=1;
    current_row-=1;
    board[current_row][current_col].exploreTile();
  }
}
void ZombieWalk::downDiag(){
  if(current_row-1>-1 && current_row+1<30){
    current_col+=1;
    current_row+=1;
    board[current_row][current_col].exploreTile();
  }
}
void ZombieWalk::newGame(){
  for(int x=0; x<30;x++){
    for(int y=0; y<30; y++){
      board[x][y].resetTile();
    }
  }
  *this= ZombieWalk();
}
void ZombieWalk::displayBoard(){
  for(int x=0; x<30;x++){
    cout << endl;
    for(int y=0; y<30;y++){
      cout << board[x][y].getTileIcon();
    }
  }
}
void ZombieWalk::displayGameOver(){
  cout << "You lost, Game Over :("<< endl;
}
bool ZombieWalk::isGameOver(){
  if(Tile::getNumScratches()==3){
    return true;
  }
  else if(current_col==29 && current_row==29){
    return true;
  }
  else{
    return false;
  }
}
bool ZombieWalk::didWin(){
  if(current_col==29 && current_row==29){
    return true;
  }
  else{
    return false;
  }
}
bool ZombieWalk::checkEndGame(){
  if(Tile::getNumScratches()>2){
    return true;
  }
  else{
    return false;
  }
}
void ZombieWalk::runGame(){
  int res;
  char repeat;

  cout << "Enter:1. Left 2. Right 3. Up 4. Down 5. Up Diagonal 6. Down Diagonal\n";

  cout << "Number of scratches - " << Tile::getNumScratches() << "\n" << "Total Number of zombies - " << Tile::getNumZombies() << endl;

  displayBoard();

  cout << "end (safety)\nEnter response: ";

  cin >> res;

  switch (res) {
    case 1:
      moveLeft();
      break;
    case 2:
      moveRight();
      break;
    case 3:
      moveUp();
      break;
    case 4:
      moveDown();
      break;
    case 5:
      upDiag();
      break;
    case 6:
      downDiag();
      break;
    default:
      runGame();
  }


  if(isGameOver()== true){
      displayBoard();

      if(didWin()==true){
        cout << "You won!\n";
      }
      else cout << "You have lost!\n";
      cout << "Another game? Enter y: ";
      cin >> repeat;

      toupper(repeat);

      if(repeat == 'Y'){
          newGame();
        }
      else{
          return;
        }
  }
  else{
      runGame();
      }
}
