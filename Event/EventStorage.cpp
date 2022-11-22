#include "EventStorage.h"

Empty* EventStorage::get_empty(){
    return empty;
}
Wall* EventStorage::get_wall(){
    return wall;
}
Heal* EventStorage::get_heal(){
    return heal;
}
Gem* EventStorage::get_gem(){
    return gem;
}
Exit* EventStorage::get_exit(){
    return exit;
}
Trap* EventStorage::get_trap(){
    return trap;
}
Weapon* EventStorage::get_weapon(){
    return weapon;
}
Enemy* EventStorage::get_enemy(){
    return enemy;
}
WeaponUpgrader* EventStorage::get_upgrader(){
    return weaponUpgrader;
}