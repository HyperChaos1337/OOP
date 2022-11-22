#include "Controller.h"

Controller::Controller(Player* player, Field* field){
    this->player = player;
    this->field = field;
}

int Controller::next_x_coord(int dir){
    int x_coord = player->get_position_x();
    switch(dir){
        case left_dir:
            x_coord--;
            if(x_coord < 0) x_coord = field->get_field_size_x()-1;
            break;
        case right_dir:
            x_coord++;
            if(x_coord > field->get_field_size_x()-1) x_coord = 0;
            break;
        default:
            break;
    }
    return x_coord;
}
int Controller::next_y_coord(int dir){
    int y_coord = player->get_position_y();
    switch(dir){
        case up_dir:
            y_coord--;
            if(y_coord < 0) y_coord = field->get_field_size_y()-1;
            break;
        case down_dir:
            y_coord++;
            if(y_coord > field->get_field_size_y()-1) y_coord = 0;
            break;
    }
    return y_coord;
}

void Controller::make_event(int x, int y, int dir){
    if(field->get_field_address()[y][x].get_event() != nullptr){
        field->get_field_address()[y][x].get_event()->make_event(player, field, &field->get_field_address()[y][x]);
        player->set_trigger(true);
        if(field->get_field_address()[y][x].is_pass()){
            field->get_field_address()[y][x].set_event(nullptr);
            delete field->get_field_address()[y][x].get_event();
            move(dir);
            player->set_move(true);
        }
        else{
            player->set_move(true);
            player->set_try_pass(true);

        }
    }
    else{
        move(dir);
        player->set_move(true);
    }
}

void Controller::move(int dir){
    field->get_field_address()[player->get_position_y()][player->get_position_x()].set_pl_pos(false);
    switch (dir) {
        case(up_dir):
            player->set_position_y(player->get_position_y()-1);
            if (player->get_position_y() < 0) player->set_position_y(field->get_field_size_y()-1);
            break;
        case(right_dir):
            player->set_position_x(player->get_position_x()+1);
            if (player->get_position_x() > field->get_field_size_x()-1) player->set_position_x(0);
            break;
        case(down_dir):
            player->set_position_y(player->get_position_y()+1);
            if (player->get_position_y() > field->get_field_size_y()-1) player->set_position_y(0);
            break;
        case(left_dir):
            player->set_position_x(player->get_position_x()-1);
            if (player->get_position_x() < 0) player->set_position_x(field->get_field_size_x()-1);
            break;
        default:
            std::cout << "No movement!!!" << "\n\n";
            break;
    }
    field->get_field_address()[player->get_position_y()][player->get_position_x()].set_pl_pos(true);
}