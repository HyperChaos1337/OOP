#ifndef OOP_LB1_CELL_H
#define OOP_LB1_CELL_H

#define size_of_cell 32
#define player_cell 1
#define empty_cell 0
#define wall_cell (-1)

class Cell{
private:
    int cell_type;
public:
    Cell();
    Cell(int type_number);
    void set_type(int type_number);
    int get_type();
};
#endif