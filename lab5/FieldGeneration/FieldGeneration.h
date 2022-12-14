#ifndef OOP_LB2_FIELDGENERATION_H
#define OOP_LB2_FIELDGENERATION_H

#include "../Core/Field.h"
#include "../Core/Player.h"

template<class... Rules>
class Field_Generator {
public:
    Field field_gen(int x, int y);

private:
    template<typename Rule>
    void add(Field& field);
};

template<typename... Rules>
Field Field_Generator<Rules...>::field_gen(int x, int y) {
    Field field(x,y);
    (add<Rules>(field), ...);
    return field;
}

template<typename... Rules>
template<typename Rule>
void Field_Generator<Rules...>::add(Field& field)
{
    Rule rule;
    rule.create(field);
}

#endif