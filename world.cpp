#include "World.hpp"
#include <iostream>
using namespace std;


World::World(){


    this->width = sizeof(this->world[0]); //x size
    this->height = sizeof(this->world)/this->width; //y size
    this->player = new Player(this->width,this->height);
}

void World::printWorld(){
    int playerX = this->player->getXCoordinate();
    int playerY = this->player->getYCoordinate();
    for ( int i = 0; i < this->height; i++ ){
        for ( int j = 0; j < this->width; j++ ){
            if ( i == playerY && j == playerX ){
                cout<<"A";
            }else{
                cout<<this->world[i][j];
            }
        }
        cout<<""<<endl;
    }
}


void World::moveX(bool left){
    int playerX = this->player->getXCoordinate();
    int playerY = this->player->getYCoordinate();
    if ( left ){
        //move character left
        if ( playerX < 2 ){
            //roll over to other side
            this->world[playerY][playerX] = ' ';
            this->player->setX(this->width - 4);
        }else{
            this->world[playerY][playerX] = ' ';
            this->player->moveLeft();
        }

    }else{
        //moving right
        if ( playerX > (this->width-5) ){
            //roll over to other side
            this->world[playerY][playerX] = ' ';
            this->player->setX(1);
        }else{
            this->world[playerY][playerX] = ' ';
            this->player->moveRight();
        }
    }
}