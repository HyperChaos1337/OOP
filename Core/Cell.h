#ifndef OOP_LB2_CELL_H
#define OOP_LB2_CELL_H

#include "../Event/CellEvent/Empty.h"
#include "../Event/CellEvent/Wall.h"
#include "../Event/PlayerEvent/Heal.h"
#include "../Event/PlayerEvent/Gem.h"
#include "../Event/CellEvent/Exit.h"
#include "../Event/PlayerEvent/Trap.h"
#include "../Event/PlayerEvent/Weapon.h"
#include "../Event/PlayerEvent/Enemy.h"
#include "../Event/PlayerEvent/WeaponUpgrader.h"

#define size_of_cell 32

class Cell{
private:

    bool is_player_cell = false;
    bool is_passable = true;
    Event* event;

public:

    Cell();
    Cell(const Cell& other);
    Cell& operator=(const Cell& other);

    Cell(Cell&& other);
    Cell& operator=(Cell&& other);

    bool get_pl_pos();
    void set_pl_pos(bool place);

    void set_event(Event* cur_event);
    Event* get_event();
    Empty* cell_empty();

    void set_pass(bool pass);
    bool is_pass();
};
#endif