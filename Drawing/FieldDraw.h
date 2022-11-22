#ifndef OOP_LB2_FIELDDRAW_H
#define OOP_LB2_FIELDDRAW_H

#include "C:\Users\User\CLionProjects\OOP\Core\Field.h"
#include "CellDraw.h"

#include <SFML/Graphics.hpp>

class FieldDraw{
    Field* field;
    CellDraw* cellDraw;
    int window_width;
    int window_height;
public:
    FieldDraw(Field *field);
    int get_window_width();
    int get_window_height();

    void draw_field(sf::RenderWindow &window);
};
#endif