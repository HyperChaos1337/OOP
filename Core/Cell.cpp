#include "Cell.h"

Cell::Cell(){
    event = new Empty;
    is_player_cell = false;
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
    if (this != &other) std::swap(event, other.event);
    return *this;
}

void Cell::set_pl_pos(bool place){
    this->is_player_cell = place;
}
bool Cell::get_pl_pos(){
    return is_player_cell;
}

void Cell::set_event(Event *cur_event){
    this->event = cur_event;
}
Event* Cell::get_event(){
    return event;
}
Empty* Cell::cell_empty(){
    Empty* new_event = dynamic_cast<Empty*>(event);
    return new_event;
}

void Cell::set_pass(bool pass){
    this->is_passable = pass;
}
bool Cell::is_pass(){
    return is_passable;
}