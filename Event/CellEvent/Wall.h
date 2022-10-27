#ifndef OOP_LB2_WALL_H
#define OOP_LB2_WALL_H

#include "CellEvent.h"

class Wall: public CellEvent{
    int make_event(Player* player, Field* field) override;
};

#endif