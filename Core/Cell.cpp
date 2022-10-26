#include "Cell.h"

Cell::Cell(){
    event = new Empty;
    player_cell = false;
}
Cell::Cell(const Cell &other){
    this->event = other.event;
}
Cell &Cell::operator=(const Cell &other){
    if(this != &other) this->event = other.event;
    return *this;
}

Cell::Cell(Cell &&other){
    std::swap(event, other.event);
}
Cell &Cell::operator=(Cell &&other){
    if(this != &other) std::swap(event, other.event);
    return *this;
}

bool Cell::player_pos(){
    return player_cell;
}
void Cell::set_event(Event *cur_event){
    this->event = cur_event;
}
void Cell::set_player_pos(bool place){
    this->player_cell = place;
}

Event* Cell::cell_event(){
    return event;
}

Empty* Cell::empty_cell(){
    Empty* new_event = dynamic_cast<Empty*>(event);
    return new_event;
}