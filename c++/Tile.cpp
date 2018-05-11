#include "Tile.hpp"
#include <iostream>

unsigned int Tile::num_zombies=0;
unsigned int Tile::num_scratches=0;
Tile::Tile(){
  isZombie=false;
  isZombieVisible=false;
  tile_icon= ':';
}
Tile::Tile(bool isZombie, unsigned int num_scratches){
  if(isZombie){
    setIsZombie(true);
  }
  else if(!isZombie){
    setIsZombie(false);
  }
  isZombieVisible=false;
  tile_icon=':';
}
void Tile::setIsZombieVisible(bool is_visible){
  isZombieVisible= is_visible;
  num_scratches+=1;
    if(isZombieVisible==true){
      setTile('*');
    }
}
void Tile::setTile(char tile_icon){
  this-> tile_icon= tile_icon;
}
void Tile::exploreTile(){
  if(isZombie==true){
    setNumScratches(num_scratches++);
    setIsZombieVisible(true);

  }
  else if(isZombie==false){
    setTile('x');
  }
}
void Tile::setIsZombie(bool isZombie){
  this->isZombie = isZombie;
  if(isZombie==true){
    num_zombies+=1;
  }
}
void Tile::resetTile(){
  if(isZombie==true){
    num_zombies-=1;
    num_scratches=0;
    isZombieVisible=false;
  }
  setTile(':');
}
