#ifndef OOP_LAB1_RM_EVENTSTORAGE_H
#define OOP_LAB1_RM_EVENTSTORAGE_H

#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\Earthquake.h"
#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\Enemy.h"
#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\Exit.h"

#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Empty.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Getting_gem.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Heal.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Trap.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Wall.h"
#include "C:\Users\User\CLionProjects\OOP\Events\PlayerEvent\Weapon.h"

class EventStorage{
private:
    Earthquake* earthquake;
    Enemy* enemy;
    Exit* exit;
    Empty* empty;
    Getting_gem* getting_gem;
    Heal* heal;
    Trap* trap;
    Wall* wall;
    Weapon* weapon;
public:
    EventStorage(){
        this->earthquake = new Earthquake;
        this->enemy = new Enemy;
        this->exit = new Exit;
        this->empty = new Empty;
        this->getting_gem = new Getting_gem;
        this->heal = new Heal;
        this->trap = new Trap;
        this->wall = new Wall;
        this->weapon = new Weapon;
    }
    Earthquake* get_earthquake();
    Enemy* get_enemy();
    Exit* get_exit();
    Empty* get_empty();
    Getting_gem* get_getting_gem();
    Heal* get_heal();
    Trap* get_trap();
    Wall* get_wall();
    Weapon* get_weapon();
};

#endif