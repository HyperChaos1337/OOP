#include "Trap.h"

void Trap::make_event(Player *player, Field *field, Cell *cell){
    player->decrease_hp();
    std::cout << "It's a trap!" << "\n" << "HP:" << player->get_hp() << "\n\n";
    if(player->get_hp() == 0) {
        std::cout << "You've been thrown out!" << "\n\n";
        player->set_death(true);
    }
}