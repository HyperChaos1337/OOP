#include "Exit.h"
#include "C:\Users\User\CLionProjects\OOP\Core\Cell.h"

void Exit::make_event(Player *player, Field *field, Cell* cell){
    if(player->get_lvl() != MAX_LVL){
        std::cout << "You must get max lvl to get out of here!" << "\n"
        << "Current lvl: " << player->get_lvl() << "\n\n";
    }
    else{
        cell->set_pass(true);
        player->set_win(true);
        std::cout << "You've won!" << "\n";
    }
}