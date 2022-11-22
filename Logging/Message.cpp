#include "Message.h"

std::string Message::get_pl(Player *player){

    std::string pl_pref = "[Player]:";

    std::string hp = std::to_string(player->get_hp());
    std::string gems = std::to_string(player->get_gem());
    std::string dmg = std::to_string(player->get_damage());
    std::string experience = std::to_string(player->get_exp());
    std::string level = std::to_string(player->get_lvl());

    std::string pos_x = std::to_string(player->get_position_x());
    std::string pos_y = std::to_string(player->get_position_y());

    std::string s1 = "HP: ";
    std::string s2 = "Damage: ";
    std::string s3 = "LVL: ";
    std::string s4 = "Exp: ";
    std::string s5 = "Gems: ";

    std::string s6 = "POS_X: ";
    std::string s7 = "POS_Y: ";

    return pl_pref + " " + s1 + hp + " " + s2 + dmg + " " + s3 + level + " "
    + s4 + experience + " " + s5 + gems + " " + s6 + pos_x +" "
    + s7 + pos_y + " ";

}

std::string Message::get_event(Field *field, Player *player){
    std::string event_pref = "[Event]:";
    if(player->get_trigger()){
        player->set_trigger(false);
        return event_pref + " " + "Event has been triggered!";
    } else return "";
}

std::string Message::get_error(Field *field, Player *player){
    std::string err_pref = "[Error]:";
    if(field->get_field_address()[player->get_position_y()][player->get_position_x()].is_pass()){
        return err_pref + " " + "Trying to walk through impassable cell... Try another way...";
    } else return "";
}

std::string Message::get_info(Player *player){
    std::string status_pref = "[Status]:";
    if(player->get_death()) return status_pref + " " + "Game over. You've lost";
    if(player->get_win()) return status_pref + " " + "Game over. You've won";
    if(!player->get_win() && !player->get_death() and start){
        start = false;
        return status_pref + " " + "Starting...";
    }
    return "";
}
