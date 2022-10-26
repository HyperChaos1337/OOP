#include "Heal.h"

int Heal::event_react(Player *player, Field *field){
    player->increase_health();
    std::cout << "You're healed! Current HP: " << player->get_health() << std::endl;
    return 1;
}