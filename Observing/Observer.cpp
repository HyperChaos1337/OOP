#include "Observer.h"

void Observer::add_lvl(LogLevel *level){
    levels.push_back(level);
}

void Observer::check_status(){
    notify();
    logger->out();
}

void Observer::check_game(){
    if(player->get_move()){
        notify();
        logger->out();
        player->set_move(false);
    }
}

void Observer::notify(){
    if(!levels.empty()){
        for(auto i: levels) i->update();
    }
}