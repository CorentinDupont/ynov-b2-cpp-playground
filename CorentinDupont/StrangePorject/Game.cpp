//
// Created by Corentin on 13/02/2018.
//
#include <iostream>
#include "Game.h"

using namespace std;

Game::Game(){
    Player player;
    player.coordinate[0] = 0;
    player.coordinate[1] = 1;
};

void Game::createGameGrid(int newSizeX, int newSizeY) {
    //register the size of the game grid
    sizeX = newSizeX;
    sizeY = newSizeY;

    //game grid initialisation
    int **newGameGrid;
    newGameGrid = new int*[sizeX];

    //assign a column for each line
    for(int i=0; i<sizeX;i++){
        newGameGrid[i] = new int[sizeY];
    }

    //fill the game grid with the number 0
    for(int x=0; x<sizeX; x++){
        for(int y=0; y<sizeY; y++){
            newGameGrid[x][y] = 0;
        }
    }

    //register the game grid
    setGameGrid(newGameGrid);
}
int **Game::getGameGrid() {

}

void Game::setGameGrid(int **newGameGrid) {
    gameGrid = newGameGrid;
}

void Game::displayGameGrid() {
    for(int x=0; x<sizeX; x++){
        for(int y=0; y<sizeY; y++){
            //cout << gameGrid[x][y];
            printf("%i   ", gameGrid[x][y]);
        }
        cout << endl;
    }
}




