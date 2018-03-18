//
// Created by Corentin on 13/02/2018.
//
#ifndef STRANGEPORJECT_GAME_H
#define STRANGEPORJECT_GAME_H

#include <iostream>
#include <vector>
#include "cmake-build-debug/Player.h"

using namespace std;

class Game{
    private:
    int **gameGrid;


    public:
    Game();

    int sizeX;
    int sizeY;
    int **getGameGrid();

    Player *player;

    void createGameGrid(int newSizeX, int newSizeY);
    void setGameGrid(int **newGameGrid);
    void displayGameGrid();

    void askPlayerToMoveTo(Dir direction);
};
#endif //STRANGEPORJECT_GAME_H
