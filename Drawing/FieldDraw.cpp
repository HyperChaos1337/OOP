#include "FieldDraw.h"
FieldDraw::FieldDraw(Field *field){
    this->field = field;
    this->window_width = field->get_field_size_x()*size_of_cell;
    this->window_height = field->get_field_size_y()*size_of_cell;
}
int FieldDraw::get_window_width(){
    return window_width;
}
int FieldDraw::get_window_height(){
    return window_height;
}

void FieldDraw::draw_field(sf::RenderWindow &window){

    sf::Texture none_texture;
    none_texture.loadFromFile("C:/Users/User/CLionProjects/Images/none.png");
    sf::Sprite none;
    none.setTexture(none_texture);

    sf::Texture player_texture;
    player_texture.loadFromFile("C:/Users/User/CLionProjects/Images/player.png");
    sf::Sprite player;
    player.setTexture(player_texture);

    sf::Texture wall_texture;
    wall_texture.loadFromFile("C:/Users/User/CLionProjects/Images/wall.png");
    sf::Sprite wall;
    wall.setTexture(wall_texture);
    for (size_t i = 0; i < field->get_field_size_y(); i++) {
        for (size_t j = 0; j < field->get_field_size_x(); j++) {
            switch(field->get_field_address()[i][j].get_type()){
                case empty_cell:
                    none.setPosition(float(j * size_of_cell), float(i * size_of_cell));
                    window.draw(none);
                    break;
                case player_cell:
                    player.setPosition(float(j * size_of_cell), float(i * size_of_cell));
                    window.draw(player);
                    break;
                case wall_cell:
                    wall.setPosition(float(j * size_of_cell), float(i * size_of_cell));
                    window.draw(wall);
                    break;
            }
        }
    }
}