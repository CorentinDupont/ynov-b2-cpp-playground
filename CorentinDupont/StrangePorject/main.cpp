#include <iostream>
#include "Game.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Game *game = new Game();
    game->createGameGrid(5, 5);
    game->displayGameGrid();

    bool inGame = true;
    while(inGame)
    {
        string userEntry;
        scanf("%s", &userEntry);
        if(userEntry.compare("right") == 0){
            game->player.movePlayerTo(Right);
        }else if(userEntry.compare("left") == 0){
            game->player.movePlayerTo(Left);
        }else if(userEntry.compare("top") == 0){
            game->player.movePlayerTo(Top);
        }else if(userEntry.compare("bottom") == 0){
            game->player.movePlayerTo(Bottom);
        }
    }

    return 0;
}