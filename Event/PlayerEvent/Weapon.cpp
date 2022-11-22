#include "Weapon.h"
#include "../../Control/Controller.h"

void Weapon::make_event(Player *player, Field *field, Cell *cell){
    if(player->get_lvl() < 2){
        std::cout << "Required level is 2. Your level: " << player->get_lvl() << "\n\n";
    }
    else{
        cell->set_pass(true);
        player->set_damage(WEAPON_DAMAGE + player->get_damage());
        std::cout << "Your damage is increased. Current damage: " << player->get_damage() << "\n\n";
    }
}