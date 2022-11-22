#ifndef OOP_LB2_GEM_H
#define OOP_LB2_GEM_H

#include "PlayerEvent.h"

class Gem: public PlayerEvent{
    void make_event(Player* player, Field* field, Cell* cell)override;
};

#endif