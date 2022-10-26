#ifndef OOP_LAB1_RM_CELL_H
#define OOP_LAB1_RM_CELL_H

#define CELL_SIZE 32

#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\Earthquake.h"
#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\Enemy.h"
#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\Exit.h"

#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Empty.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Getting_gem.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Heal.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Trap.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Wall.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Weapon.h"

class Cell{
private:
    Event* event;
    bool player_cell = false;
public:
    Cell();
    Cell(const Cell& other);
    Cell& operator=(const Cell& other);

    Cell(Cell&& other);
    Cell& operator=(Cell&& other);

    bool player_pos();
    void set_event(Event* cur_event);
    void set_player_pos(bool place);

    Event* cell_event();
    Empty* empty_cell();

};

#endif
