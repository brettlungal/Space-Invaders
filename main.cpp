#include "World.hpp"
#include <iostream>
using namespace std;


int main(void){

    World *game_world = new World;
    game_world->printWorld();
    game_world->moveX(true);
    game_world->moveX(true);
    game_world->moveX(true);
    game_world->moveX(true);
    game_world->printWorld();
    return 0;
}