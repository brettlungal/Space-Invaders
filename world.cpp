#include "World.hpp"
#include <iostream>
using namespace std;


World::World(){

    this->playerX=8;
    this->playerY=17;
    this->width = sizeof(this->world[0]); //x size
    this->height = sizeof(this->world)/this->width; //y size
}

void World::printWorld(){
    for ( int i = 0; i < this->height; i++ ){
        for ( int j = 0; j < this->width; j++ ){
            if ( i == this->playerY && j == this->playerX ){
                cout<<"A";
            }else{
                cout<<this->world[i][j];
            }
        }
        cout<<""<<endl;
    }
}


void World::moveX(bool left){
    if ( left ){
        //move character left
        if ( this->playerX < 2 ){
            //roll over to other side
            this->world[this->playerY][this->playerX] = ' ';
            this->playerX = this->width - 4;
        }else{
            this->world[this->playerY][this->playerX] = ' ';
            this->playerX--;
        }

    }else{
        //moving right
        if ( this->playerX > (this->width-5) ){
            //roll over to other side
            this->world[this->playerY][this->playerX] = ' ';
            this->playerX = 1;
        }else{
            this->world[this->playerY][this->playerX] = ' ';
            this->playerX++;
        }
    }
}