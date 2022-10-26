#ifndef OOP_LAB1_RM_FIELD_H
#define OOP_LAB1_RM_FIELD_H

#define default_x 40
#define default_y 32

#include <iostream>
#include <vector>
#include "Cell.h"

#include "C:\Users\User\CLionProjects\OOP\Events\CellEvent\EventStorage.h"

typedef std::vector<std::vector<Cell>> cell_matrix;

class Field{
private:
    int field_size_x;
    int field_size_y;
    cell_matrix field;
    EventStorage* storage;
public:
    Field();
    Field(int field_size_x, int field_size_y);
    Field(const Field &other);
    Field& operator=(const Field &other);
    Field(Field&& other);
    Field& operator=(Field&& other);

    void create_field();
    int get_field_size_x();
    int get_field_size_y();
    cell_matrix &get_field_link();
    void clear_field();
    int get_random_empty_cell();

    void add_detonator();
    void add_enemy();
    void add_exit();

    void add_wall();
    void add_trap();
    void add_heal();
    void add_gem();

};

#endif
