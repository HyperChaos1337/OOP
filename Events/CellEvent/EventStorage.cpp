#include "EventStorage.h"

Earthquake* EventStorage::get_earthquake(){
    return earthquake;
}
Enemy* EventStorage::get_enemy(){
    return enemy;
}
Exit* EventStorage::get_exit(){
    return exit;
}

Empty* EventStorage::get_empty(){
    return empty;
}
Getting_gem* EventStorage::get_getting_gem(){
    return getting_gem;
}
Heal* EventStorage::get_heal(){
    return heal;
}
Trap* EventStorage::get_trap(){
    return trap;
}
Wall* EventStorage::get_wall(){
    return wall;
}