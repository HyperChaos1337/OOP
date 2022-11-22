#ifndef OOP_LB2_OBSERVER_H
#define OOP_LB2_OBSERVER_H

#include <vector>

#include "../Logging/Logger.h"
#include "../Logging/ErrorLog.h"
#include "../Logging/ObjectLog.h"
#include "../Logging/Message.h"
#include "../Logging/LogLevel.h"

#include "../Core/Field.h"
#include "../Core/Player.h"


class Observer{
private:
    std::vector <LogLevel*> levels;
    Player* player;
    Logger* logger;
    void notify();
public:
    Observer(Player* player, Logger* logger){
        this->player = player;
        this->logger = logger;
    }
    void add_lvl(LogLevel* level);
    void check_game();
    void check_status();
};

#endif