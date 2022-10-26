#include "Wall.h"

int Wall::event_react(Player *player, Field *field){
    std::cout << "There's a wall, you shall not pass!" << std::endl;
    return 0;
}