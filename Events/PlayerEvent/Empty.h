#ifndef OOP_LAB1_RM_EMPTY_H
#define OOP_LAB1_RM_EMPTY_H

#include "PlayerEvent.h"

class Empty: public PlayerEvent{
    int event_react(Player* player, Field* field) override;
};

#endif