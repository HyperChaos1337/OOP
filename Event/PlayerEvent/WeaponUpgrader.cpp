#include "WeaponUpgrader.h"
#include "../../Control/Controller.h"

void WeaponUpgrader::make_event(Player *player, Field *field, Cell* cell){
    if(player->get_lvl() < 3){
        std::cout << "Required lvl is 3. Current lvl: " << player->get_lvl() << "\n\n";
    }
    else if(player->get_upgrade() != 6){
        cell->set_pass(true);
        player->increase_damage();
        player->get_upgrade();
        player->increase_upgrade();
        std::cout << "Your damage is increased. Current damage: " << player->get_damage() << "\n\n";
        field->add_upgrader();
    }else{
        cell->set_pass(false);
        std::cout << "Upgraiders aren't available anymore" << "\n\n";
    }
}