#include "Enemy.h"
#include "C:\Users\User\CLionProjects\OOP\Controlling\Controller.h"



int Enemy::event_react(Player *player, Field *field){

    if(player->get_damage() < 100){
        player->decrease_health();
        std::cout << "Can't do damage to your enemy. Decreasing hp..." << std::endl;
        std::cout << "Current HP:" << player->get_health() << std::endl;
        return 0;
    }
    else{
        std::cout << "Enemy is defeated. Now get a gem" << std::endl;
        field->add_gem();
        return 1;
    }
}