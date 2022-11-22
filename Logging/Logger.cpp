#include "Logger.h"

void Logger::add_log(Log *L){
    logs.push_back(L);
}
void Logger::add_lvl(LogLevel *LL){
    logLevels.push_back(LL);
}
void Logger::out(){
    for(auto &j: logLevels){
        for(auto &i: logs){
            if(j->msg() != "") i->print(j->msg());
        }
    }
    for(auto  &j: logLevels) j->clear();
}