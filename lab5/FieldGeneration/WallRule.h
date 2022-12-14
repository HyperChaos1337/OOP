#ifndef OOP_LB2_WALLRULE_H
#define OOP_LB2_WALLRULE_H

#include "../Core/Field.h"

template<size_t count>
class Rule_Wall {
public:
    void create(Field& field);
};

template<size_t count>
void Rule_Wall<count>::create(Field& field)
{
    for (int k = 0; k < count; k++) {
        field.add_wall();
    }
}

#endif