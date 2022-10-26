#ifndef OOP_LAB1_RM_EXIT_H
#define OOP_LAB1_RM_EXIT_H

#include "CellEvent.h"


class Exit: public CellEvent{
    int event_react(Player* player, Field* field) override;
};

#endif