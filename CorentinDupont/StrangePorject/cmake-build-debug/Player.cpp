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
            cout << "right" << endl;
            break;
        case Bottom:
            cout << "bottom" << endl;
            break;
        case Left:
            cout << "left" << endl;
            break;
        case Top:
            cout << "top" << endl;
            break;

    }
}




