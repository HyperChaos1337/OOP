#ifndef OOP_LB2_WALL_H
#define OOP_LB2_WALL_H

#include "CellEvent.h"

class Wall: public CellEvent{
    void make_event(Player* player, Field* field, Cell* cell) override;
};

#endif