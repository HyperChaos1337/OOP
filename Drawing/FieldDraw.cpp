#include "FieldDraw.h"

FieldDraw::FieldDraw(Field *field){
    this->field = field;
    this->window_width = field->get_field_size_x()*size_of_cell;
    this->window_height = field->get_field_size_y()*size_of_cell;
    cellDraw = new CellDraw;
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

    sf::Texture heal_texture;
    heal_texture.loadFromFile("C:/Users/User/CLionProjects/Images/heart.png");
    sf::Sprite heal;
    heal.setTexture(heal_texture);

    sf::Texture gem_texture;
    gem_texture.loadFromFile("C:/Users/User/CLionProjects/Images/gem.png");
    sf::Sprite gem;
    gem.setTexture(gem_texture);

    sf::Texture exit_texture;
    exit_texture.loadFromFile("C:/Users/User/CLionProjects/Images/exit.png");
    sf::Sprite exit;
    exit.setTexture(exit_texture);

    sf::Texture trap_texture;
    trap_texture.loadFromFile("C:/Users/User/CLionProjects/Images/trap.png");
    sf::Sprite trap;
    trap.setTexture(trap_texture);

    sf::Texture weapon_texture;
    weapon_texture.loadFromFile("C:/Users/User/CLionProjects/Images/weapon.png");
    sf::Sprite weapon;
    weapon.setTexture(weapon_texture);

    sf::Texture upgrader_texture;
    upgrader_texture.loadFromFile("C:/Users/User/CLionProjects/Images/upgrader.png");
    sf::Sprite upgrader;
    upgrader.setTexture(upgrader_texture);

    sf::Texture enemy_texture;
    enemy_texture.loadFromFile("C:/Users/User/CLionProjects/Images/enemy.png");
    sf::Sprite enemy;
    enemy.setTexture(enemy_texture);

    for (size_t i = 0; i < field->get_field_size_y(); i++) {
        for (size_t j = 0; j < field->get_field_size_x(); j++) {
            if(cellDraw->is_cell_wall(field->get_field_address()[i][j].get_event())){
                wall.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(wall);
            }
            if(field->get_field_address()[i][j].cell_empty()){
                none.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(none);
            }
            if(cellDraw->is_cell_heal(field->get_field_address()[i][j].get_event())){
                heal.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(heal);
            }
            if(cellDraw->is_cell_gem(field->get_field_address()[i][j].get_event())){
                gem.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(gem);
            }
            if(cellDraw->is_cell_exit(field->get_field_address()[i][j].get_event())){
                exit.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(exit);
            }
            if(cellDraw->is_cell_trap(field->get_field_address()[i][j].get_event())){
                trap.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(trap);
            }
            if(cellDraw->is_cell_weapon(field->get_field_address()[i][j].get_event())){
                weapon.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(weapon);
            }
            if(cellDraw->is_cell_upgrader(field->get_field_address()[i][j].get_event())){
                upgrader.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(upgrader);
            }
            if(cellDraw->is_cell_enemy(field->get_field_address()[i][j].get_event())){
                enemy.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(enemy);
            }
            if(field->get_field_address()[i][j].get_pl_pos()){
                player.setPosition(float(j*size_of_cell), float (i*size_of_cell));
                window.draw(player);
            }
        }
    }
}