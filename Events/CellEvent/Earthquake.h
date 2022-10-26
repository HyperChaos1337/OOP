#ifndef OOP_LAB1_RM_EARTHQUAKE_H
#define OOP_LAB1_RM_EARTHQUAKE_H

#include "CellEvent.h"

class Earthquake: public CellEvent{
    int event_react(Player* player, Field* field) override;
};

#endif