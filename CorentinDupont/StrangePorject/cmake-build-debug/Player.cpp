//
// Created by Corentin on 15/03/2018.
//

#include <iostream>
#include "Player.h"
#include "Direction.h"

using namespace std;

Player::Player() = default;

void Player::movePlayerTo(Dir direction) {
    switch(direction){
        case Right:
            coordinate[0]++;
            break;
        case Bottom:
            coordinate[1]++;
            break;
        case Left:
            coordinate[0]--;
            break;
        case Top:
            coordinate[1]--;
            break;

    }
}




