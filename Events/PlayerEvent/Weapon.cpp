#include "Weapon.h"

int Weapon::event_react(Player *player, Field *field){
    player->increase_damage();
    return 1;
}