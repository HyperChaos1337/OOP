#ifndef OOP_LAB1_RM_APPLY_H
#define OOP_LAB1_RM_APPLY_H

#include "C:\Users\User\CLionProjects\OOP\Core\Cell.h"

class Applier{
public:

    Heal* healing(Event* current_event);
    Trap* entrapping(Event* current_event);
    Getting_gem* getting_gem(Event* current_event);
    Wall* wall(Event* current_event);
    Empty* empty(Event* current_event);
    Weapon* weapon(Event* current_event);

    Enemy* enemy(Event* current_event);
    Earthquake* earthquake(Event* current_event);
    Exit* exit(Event* current_event);
};

#endif //OOP_LAB1_RM_APPLY_H