#ifndef OOP_LB1_EVENT_H
#define OOP_LB1_EVENT_H

#include "C:\Users\User\CLionProjects\oop_lb2\Core\Player.h"

class Event{
    virtual int make_event(Player* player, Field* field) = 0;
};

#endif