#include "Controller.h"

controller::controller(Player *player, Field *field){
    this->player = player;
    this->field = field;
}

int controller::next_x_coord(int dir){
    int x_coord = player->get_position_x();
    switch (dir) {
        case PL_DIR_RIGHT:
            x_coord++;
            if(x_coord > field->get_field_size_x()-1) x_coord = 0;
            break;
        case PL_DIR_LEFT:
            x_coord--;
            if(x_coord < 0) x_coord = field->get_field_size_x()-1;
            break;
    }
    return x_coord;
}
int controller::next_y_coord(int dir){
    int y_coord = player->get_position_y();
    switch (dir) {
        case PL_DIR_UP:
            y_coord--;
            if(y_coord < 0) y_coord = field->get_field_size_y()-1;
            break;
        case PL_DIR_DOWN:
            y_coord++;
            if(y_coord > field->get_field_size_y()-1) y_coord = 0;
            break;
        default:
            break;
    }
    return y_coord;
}

void controller::event(int x, int y, int dir){
    if(field->get_field_link()[y][x].cell_event() != nullptr){
        if(field->get_field_link()[y][x].cell_event()->event_react(player, field)){
            field->get_field_link()[y][x].set_event(nullptr);
            move(dir);
        }
    }
    else move(dir);
    if(player->get_health() <= 0 || player->get_death() || player->get_win()){
        player->winning(true);
        std::cout << "The end..." << std::endl;
    }
}
void controller::move(int dir){
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_player_pos(false);
    switch(dir) {
        case PL_DIR_UP:
            player->set_position_y(player->get_position_y()-1);
            if(player->get_position_y() < 0) player->set_position_y(field->get_field_size_y()-1);
            break;
        case PL_DIR_DOWN:
            player->set_position_y(player->get_position_y()+1);
            if(player->get_position_y() > field->get_field_size_y()-1) player->set_position_y(0);
            break;
        case PL_DIR_LEFT:
            player->set_position_x(player->get_position_x()-1);
            if(player->get_position_x() < 0) player->set_position_x(field->get_field_size_x()-1);
            break;
        case PL_DIR_RIGHT:
            player->set_position_x(player->get_position_x()+1);
            if(player->get_position_x() > field->get_field_size_x()-1) player->set_position_x(0);
            break;
        default:
            break;
    }
}