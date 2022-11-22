#ifndef OOP_LB2_ERRORLOG_H
#define OOP_LB2_ERRORLOG_H

#include "LogLevel.h"

class ErrorLog: public LogLevel{
private:
    std::string message;
    Message* my_message;
    Field* field;
    Player* player;
public:
    ErrorLog(Field* field, Player* player, Message* new_message){
        this->field = field;
        this->player = player;
        this->my_message = new_message;
    }
    void update() override;
    void clear() override;
    std::string msg() override;
    std::string name() override;
};

#endif