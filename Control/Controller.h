#ifndef OOP_LB2_CONTROLLER_H
#define OOP_LB2_CONTROLLER_H

#define up_dir 10
#define right_dir 11
#define down_dir 12
#define left_dir 13
#define stop 14

#include "C:\Users\User\CLionProjects\OOP\Core\Field.h"
#include "C:\Users\User\CLionProjects\OOP\Core\Player.h"


class Controller{
private:
    Player* player;
    Field* field;
public:
    Controller(Player* player, Field* field);

    void move(int dir);
    void make_event(int x, int y, int dir);

    int next_x_coord(int dir);
    int next_y_coord(int dir);

};

#endif