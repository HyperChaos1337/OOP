#include "FileLog.h"

FileLog::FileLog(){
    file = std::ofstream(path, std::ios_base::out | std::ios_base::app);
}

void FileLog::print(std::string txt){
    if(file.is_open()){
        file << txt << std::endl;
    }
}

FileLog::~FileLog(){
    if(file.is_open()) file.close();
}

