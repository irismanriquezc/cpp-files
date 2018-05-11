#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED
class Tile
{
    private:
        static unsigned int num_zombies;
        static unsigned int num_scratches;
        bool isZombie,
             isZombieVisible;
        char tile_icon;
    public:
        Tile();
        Tile(bool isZombie, unsigned int num_scratches);
        bool getIsZombieVisible()const {return isZombieVisible;}
        void setIsZombieVisible(bool is_visible);
        void setTile(char tile_icon);
        char getTileIcon()const {return tile_icon;}
        void exploreTile();
        bool getIsZombie()const {return isZombie;}
        void setIsZombie(bool isZombie);
        void resetTile();
        static void setNumScratches(unsigned int scratches){num_scratches = scratches;}
        static void setNumZombies(unsigned int zombies){num_zombies = zombies;}
        static unsigned int getNumScratches(){return num_scratches;}
        static unsigned int getNumZombies(){return num_zombies;}
};
#endif // TILE_H_INCLUDED
