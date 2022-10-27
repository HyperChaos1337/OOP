#ifndef OOP_LB1_FIELDDRAW_H
#define OOP_LB1_FIELDDRAW_H

#include "C:\Users\User\CLionProjects\oop_lb1\Core\Field.h"

#include <SFML/Graphics.hpp>

class FieldDraw{
    Field* field;
    int window_width;
    int window_height;
public:
    FieldDraw(Field *field);
    int get_window_width();
    int get_window_height();

    void draw_field(sf::RenderWindow &window);
};
#endif