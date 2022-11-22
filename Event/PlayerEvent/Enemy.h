#ifndef OOP_LB2_ENEMY_H
#define OOP_LB2_ENEMY_H

#include "PlayerEvent.h"

class Enemy: public PlayerEvent{
    void make_event(Player* player, Field* field, Cell* cell) override;
};

#endif