#ifndef PLAYER_H_
#define PLAYER_H_

class Player{

    private:
        int posX;
        int posY;
        int worldHeight;
        int worldWidth;
        int health;
    public:
        Player(int width,int height);
        void moveLeft();
        void moveRight();
        void setX(int value);
        void setY(int value);
        void moveUp();
        void moveDown();
        int getXCoordinate();
        int getYCoordinate();
        bool dealDamage(int amount);
        void healDamage(int amount);
};

#endif