#ifndef OOP_LB2_PLAYER_H
#define OOP_LB2_PLAYER_H

#include <iostream>

#define start_hp 100
#define max_hp 200
#define XP_TO_NEXT_LVL 1000
#define MAX_LVL 4
#define XP_GIVEN 125
#define REQUIRED_DAMAGE 150
#define WEAPON_DAMAGE 60

class Player{
private:
    int health, gems, damage, exp, lvl, upgraders;
    int position_y, position_x;
    bool win, dead;
    bool trigger = false, move = false, pass_try = false;
public:

    Player(int x, int y);

    int get_position_x();
    int get_position_y();
    void set_position_x(int x);
    void set_position_y(int y);

    void set_hp(int hp);
    void increase_hp();
    void decrease_hp();
    int get_hp();

    void set_gem(int gem);
    int get_gem();
    void increase_gem();

    void set_win(bool winning);
    bool get_win();

    void set_death(bool dying);
    bool get_death();

    void set_damage(int dmg);
    int get_damage();
    void increase_damage();

    void set_exp(int xp);
    int get_exp();
    void increase_exp();

    void set_lvl(int level);
    int get_lvl();
    void increase_lvl();

    void set_upgrade(int upgrade);
    int get_upgrade();
    void increase_upgrade();

    bool get_move();
    void set_move(bool is_move);

    bool get_trigger();
    void set_trigger(bool is_trigger);

    bool get_try_pass();
    void set_try_pass(bool is_pass);
};

#endif