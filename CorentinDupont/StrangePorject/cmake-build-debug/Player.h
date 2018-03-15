//
// Created by Corentin on 15/03/2018.
//

#ifndef STRANGEPORJECT_PLAYER_H
#define STRANGEPORJECT_PLAYER_H


#include "Direction.h"

class Player {

private:


public:
    int coordinate[2];

    Player();
    void movePlayerTo(Dir direction);
};


#endif //STRANGEPORJECT_PLAYER_H
