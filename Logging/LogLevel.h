#ifndef OOP_LB2_LOGLEVEL_H
#define OOP_LB2_LOGLEVEL_H

#include <iostream>

#include "Message.h"

#include "../Core/Player.h"
#include "../Core/Field.h"

class LogLevel{
public:

    virtual void update() = 0;
    virtual void clear() = 0;
    virtual std::string msg() = 0;
    virtual std::string name() = 0;

};

#endif