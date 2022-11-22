#ifndef OOP_LB2_WEAPON_H
#define OOP_LB2_WEAPON_H

#include "PlayerEvent.h"

class Weapon: public PlayerEvent{
    void make_event(Player* player, Field* field, Cell* cell) override;
};

#endif