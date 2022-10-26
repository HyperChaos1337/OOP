#include "Field.h"


typedef std::vector<std::vector<Cell>> cell_matrix;

Field::Field(){
    this->field_size_x = default_x;
    this->field_size_y = default_y;
    storage = new EventStorage;
}

Field::Field(int field_size_x, int field_size_y){
    if(field_size_x < default_x || field_size_y < default_y){
        std::cout << "Screen resolution must be 1280x1024 or higher. Setting to default..." << std::endl;
        this->field_size_x = default_x;
        this->field_size_y = default_y;
    }
    else{
        this->field_size_x = field_size_x;
        this->field_size_y = field_size_y;
    }
    storage = new EventStorage;
}
Field::Field(const Field &other){
    this->field_size_x = other.field_size_x;
    this->field_size_y = other.field_size_y;
    for (size_t i = 0; i < field_size_y; i++) {
        field.push_back(other.field[i]);
    }
}
Field& Field::operator=(const Field &other){
    if(this!=&other){
        field.clear();
        this->field_size_x = other.field_size_x;
        this->field_size_y = other.field_size_y;

        for (size_t i = 0; i < field_size_y; i++) {
            field.push_back(other.field[i]);
        }
    }
    return *this;
}

Field::Field(Field&& other){
    std::swap(field_size_x, other.field_size_x);
    std::swap(field_size_y, other.field_size_y);
    std::swap(field, other.field);
}

Field& Field::operator=(Field&& other){
    if(this!=&other){
        std::swap(field_size_x, other.field_size_x);
        std::swap(field_size_y, other.field_size_y);
        std::swap(field, other.field);
    }
    return *this;
}


void Field::create_field() {
    for (size_t i = 0; i < field_size_y; i++) {
        field.push_back(std::vector<Cell>());
        for (size_t j = 0; j < field_size_x; j++) {
            field.back().emplace_back();
        }
    }
}

int Field::get_field_size_x() {
    return field_size_x;
}

int Field::get_field_size_y(){
    return field_size_y;
}

cell_matrix& Field::get_field_link(){
    return field;
}

void Field::clear_field(){
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            field[i][j].set_event(storage->get_empty());
        }
    }
    field[field_size_y/2][field_size_x/2].set_player_pos(true);
    for(int i = 0; i < field_size_x * field_size_y / 6; i++) add_wall();

    add_enemy();
    add_detonator();
    add_trap();
    add_heal();

}

int Field::get_random_empty_cell(){
    int empty_cell_count = 0;
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            if(field[i][j].empty_cell() && !field[i][j].player_pos()){
                empty_cell_count++;
            }
        }
    }
    int target_empty_cell_index = rand() % empty_cell_count;
    int empty_cell_index = 0;
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            if(field[i][j].empty_cell() && !field[i][j].player_pos()){
                if(empty_cell_index == target_empty_cell_index){
                    return i * field_size_x + j;
                }
                empty_cell_index++;
            }
        }
    }
    return -1;
}

void Field::add_detonator(){
    int detonator_position = get_random_empty_cell();
    if(detonator_position != -1)
        field[detonator_position / field_size_x][detonator_position % field_size_x].set_event(storage->get_earthquake());
}
void Field::add_exit(){
    int exit_position = get_random_empty_cell();
    if(exit_position != -1)
        field[exit_position / field_size_x][exit_position % field_size_y].set_event(storage->get_exit());
}
void Field::add_enemy(){
    int enemy_position = get_random_empty_cell();
    if(enemy_position != -1)
        field[enemy_position / field_size_x][enemy_position % field_size_x].set_event(storage->get_enemy());
}

void Field::add_gem(){
    int gem_position = get_random_empty_cell();
    if(gem_position != -1)
        field[gem_position / field_size_x][gem_position % field_size_x].set_event(storage->get_getting_gem());
}
void Field::add_heal(){
    int heal_position = get_random_empty_cell();
    if(heal_position != -1)
        field[heal_position / field_size_x][heal_position % field_size_x].set_event(storage->get_heal());
}
void Field::add_trap(){
    int trap_position = get_random_empty_cell();
    if(trap_position != -1)
        field[trap_position / field_size_x][trap_position % field_size_x].set_event(storage->get_trap());
}
void Field::add_wall(){
    int wall_position = get_random_empty_cell();
    if(wall_position != -1)
        field[wall_position / field_size_x][wall_position % field_size_x].set_event(storage->get_wall());
}
