#include <iostream>
#include "Game.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Game *game = new Game();
    game->createGameGrid(5, 5);
    game->displayGameGrid();

    bool inGame = true;
    string userEntry;

    cout << "-------------------- You need to get all coins ! [O]-------------------" << endl << endl;

    //Game Loop
    while(inGame){
        //Ask player for a direction
        cout << "Let's move your character (P) ! Please choose a direction : [top, right, bottom, left] ";
        cin >> userEntry;
        if(userEntry == "right"){
            game->askPlayerToMoveTo(Right);
        }else if(userEntry == "left"){
            game->askPlayerToMoveTo(Left);
        }else if(userEntry == "top"){
            game->askPlayerToMoveTo(Top);
        }else if(userEntry == "bottom"){
            game->askPlayerToMoveTo(Bottom);
        }else{
            cout << "wrong direction !";
        }
    }

    return 0;
}