#ifndef OOP_LB2_HEAL_H
#define OOP_LB2_HEAL_H

#include "PlayerEvent.h"

class Heal: public PlayerEvent{
    void make_event(Player* player, Field* field, Cell* cell) override;
};

#endif