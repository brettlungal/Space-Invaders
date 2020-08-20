#include <iostream>

using namespace std;

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
    "#        W        #",
    "###################"
    };

bool gameEnd = false;
int gamespeed = 100;

int main(void){

    while ( !gameEnd ){
        system("clear");
        for ( int i = 0; i < 20; i++ ){
            cout<<world[i]<<endl;
        }

        for ( x = 0; x < 20; x ++ ){
            for ( y = 0; y < 20; y++ ){
                
                switch(world[x][y]){

                    case 'W':
                        if (GetAsyncKeyState(VK_LEFT) != 0 ){
                            int newX = x--;
                        }

                }
            }
        }

    }

    return 0;
}