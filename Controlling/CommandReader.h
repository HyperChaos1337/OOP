#ifndef OOP_LAB1_RM_COMMANDREADER_H
#define OOP_LAB1_RM_COMMANDREADER_H

#include "conio.h"

#include "Controller.h"

#include <SFML/Graphics.hpp>
class Reader: public controller{
private:
    int dir;
public:
    Reader(Player* player, Field* field): controller(player, field){};
    void press();
};

#endif
