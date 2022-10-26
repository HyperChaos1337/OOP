#ifndef OOP_LAB1_RM_HEAL_H
#define OOP_LAB1_RM_HEAL_H

#include "PlayerEvent.h"

class Heal: public PlayerEvent{
    int event_react(Player* player, Field* field) override;
};

#endif