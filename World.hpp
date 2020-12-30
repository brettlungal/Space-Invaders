#ifndef WORLD_H_
#define WORLD_H_
#include <vector>
#include "Player.hpp"

class World{
    
    private:
        char world[20][41] = {
            "_______________________________________",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "|                                     |",
            "_______________________________________"
            };
        int width;
        int height;
        Player *player;
        

    public:
        World();
        void printWorld();
        void moveX(bool left);
        void moveY(bool up);


};
#endif
