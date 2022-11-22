#ifndef OOP_LB2_LOGGER_H
#define OOP_LB2_LOGGER_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>
#include <vector>

#include "LogLevel.h"
#include "ErrorLog.h"
#include "ObjectLog.h"
#include "StatusLog.h"

#include "FileLog.h"
#include "ConsoleLog.h"
#include "Log.h"

class Logger{
private:
    std::vector<LogLevel*> logLevels;
    std::vector<Log*> logs;
public:
    void add_log(Log* L);
    void add_lvl(LogLevel* LL);
    void out();
};

#endif