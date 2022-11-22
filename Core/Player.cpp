#include "Player.h"

Player::Player(int x, int y){
    health = start_hp;
    gems = 0;
    damage = 0;
    exp = 0;
    lvl = 1;
    upgraders = 0;
    win = false;
    dead = false;
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

void Player::set_hp(int hp){
    this->health = hp;
    if(health == 0) set_death(true);
}
int Player::get_hp(){
    return health;
}
void Player::increase_hp(){
    if(health >= max_hp - 35) health = max_hp;
    else health += 35;
}
void Player::decrease_hp() {
    if (health <= 60) {
        health = 0;
        set_death(true);
    }
    else health -= 60;
}

void Player::set_gem(int gem) {
    this->gems = gem;
}
int Player::get_gem(){
    return gems;
}
void Player::increase_gem(){
    gems++;
}

void Player::set_win(bool winning){
    this->win = winning;
}
bool Player::get_win(){
    return win;
}

void Player::set_death(bool dying){
    this->dead = dying;
}
bool Player::get_death(){
    return dead;
}

void Player::set_damage(int dmg){
    this->damage = dmg;
}
int Player::get_damage(){
    return damage;
}
void Player::increase_damage(){
    damage += 15;
}

void Player::set_exp(int xp){
    this->exp = xp;
}
int Player::get_exp(){
    return exp;
}
void Player::increase_exp(){
    if(lvl != MAX_LVL){
        exp += XP_GIVEN;
        std::cout << "Exp: " <<get_exp() << "\n" << "Exp to next lvl: " << XP_TO_NEXT_LVL - get_exp() << "\n";
        if (get_exp() == XP_TO_NEXT_LVL) {
            increase_lvl();
            std::cout << "Level up! Current level: " << lvl << "\n";
            exp = 0;
        }
    }
    else if(lvl == MAX_LVL) std::cout << "Maximum lvl reached" << "\n\n";
}

void Player::set_lvl(int level){
    this->lvl = level;
}
int Player::get_lvl(){
    return lvl;
}
void Player::increase_lvl(){
    lvl++;
}

void Player::set_upgrade(int upgrade){
    this->upgraders = upgrade;
}
int Player::get_upgrade(){
    return upgraders;
}
void Player::increase_upgrade(){
    upgraders++;
}

bool Player::get_move(){
    return move;
}
void Player::set_move(bool is_move){
    this->move = is_move;
}

bool Player::get_trigger(){
    return trigger;
}
void Player::set_trigger(bool is_trigger){
    this->trigger = is_trigger;
}

bool Player::get_try_pass(){
    return pass_try;
}
void Player::set_try_pass(bool is_pass){
    this->pass_try = is_pass;
}