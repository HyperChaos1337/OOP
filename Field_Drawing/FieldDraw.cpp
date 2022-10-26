#include "FieldDraw.h"
#include "Apply.h"

Drawfield::Drawfield(Field *field){
    this->field = field;
    this->window_width = field->get_field_size_x()*CELL_SIZE;
    this->window_height = field->get_field_size_y()*CELL_SIZE;
    applier = new Applier;
}
int Drawfield::get_window_width(){
    return window_width;
}
int Drawfield::get_window_height(){
    return window_height;
}

void Drawfield::draw_field(sf::RenderWindow &window){

    sf::Texture detonator_texture;
    detonator_texture.loadFromFile("C:/Users/User/CLionProjects/Images/detonator.png");
    sf::Sprite detonator;
    detonator.setTexture(detonator_texture);

    sf::Texture enemy_texture;
    enemy_texture.loadFromFile("C:/Users/User/CLionProjects/Images/enemy.png");
    sf::Sprite enemy;
    enemy.setTexture(enemy_texture);

    sf::Texture exit_texture;
    exit_texture.loadFromFile("C:/Users/User/CLionProjects/Images/exit.png");
    sf::Sprite exit;
    exit.setTexture(exit_texture);



    sf::Texture none_texture;
    none_texture.loadFromFile("C:/Users/User/CLionProjects/Images/none.png");
    sf::Sprite none;
    none.setTexture(none_texture);

    sf::Texture gem_texture;
    gem_texture.loadFromFile("C:/Users/User/CLionProjects/Images/gem.png");
    sf::Sprite gem;
    gem.setTexture(gem_texture);

    sf::Texture heart_texture;
    heart_texture.loadFromFile("C:/Users/User/CLionProjects/Images/heart.png");
    sf::Sprite heart;
    heart.setTexture(heart_texture);

    sf::Texture trap_texture;
    trap_texture.loadFromFile("C:/Users/User/CLionProjects/Images/trap.png");
    sf::Sprite trap;
    trap.setTexture(trap_texture);

    sf::Texture player_texture;
    player_texture.loadFromFile("C:/Users/User/CLionProjects/Images/player.png");
    sf::Sprite player;
    player.setTexture(player_texture);

    sf::Texture wall_texture;
    wall_texture.loadFromFile("C:/Users/User/CLionProjects/Images/wall.png");
    sf::Sprite wall;
    wall.setTexture(wall_texture);

    sf::Texture weapon_texture;
    weapon_texture.loadFromFile("C:/Users/User/CLionProjects/Images/weapon.png");
    sf::Sprite weapon;
    weapon.setTexture(weapon_texture);

    for (size_t i = 0; i < field->get_field_size_y(); i++) {
        for (size_t j = 0; j < field->get_field_size_x(); j++) {
            if(applier->earthquake(field->get_field_link()[i][j].cell_event())){
                detonator.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(detonator);
            }
            if(applier->enemy(field->get_field_link()[i][j].cell_event())){
                enemy.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(enemy);
            }
            if(applier->exit(field->get_field_link()[i][j].cell_event())){
                exit.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(exit);
            }

            if(field->get_field_link()[i][j].empty_cell()){
                none.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(none);
            }
            if(applier->getting_gem(field->get_field_link()[i][j].cell_event())){
                gem.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(gem);
            }
            if(applier->healing(field->get_field_link()[i][j].cell_event())){
                heart.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(heart);
            }
            if(field->get_field_link()[i][j].player_pos()){
                player.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(player);
            }
            if(applier->entrapping(field->get_field_link()[i][j].cell_event())){
                trap.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(trap);
            }
            if(applier->wall(field->get_field_link()[i][j].cell_event())){
                wall.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(wall);
            }
            if(applier->weapon(field->get_field_link()[i][j].cell_event())){
                weapon.setPosition(float(j*CELL_SIZE), float(i*CELL_SIZE));
                window.draw(weapon);
            }
        }
    }
}