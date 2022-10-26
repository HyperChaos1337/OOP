#include "Exit.h"
#include "CellEvent.h"

int Exit::event_react(Player *player, Field *field){
    player->winning(true);
    return 1;
}