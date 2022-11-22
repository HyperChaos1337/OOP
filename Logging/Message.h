#ifndef OOP_LB2_MESSAGE_H
#define OOP_LB2_MESSAGE_H

#include <iostream>
#include "../Core/Player.h"
#include "../Core/Field.h"

class Message{
private:
    bool start = true;
public:
    std::string get_pl(Player* player);
    std::string get_event(Field* field, Player* player);
    std::string get_error(Field* field, Player* player);
    std::string get_info(Player* player);
};

#endif