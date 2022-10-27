#ifndef OOP_LB2_EVENTSTORAGE_H
#define OOP_LB2_EVENTSTORAGE_H

#include "CellEvent/Empty.h"
#include "CellEvent/Wall.h"

class EventStorage{
private:
    Empty* empty;
    Wall* wall;
public:
    EventStorage(){
        this->empty = new Empty;
        this->wall = new Wall;
    }
    Empty* get_empty();
    Wall* get_wall();
};

#endif