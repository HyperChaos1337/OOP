#ifndef OOP_LB2_STATUSLOG_H
#define OOP_LB2_STATUSLOG_H

#include "LogLevel.h"

class StatusLog: public LogLevel{
private:
    std::string message;
    Message* my_message;
    Field* field;
    Player* player;
public:
    StatusLog(Field* field, Player* player){
        this->field = field;
        this->player = player;
        this->my_message = new Message;
    }
    void update() override;
    void clear() override;
    std::string msg() override;
    std::string name() override;
};

#endif