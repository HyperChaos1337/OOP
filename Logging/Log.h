#ifndef OOP_LB2_LOG_H
#define OOP_LB2_LOG_H

#include <iostream>
#include "Message.h"
class Log{
public:
    virtual void print(std::string txt) = 0;
};

#endif