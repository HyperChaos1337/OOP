#ifndef OOP_LAB1_RM_ENEMY_H
#define OOP_LAB1_RM_ENEMY_H

#include "CellEvent.h"

class Enemy : public CellEvent{
    int event_react(Player* player, Field* field) override;
};

#endif