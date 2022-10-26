#ifndef OOP_LAB1_RM_GETTING_GEM_H
#define OOP_LAB1_RM_GETTING_GEM_H

#include "PlayerEvent.h"

class Getting_gem: public PlayerEvent{
    int event_react(Player* player, Field* field) override;
};

#endif