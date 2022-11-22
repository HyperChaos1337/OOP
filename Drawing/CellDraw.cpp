#include "CellDraw.h"

Wall* CellDraw::is_cell_wall(Event* cur_event){
    Wall* new_event = dynamic_cast<Wall*>(cur_event);
    return new_event;
}
Empty* CellDraw::is_cell_empty(Event *cur_event){
    Empty* new_event = dynamic_cast<Empty*>(cur_event);
    return new_event;
}
Heal* CellDraw::is_cell_heal(Event *cur_event){
    Heal* new_event = dynamic_cast<Heal*>(cur_event);
    return new_event;
}
Gem* CellDraw::is_cell_gem(Event *cur_event){
    Gem* new_event = dynamic_cast<Gem*>(cur_event);
    return new_event;
}
Exit* CellDraw::is_cell_exit(Event *cur_event){
    Exit* new_event = dynamic_cast<Exit*>(cur_event);
    return new_event;
}
Trap* CellDraw::is_cell_trap(Event *cur_event){
    Trap* new_event = dynamic_cast<Trap*>(cur_event);
    return new_event;
}
Weapon* CellDraw::is_cell_weapon(Event *cur_event){
    Weapon* new_event = dynamic_cast<Weapon*>(cur_event);
    return new_event;
}
Enemy* CellDraw::is_cell_enemy(Event *cur_event){
    Enemy* new_event = dynamic_cast<Enemy*>(cur_event);
    return new_event;
}
WeaponUpgrader* CellDraw::is_cell_upgrader(Event *cur_event){
    WeaponUpgrader* new_event = dynamic_cast<WeaponUpgrader*>(cur_event);
    return new_event;
}