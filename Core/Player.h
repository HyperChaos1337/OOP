#ifndef OOP_LAB1_RM_PLAYER_H
#define OOP_LAB1_RM_PLAYER_H

#define default_health 100
#define default_pts 0
#define default_gems 0
#define default_damage 0

class Player{
private:

    int health, gems, score, damage;
    int position_y, position_x;
    bool is_dead, is_game_won, is_end;

public:

    Player(int x, int y);

    int get_position_x();
    int get_position_y();
    void set_position_x(int x);
    void set_position_y(int y);

    int get_gems();
    void increase_gems_amount();

    int get_score();
    void increase_score();

    int get_health();
    void increase_health();
    void decrease_health();

    void ending(bool end);
    bool get_end();

    void dying(bool dead);
    bool get_death();

    void winning(bool win);
    bool get_win();

    int get_damage();
    void increase_damage();
};

#endif
