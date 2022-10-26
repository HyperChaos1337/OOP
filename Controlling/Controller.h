#ifndef OOP_LAB1_RM_CONTROLLER_H
#define OOP_LAB1_RM_CONTROLLER_H

#include "C:\Users\User\CLionProjects\OOP\Core\Player.h"
#include "C:\Users\User\CLionProjects\OOP\Core\Field.h"
#define PL_DIR_UP 10
#define PL_DIR_LEFT 11
#define PL_DIR_DOWN 12
#define PL_DIR_RIGHT 13

class controller{
private:
    Player* player;
    Field* field;
public:
    controller(Player* player, Field* field);
    void move(int dir);
    void event(int x, int y, int dir);

    int next_x_coord(int dir);
    int next_y_coord(int dir);
};

#endif