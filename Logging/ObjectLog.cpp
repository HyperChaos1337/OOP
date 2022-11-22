#include "ObjectLog.h"

std::string ObjectLog::name(){
    if(!message.empty()) return message;
    return "";
}

void ObjectLog::update(){
    message = my_message->get_pl(player) + "\n" + my_message->get_event(field, player);
}

void ObjectLog::clear(){
    this->message = "";
}

std::string ObjectLog::msg(){
    return this->message;
}