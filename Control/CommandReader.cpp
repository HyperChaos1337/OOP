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
        switch(check_next_cell(dir)){
            case(empty_cell):
                std::cout << "Cell is passable" << std::endl;
                move(dir);
                break;
            case (wall_cell):
                std::cout << "There is a wall" << std::endl;
                break;
        }
    }
}