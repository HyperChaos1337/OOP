#ifndef OOP_LB1_PLAYER_H
#define OOP_LB1_PLAYER_H

#include "Field.h"

class Player{
private:
    int health = 100, gems = 0, score = 0;
    int position_y, position_x;
public:

    Player(int x, int y);

    int get_position_x();
    int get_position_y();
    void set_position_x(int x);
    void set_position_y(int y);
};

#endif