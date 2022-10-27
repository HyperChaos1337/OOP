#include "Cell.h"

Cell::Cell(){
    cell_type = empty_cell;
}
Cell::Cell(int type_number){
    cell_type = type_number;
}
void Cell::set_type(int type_number){
    cell_type = type_number;
}
int Cell::get_type(){
    return cell_type;
}