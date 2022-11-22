#ifndef OOP_LB2_EXIT_H
#define OOP_LB2_EXIT_H

#include "CellEvent.h"

class Exit: public CellEvent{
    void make_event(Player* player, Field* field, Cell* cell) final;
};

#endif