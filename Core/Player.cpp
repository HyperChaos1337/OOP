#include "Player.h"

Player::Player(int x, int y){
    position_x = x;
    position_y = y;
}

int Player::get_position_x(){
    return position_x;
}
int Player::get_position_y(){
    return position_y;
}
void Player::set_position_x(int x){
    position_x = x;
}
void Player::set_position_y(int y){
    position_y = y;
}