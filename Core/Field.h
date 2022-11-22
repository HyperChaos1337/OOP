#ifndef OOP_LB2_FIELD_H
#define OOP_LB2_FIELD_H

#include "Cell.h"
#include "C:\Users\User\CLionProjects\OOP\Event\EventStorage.h"
#include <iostream>
#include <vector>

#define default_x 32
#define default_y 24

typedef std::vector<std::vector<Cell>> matrix;

class Field{
private:
    int size_x, size_y;
    matrix game_field;
    EventStorage* storage;
public:
    Field();
    Field(int size_x, int size_y);

    Field(const Field &other);
    Field& operator=(const Field &other);

    Field(Field&& other);
    Field& operator=(Field&& other);

    void create_field();
    void clear_field();

    int get_field_size_x();
    int get_field_size_y();

    matrix &get_field_address();

    int get_random_empty_cell();

    void add_wall();
    void add_heal();
    void add_gem();
    void add_exit();
    void add_trap();
    void add_weapon();
    void add_enemy();
    void add_upgrader();
};

#endif