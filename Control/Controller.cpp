#include "Controller.h"

Controller::Controller(Player* player, Field* field){
    this->player = player;
    this->field = field;
}
int Controller::check_next_cell(int dir){
    int future_object_type = player_cell;
    int player_x_copy = player->get_position_x();
    int player_y_copy = player->get_position_y();
    switch (dir) {
        case(up_dir):
            player_y_copy--;
            if (player_y_copy < 0) player_y_copy = field->get_field_size_y()-1;
            future_object_type = field->get_field_address()[player_y_copy][player_x_copy].get_type();
            break;
        case(right_dir):
            player_x_copy++;
            if (player_x_copy > field->get_field_size_x()-1) player_x_copy = 0;
            future_object_type = field->get_field_address()[player_y_copy][player_x_copy].get_type();
            break;
        case(down_dir):
            player_y_copy++;
            if (player_y_copy > field->get_field_size_y()-1) player_y_copy = 0;
            future_object_type = field->get_field_address()[player_y_copy][player_x_copy].get_type();
            break;
        case(left_dir):
            player_x_copy--;
            if (player_x_copy < 0) player_x_copy = field->get_field_size_x()-1;
            future_object_type = field->get_field_address()[player_y_copy][player_x_copy].get_type();
            break;
    }
    return future_object_type;
}

void Controller::move(int dir){
    field->get_field_address()[player->get_position_y()][player->get_position_x()].set_type(empty_cell);
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
    }
    field->get_field_address()[player->get_position_y()][player->get_position_x()].set_type(player_cell);
}