#include "Field.h"

Field::Field(){
    this->size_x = default_x;
    this->size_y = default_y;
    storage = new EventStorage;
}

Field::Field(int size_x, int size_y) {
    if((size_x <= 0) || (size_y <= 0)){
        std::cout << "Sizes must be a positive number. Setting to default..." << "\n\n";
        this->size_x = default_x;
        this->size_y = default_y;
    }else{
        this->size_x = size_x;
        this->size_y = size_y;
    }
    create_field();
    clear_field();
    storage = new EventStorage;
}
Field::Field(const Field &other){
    this->size_x = other.size_x;
    this->size_y = other.size_y;
    for (size_t i = 0; i < size_y; i++) {
        game_field.push_back(other.game_field[i]);
    }
}
Field& Field::operator=(const Field &other){
    if(this!=&other){
        game_field.clear();
        this->size_x = other.size_x;
        this->size_y = other.size_y;

        for (size_t i = 0; i < size_y; i++) {
            game_field.push_back(other.game_field[i]);
        }
    }
    return *this;
}

Field::Field(Field&& other){
    std::swap(size_x, other.size_x);
    std::swap(size_x, other.size_x);
    std::swap(size_x, other.size_x);
}

Field& Field::operator=(Field&& other){
    if(this!=&other){
        std::swap(size_x, other.size_x);
        std::swap(size_y, other.size_y);
        std::swap(game_field, other.game_field);
    }
    return *this;
}


void Field::create_field() {
    for (size_t i = 0; i < size_y; i++) {
        game_field.push_back(std::vector<Cell>());
        for (size_t j = 0; j < size_x; j++) {
            game_field.back().emplace_back();
        }
    }
}

int Field::get_field_size_x() {
    return size_x;
}

int Field::get_field_size_y(){
    return size_y;
}

matrix& Field::get_field_address(){
    return game_field;
}

void Field::clear_field(){
    for(int i = 0; i < size_y; i++){
        for(int j = 0; j < size_x; j++){
            game_field[i][j].set_event(nullptr);
        }
    }
    //game_field[size_y/2][size_x/2].set_pl_pos(true);

    //add_wall();
    //for(int i = 0; i < size_x*size_y / 16; i++) add_trap();

    //add_upgrader();
    //add_heal();
    //add_gem();
    //add_weapon();
    //add_enemy();
}

int Field::get_random_empty_cell(){
    int empty_cell_count = 0;
    for(int i = 0; i < size_y; i++){
        for(int j = 0; j < size_x; j++){
            if(game_field[i][j].get_event() == nullptr && !game_field[i][j].get_pl_pos()){
                empty_cell_count++;
            }
        }
    }
    int target_empty_cell_index = rand() % empty_cell_count;
    int empty_cell_index = 0;
    for(int i = 0; i < size_y; i++){
        for(int j = 0; j < size_x; j++){
            if(game_field[i][j].get_event() == nullptr && !game_field[i][j].get_pl_pos()){
                if(empty_cell_index == target_empty_cell_index){
                    return i * size_x + j;
                }
                empty_cell_index++;
            }
        }
    }
    return -1;
}

void Field::add_wall(){
    int wall_position = get_random_empty_cell();
    if(wall_position != -1){
        game_field[wall_position / size_x][wall_position % size_x].set_pass(false);
        game_field[wall_position / size_x][wall_position % size_x].set_event(storage->get_wall());
    }
}
void Field::add_heal(){
    int heal_position = get_random_empty_cell();
    if(heal_position != -1)
        game_field[heal_position / size_x][heal_position % size_x].set_event(storage->get_heal());
}
void Field::add_gem(){
    int gem_position = get_random_empty_cell();
    if(gem_position != -1)
        game_field[gem_position / size_x][gem_position % size_x].set_event(storage->get_gem());
}
void Field::add_exit(){
    int exit_position = get_random_empty_cell();
    if(exit_position != -1){
        game_field[exit_position / size_x][exit_position % size_x].set_pass(false);
        game_field[exit_position / size_x][exit_position % size_x].set_event(storage->get_exit());
    }
}
void Field::add_trap(){
    int trap_position = get_random_empty_cell();
    if(trap_position != -1)
        game_field[trap_position / size_x][trap_position % size_x].set_event(storage->get_trap());
}
void Field::add_weapon(){
    int weapon_position = get_random_empty_cell();
    if(weapon_position != -1){
        game_field[weapon_position / size_x][weapon_position % size_x].set_pass(false);
        game_field[weapon_position / size_x][weapon_position % size_x].set_event(storage->get_weapon());
    }
}
void Field::add_enemy(){
    int enemy_position = get_random_empty_cell();
    if(enemy_position != -1){
        game_field[enemy_position / size_x][enemy_position % size_x].set_pass(false);
        game_field[enemy_position / size_x][enemy_position % size_x].set_event(storage->get_enemy());
    }
}
void Field::add_upgrader(){
    int upgrader_position = get_random_empty_cell();
    if(upgrader_position != -1){
        game_field[upgrader_position / size_x][upgrader_position % size_x].set_pass(false);
        game_field[upgrader_position / size_x][upgrader_position % size_x].set_event(storage->get_upgrader());
    }
}