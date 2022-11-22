#include "Enemy.h"
#include "../../Control/Controller.h"

void Enemy::make_event(Player *player, Field *field, Cell *cell){
    if(player->get_lvl() < 3){
        player->decrease_hp();
        std::cout << "To defeat your enemy you must get lvl 3. Current lvl: "
        << player->get_lvl() << "\n" << "Current HP: " << player->get_hp() << "\n\n";
        if(player->get_hp() == 0) std::cout << "You're dead" << "\n\n";
    }
    else if(player->get_lvl() >= 3 && player->get_damage() < REQUIRED_DAMAGE){
        player->decrease_hp();
        std::cout << "Not enough damage. Current damage: "
        << player->get_damage() << " ,but required is " << REQUIRED_DAMAGE << "\n"
        << "Current HP: " << player->get_hp() << "\n\n";
        if(player->get_hp() == 0) std::cout << "You're dead" << "\n\n";
    }
    else{
        cell->set_pass(true);
        field->add_exit();
        std::cout << "You've defeated an enemy! Exit is opened" << "\n\n";
    }
}