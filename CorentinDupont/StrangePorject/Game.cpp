//
// Created by Corentin on 13/02/2018.
//
#include <iostream>
#include <random>
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
    string **newGameGrid;
    newGameGrid = new string*[sizeX];

    //assign a column for each line
    for(int i=0; i<sizeX;i++){
        newGameGrid[i] = new string[sizeY];
    }

    //fill the game grid with the character -
    for(int x=0; x<sizeX; x++){
        for(int y=0; y<sizeY; y++){
            newGameGrid[x][y] = "-";
        }
    }

    cout << "Generate Coins ..." << endl;
    //generate coins
    spawnCoinsRandomly(sizeX*sizeY/5);

    //register the game grid
    setGameGrid(newGameGrid);
}
string **Game::getGameGrid() {
    return gameGrid;
}

void Game::setGameGrid(string **newGameGrid) {
    gameGrid = newGameGrid;
}

void Game::displayGameGrid() {
    for(int y=0; y<sizeY; y++){
        for(int x=0; x<sizeX; x++){
            if(x == player->coordinate[0] && y == player->coordinate[1]){
                gameGrid[x][y] = "P";
            }else if(checkCoinAtPosition(x, y)){
                gameGrid[x][y] = "O";
            }else{
                gameGrid[x][y] = "-";
            }
            cout << gameGrid[x][y] << "   ";
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

void Game::spawnCoinsRandomly(int coinCount){
    //create coins and set their coordinate
    for(int x=0; x<sizeX; x++){
        for(int y=0; y<sizeY; y++){
            //if the current position is not the player position
            if(!(x == player->coordinate[0] && y == player->coordinate[1])){
                int randomInteger = 0 + (rand() % static_cast<int>(sizeX*sizeY/5 - 0 + 1));

                //create coin after checking if there is no coin at this position
                if(randomInteger == 1 && !checkCoinAtPosition(x, y)){
                    //cout << "Spawn coin at : " << x << " "<< y <<endl;
                    Coin newCoin;
                    newCoin.coordinate[0] = x;
                    newCoin.coordinate[1] = y;
                    coinVector.push_back(newCoin);
                    coinCount--;
                    //Stop generate coins the coin count is reach
                    if(coinCount == 0){
                        break;
                    }
                }
            }
        }
    }

    //Launch another random generation if coinCount is not already reach.
    if(coinCount != 0){
        spawnCoinsRandomly(coinCount);
    }
}

//Check if there is a coin at x and y position
bool Game::checkCoinAtPosition(int x, int y) {
    for(unsigned i=0; i<coinVector.size(); i++){
        int coinPosX = coinVector[i].coordinate[x];
        int coinPosY = coinVector[i].coordinate[y];

        if(coinPosX == x && coinPosY == y){
            return true;
        }
    }
    return false;
}




