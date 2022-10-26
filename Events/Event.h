#ifndef OOP_LAB1_RM_EVENT_H
#define OOP_LAB1_RM_EVENT_H

#include "C:\Users\User\CLionProjects\OOP\Core\Player.h"
#include <iostream>

class Field;

class Event{
public:
    virtual int event_react(Player* player, Field* field) = 0;
};

#endif