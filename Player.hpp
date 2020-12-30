#ifndef PLAYER_H_
#define PLAYER_H_

class Player{

    private:
        int posX;
        int posY;
        int health;
    public:
        Player();
        void moveLeft();
        void moveRight();
        void moveUp();
        void moveDown();
        int getXCoordinate();
        int getYCoordinate();
}

#endif