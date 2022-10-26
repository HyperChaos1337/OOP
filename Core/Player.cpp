#include "Player.h"

Player::Player(int x, int y){
    position_x = x;
    position_y = y;
    health = default_health;
    gems = default_gems;
    score = default_pts;
    damage = default_damage;
    is_game_won = false, is_dead = false, is_end = false;
}
//Getting player coords
int Player::get_position_x(){
    return position_x;
}
int Player::get_position_y(){
    return position_y;
}
//Setting player coords
void Player::set_position_x(int x){
    position_x = x;
}
void Player::set_position_y(int y){
    position_y = y;
}
//Gems amount
int Player::get_gems(){
    return gems;
}
void Player::increase_gems_amount(){
    gems++;
}
//Player's health
int Player::get_health(){
    return health;
}
void Player::increase_health(){
    if(health >= 90) health = 100;
    else health += 10;
}
void Player::decrease_health(){
    health -= 35;
    if(health <= 35){
        health = 0;
        this->get_death();
    }
}
//Points
int Player::get_score(){
    return score;
}
void Player::increase_score(){
    score += 100;
}

void Player::ending(bool end){
    this->is_end = end;
}
bool Player::get_end(){
    return is_end;
}
void Player::dying(bool dead){
    dead = true;
    this->is_dead = dead;
}
bool Player::get_death(){
    return is_dead;
}
void Player::winning(bool win){
    this->is_game_won = win;
}
bool Player::get_win(){
    return is_game_won;
}

int Player::get_damage(){
    return damage;
}
void Player::increase_damage(){
    damage += 100;
}