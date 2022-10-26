#include "Empty.h"

int Empty::event_react(Player *player, Field *field){
    std::cout << "Cell is empty!" << std::endl;
    return 1;
}