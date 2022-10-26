#include "Getting_gem.h"

#include "C:\Users\User\CLionProjects\OOP\Controlling\Controller.h"

int Getting_gem::event_react(Player *player, Field *field){
    player->increase_gems_amount();
    player->increase_score();
    std::cout << "You got a gem! Current amount of gems: " << player->get_gems() << std::endl;
    std::cout << "Your score is increased! Current score: " << player->get_score() << std::endl;

    if(player->get_gems() == 15){
        std::cout << "Got required gems. Now get out of here..." << std::endl;
        field->add_exit();
    }
    else{
        field->add_enemy();
        std::cout << "You need to collect 15 gems" << std::endl;
    }
    return 1;
}