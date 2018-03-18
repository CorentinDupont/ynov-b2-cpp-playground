//
// Created by Corentin on 13/02/2018.
//
#ifndef STRANGEPORJECT_GAME_H
#define STRANGEPORJECT_GAME_H

#include <iostream>
#include <vector>
#include <list>
#include "cmake-build-debug/Player.h"
#include "cmake-build-debug/Coin.h"

using namespace std;

class Game{
    private:
    string **gameGrid;
    int coinCount;
    vector<Coin> coinVector;


    public:
    Game();

    int sizeX;
    int sizeY;
    string **getGameGrid();

    Player *player;

    void createGameGrid(int newSizeX, int newSizeY);
    void setGameGrid(string **newGameGrid);
    void displayGameGrid();
    void spawnCoinsRandomly(int coinCount);
    bool checkCoinAtPosition(int x, int y);

    void askPlayerToMoveTo(Dir direction);
};
#endif //STRANGEPORJECT_GAME_H
