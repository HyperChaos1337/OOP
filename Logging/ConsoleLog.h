#ifndef OOP_LB2_CONSOLELOG_H
#define OOP_LB2_CONSOLELOG_H

#include "Log.h"

class ConsoleLog: public Log{
public:
    void print(std::string txt)override;
};

#endif