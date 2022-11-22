#include "CommandReader.h"

void CommandReader::read_from_keyboard(){
    bool flag = false;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        dir = up_dir;
        flag = true;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        dir = right_dir;
        flag = true;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        dir = down_dir;
        flag = true;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        dir = left_dir;
        flag = true;
    }
    if(flag){
        int x = next_x_coord(dir); int y = next_y_coord(dir);
        make_event(x, y, dir);
        dir = stop;
    }
}