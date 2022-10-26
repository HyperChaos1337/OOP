#include "Earthquake.h"

int Earthquake::event_react(Player *player, Field *field){
    std::cout << "There were an earthquake. Some cells became passable" << std::endl;
    return 1;
}