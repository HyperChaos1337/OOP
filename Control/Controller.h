#ifndef OOP_LB1_CONTROLLER_H
#define OOP_LB1_CONTROLLER_H

#define up_dir 10
#define right_dir 11
#define down_dir 12
#define left_dir 13
#include "C:\Users\User\CLionProjects\oop_lb1\Core\Field.h"
#include "C:\Users\User\CLionProjects\oop_lb1\Core\Player.h"


class Controller{
private:
    Player* player;
    Field* field;
public:
    Controller(Player* player, Field* field);
    int check_next_cell(int dir);
    void move(int dir);

};

#endif