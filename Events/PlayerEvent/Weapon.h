#ifndef OOP_LAB1_RM_WEAPON_H
#define OOP_LAB1_RM_WEAPON_H

#include "PlayerEvent.h"

class Weapon: public PlayerEvent{
public:
    int event_react(Player* player, Field* field) override;
};

#endif