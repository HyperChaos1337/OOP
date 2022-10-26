#ifndef OOP_LAB1_RM_FIELDDRAW_H
#define OOP_LAB1_RM_FIELDDRAW_H

#include "C:\Users\User\CLionProjects\OOP\Core\Field.h"
#include "Apply.h"

#include <SFML/Graphics.hpp>

class Drawfield{
private:
    Field* field;
    Applier* applier;
    int window_width;
    int window_height;
public:
    Drawfield(Field *field);
    int get_window_width();
    int get_window_height();

    void draw_field(sf::RenderWindow &window);
};

#endif //OOP_LAB1_RM_FIELDDRAW_H
