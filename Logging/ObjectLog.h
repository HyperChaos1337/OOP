#ifndef OOP_LB2_OBJECTLOG_H
#define OOP_LB2_OBJECTLOG_H

#include "LogLevel.h"

class ObjectLog: public LogLevel{
private:
    std::string message;
    Message* my_message;
    Field* field;
    Player* player;
public:
    ObjectLog(Field* field, Player* player){
        this->field = field;
        this->player = player;
        my_message = new Message;
    }
    void update() override;
    void clear() override;
    std::string msg() override;
    std::string name() override;
};

#endif