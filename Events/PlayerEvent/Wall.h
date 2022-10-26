#ifndef OOP_LAB1_RM_WALL_H
#define OOP_LAB1_RM_WALL_H

#include "PlayerEvent.h"
#include <iostream>

class Wall: public PlayerEvent{
    int event_react(Player* player, Field* field) override;
};

#endif