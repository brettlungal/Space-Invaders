#ifndef WORLD_H_
#define WORLD_H_

class World{
    
    private:
        char world[20][20] = {
            "###################",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "#                 #",
            "###################"
            };
        int playerX;
        int playerY;
    
    public:
        World();
        void printWorld();
        void moveX(bool left);
        void moveY(bool up);


};
#endif
