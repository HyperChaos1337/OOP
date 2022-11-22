#include "Heal.h"
#include "../../Control/Controller.h"


void Heal::make_event(Player *player, Field *field, Cell *cell){
    if(player->get_hp() != max_hp){
        cell->set_pass(true);
        player->increase_hp();
        std::cout << "You've been cured. Current HP: " << player->get_hp() << "\n\n";
        field->add_heal();
    }else{
        cell->set_pass(false);
        std::cout << "Maximum HP reached" << "\n\n";
    }
}