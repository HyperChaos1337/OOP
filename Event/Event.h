#ifndef OOP_LB2_EVENT_H
#define OOP_LB2_EVENT_H

#include "C:\Users\User\CLionProjects\OOP\Core\Player.h"
#include <iostream>

class Field;
class Cell;

class Event{
public:
    virtual void make_event(Player* player, Field* field, Cell* cell) = 0;
    virtual ~Event() = default;
};

#endif