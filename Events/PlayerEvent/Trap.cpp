#include "Trap.h"
#include "C:\Users\User\CLionProjects\OOP\Core\Field.h"

int Trap::event_react(Player *player, Field *field){
    player->get_death();
    std::cout << "Devil has taken your soul!!! HA-HA-HA\nNow you'll burn in hell for eternity..." << std::endl;
    return 1;
}