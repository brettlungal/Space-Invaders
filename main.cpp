#include "World.hpp"
#include <windows.h>
#include <iostream>
using namespace std;


int main(void){

    World *game_world = new World;

    while( true ){
        game_world->printWorld();
        
        if ( GetAsyncKeyState(VK_LEFT) & 0x01 ){
            game_world->moveX(true);
        }
        if( GetAsyncKeyState(VK_RIGHT) & 0x01 ){
            game_world->moveX(false);
        }
        if ( GetAsyncKeyState(VK_SPACE) & 0x01 ){
            cout<<"fire me lazer"<<endl;
        }
        Sleep(125);
        system("CLS");
    }

    return 0;
}