#ifndef OOP_LB1_COMMANDREADER_H
#define OOP_LB1_COMMANDREADER_H

#include "Controller.h"
#include <SFML/Graphics.hpp>

class CommandReader: public Controller{
private:
    int dir;
public:
    CommandReader(Player* player, Field* field) : Controller(player, field){};
    void read_from_keyboard();
};

#endif
