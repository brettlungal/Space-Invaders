#ifndef WORLD_H_
#define WORLD_H_

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
        int playerX;
        int playerY;
        int width;
        int height;
    public:
        World();
        void printWorld();
        void moveX(bool left);
        void moveY(bool up);


};
#endif
