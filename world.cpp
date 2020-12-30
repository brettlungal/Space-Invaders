#include "World.hpp"
#include <iostream>
using namespace std;


World::World(){

    this->playerX=8;
    this->playerY=17;
}

void World::printWorld(){
    for ( int i = 0; i < 20; i++ ){
        for ( int j = 0; j < 20; j++ ){
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
        
        this->world[this->playerY][this->playerX] = ' ';
        this->playerX--;
    }else{
        //moving right
        this->world[this->playerY][this->playerX] = ' ';
        this->playerX++;
    }
}