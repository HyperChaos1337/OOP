#include "Gem.h"
#include "../../Control/Controller.h"

void Gem::make_event(Player *player, Field *field, Cell *cell){
    if(player->get_lvl() != MAX_LVL){
        player->increase_gem();
        player->increase_exp();
        std::cout << "Amount of gems: " << player->get_gem() << "\n\n";
        field->add_gem();
    }else{
        cell->set_pass(false);
        std::cout << "Maximum level reached" << "\n\n";
    }
}