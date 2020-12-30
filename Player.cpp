#include "Player.hpp"

Player::Player(int width,int height){
    this->posX = width/2;
    this->posY = height-3;
    this->health = 100;
    this->worldWidth = width;
    this->worldHeight = height;
}

bool Player::dealDamage(int amount){
    if ( this->health - amount <= 0 ){
        this->health = 0;
        return false;
    }else{
        this->health -= amount;
        return true;
    }

}

void Player::healDamage(int amount){
    this->health += amount;
}

void Player::setX(int value){
    this->posX = value;
}

void Player::moveLeft(){
    this->posX--;
}

void Player::moveRight(){
    this->posX++;
}

void Player::setY(int value){
    this->posY = value;
}

void Player::moveUp(){
    this->posY--;
}

void Player::moveDown(){
    this->posY++;
}


int Player::getXCoordinate(){
    return this->posX;
}

int Player::getYCoordinate(){
    return this->posY;
}

