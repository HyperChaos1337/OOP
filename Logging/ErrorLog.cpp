#include "ErrorLog.h"

std::string ErrorLog::name(){
    if(!message.empty()) return message;
    return "";
}

void ErrorLog::update(){
    if(player->get_try_pass()) this->message = my_message->get_error(field, player);
    player->set_try_pass(false);
}

void ErrorLog::clear(){
    this->message = "";
}

std::string ErrorLog::msg(){
    return this->message;
}