#ifndef OOP_LB2_LEVELGENERATION_H
#define OOP_LB2_LEVELGENERATION_H

#include <iostream>
#include "FieldGeneration.h"
#include "WallRule.h"

class Level_Gen {
private:
    int level;

public:
    Field switch_mapgen_level(Player& player, int x, int y){
        std::cout<<"Enter game level (0 or 1)"<<std::endl;
        std::cin >> level;
        Field field(x, y);
        switch(level){
            case 0:
                Field_Generator<Rule_Wall<10>> gen0;
                field = gen0.field_gen(x, y);
                player.set_position_x(10);
                player.set_position_y(10);
                break;
            case 1:
                Field_Generator<Rule_Wall<15>> gen1;
                field = gen1.field_gen( x, y);
                player.set_position_x(7);
                player.set_position_y(7);
                break;
            default:
                Field_Generator<Rule_Wall<10>> gendef;
                field = gendef.field_gen(x, y);
                player.set_position_x(5);
                player.set_position_y(5);

        }
        return field;

    }
};

#endif