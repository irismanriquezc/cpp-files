#ifndef ZOMBIEWALK_H_INCLUDED
#define ZOMBIEWALK_H_INCLUDED
#include "Tile.h"

class ZombieWalk
{
  private:
      // extra variables
      static const int GRIDLEN = 30; // was 5
      static const unsigned int MAX_ZOMBIES = 100; // was 10
      // Needed for class to function
      Tile board[GRIDLEN][GRIDLEN];
      int current_row,
          current_col;
  public:
      ZombieWalk();
      void moveUp();
      void moveDown();
      void moveLeft();
      void moveRight();
      void upDiag();
      void downDiag();
      void newGame();
      void displayBoard();
      void displayGameOver();
      bool isGameOver();
      bool didWin();
      bool checkEndGame();
      void runGame();
};
#endif // ZOMBIEWALK_H_INCLUDED
