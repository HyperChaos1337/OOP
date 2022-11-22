#include "StatusLog.h"

std::string StatusLog::name(){
    if(!message.empty()) return message;
    return "";
}

void StatusLog::update(){
    message = my_message->get_info(player);
}

void StatusLog::clear(){
    this->message = "";
}

std::string StatusLog::msg(){
    return this->message;
}