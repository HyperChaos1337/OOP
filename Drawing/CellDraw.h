#ifndef OOP_LB2_CELLDRAW_H
#define OOP_LB2_CELLDRAW_H

#include "../Core/Cell.h"

class CellDraw{
public:
    Wall* is_cell_wall(Event* cur_event);
    Empty* is_cell_empty(Event* cur_event);
    Heal* is_cell_heal(Event* cur_event);
    Gem* is_cell_gem(Event* cur_event);
    Exit* is_cell_exit(Event* cur_event);
    Trap* is_cell_trap(Event* cur_event);
    Weapon* is_cell_weapon(Event* cur_event);
    Enemy* is_cell_enemy(Event* cur_event);
    WeaponUpgrader* is_cell_upgrader(Event* cur_event);
};

#endif