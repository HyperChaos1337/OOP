#ifndef OOP_LB2_EMPTY_H
#define OOP_LB2_EMPTY_H

#include "CellEvent.h"

class Empty: public CellEvent{
    int make_event(Player* player, Field* field)override;
};

#endif