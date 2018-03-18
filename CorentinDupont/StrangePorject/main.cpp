#include <iostream>
#include "Game.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Game *game = new Game();
    game->createGameGrid(5, 5);
    game->displayGameGrid();

    bool inGame = true;
    string userEntry;

    //Game Loop
    while(inGame){
        //Ask player for a direction
        cin >> userEntry;
        if(userEntry == "right"){
            game->askPlayerToMoveTo(Right);
        }else if(userEntry == "left"){
            game->askPlayerToMoveTo(Left);
        }else if(userEntry == "top"){
            game->askPlayerToMoveTo(Top);
        }else if(userEntry == "bottom"){
            game->askPlayerToMoveTo(Bottom);
        }
    }

    return 0;
}