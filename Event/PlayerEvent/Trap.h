#ifndef OOP_LB2_TRAP_H
#define OOP_LB2_TRAP_H

#include "PlayerEvent.h"

class Trap: public PlayerEvent{
    void make_event(Player* player, Field* field, Cell* cell) override;
};

#endif