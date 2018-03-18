//
// Created by Corentin on 13/02/2018.
//
#include <iostream>
#include "Game.h"

using namespace std;

Game::Game(){
    player = new Player();
    player->coordinate[0] = 0;
    player->coordinate[1] = 0;
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
    return gameGrid;
}

void Game::setGameGrid(int **newGameGrid) {
    gameGrid = newGameGrid;
}

void Game::displayGameGrid() {
    for(int y=0; y<sizeY; y++){
        for(int x=0; x<sizeX; x++){
            if(x == player->coordinate[0] && y == player->coordinate[1]){
                gameGrid[x][y] = 1;
            }else{
                gameGrid[x][y] = 0;
            }
            printf("%i   ", gameGrid[x][y]);
        }
        cout << endl;
    }
    cout << endl;
}

//Determine if the player can move after getting user input
void Game::askPlayerToMoveTo(Dir direction) {
    switch(direction){
        case Right:
            if(player->coordinate[0]<sizeX-1){
                player->movePlayerTo(direction);
                displayGameGrid();
            }
            break;
        case Bottom:
            if(player->coordinate[1]<sizeY-1){
                player->movePlayerTo(direction);
                displayGameGrid();
            }
            break;
        case Left:
            if(player->coordinate[0]>0){
                player->movePlayerTo(direction);
                displayGameGrid();
            }
            break;
        case Top:
            if(player->coordinate[1]>0){
                player->movePlayerTo(direction);
                displayGameGrid();
            }
            break;

    }
}




