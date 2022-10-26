#ifndef OOP_LAB1_RM_TRAP_H
#define OOP_LAB1_RM_TRAP_H

#include "PlayerEvent.h"

class Trap: public PlayerEvent{
    int event_react(Player* player, Field* field)override;
};

#endif