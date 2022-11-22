#ifndef OOP_LB2_FILELOG_H
#define OOP_LB2_FILELOG_H

#include "Log.h"
#include <fstream>

class FileLog: public Log{
private:
    std::string path = "./log.txt";
    std::ofstream file;
public:
    FileLog();
    ~FileLog();
    void print(std::string txt)override;
};

#endif