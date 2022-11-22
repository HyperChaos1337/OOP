#ifndef OOP_LB2_EVENTSTORAGE_H
#define OOP_LB2_EVENTSTORAGE_H

#include "CellEvent/Empty.h"
#include "CellEvent/Wall.h"
#include "PlayerEvent/Heal.h"
#include "PlayerEvent/Gem.h"
#include "CellEvent/Exit.h"
#include "PlayerEvent/Trap.h"
#include "PlayerEvent/Weapon.h"
#include "PlayerEvent/Enemy.h"
#include "PlayerEvent/WeaponUpgrader.h"

class EventStorage{
private:
    Empty* empty;
    Wall* wall;
    Heal* heal;
    Gem* gem;
    Exit* exit;
    Trap* trap;
    Weapon* weapon;
    Enemy* enemy;
    WeaponUpgrader* weaponUpgrader;
public:
    EventStorage(){
        this->empty = new Empty;
        this->wall = new Wall;
        this->heal = new Heal;
        this->gem = new Gem;
        this->exit = new Exit;
        this->trap = new Trap;
        this->weapon = new Weapon;
        this->enemy = new Enemy;
        this->weaponUpgrader = new WeaponUpgrader;
    };
    Empty* get_empty();
    Wall* get_wall();
    Heal* get_heal();
    Gem* get_gem();
    Exit* get_exit();
    Trap* get_trap();
    Weapon* get_weapon();
    Enemy* get_enemy();
    WeaponUpgrader* get_upgrader();
    ~EventStorage();
};

#endif