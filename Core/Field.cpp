#include "Field.h"

typedef std::vector<std::vector<Cell>> matrix;

Field::Field(){
    this->size_x = default_x;
    this->size_y = default_y;
}

Field::Field(int size_x, int size_y) {
    if((size_x < default_x) || (size_y < default_y)){
        std::cout << "Height must be 1024 and width must be 768 or greater. Setting to default..." << std::endl;
        this->size_x = default_x;
        this->size_y = default_y;
    }else{
        this->size_x = size_x;
        this->size_y = size_y;
    }

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
            game_field.back().emplace_back(empty_cell);
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
            game_field[i][j].set_type(empty_cell);
        }
    }
    game_field[size_y/2][size_x/2].set_type(player_cell);

    for(int i = 0; i < size_x * size_y / 8; i++){
        add_wall();
    }
}

int Field::get_random_empty_cell(){
    int empty_cell_count = 0;
    for(int i = 0; i < size_y; i++){
        for(int j = 0; j < size_x; j++){
            if(game_field[i][j].get_type() == empty_cell){
                empty_cell_count++;
            }
        }
    }
    int target_empty_cell_index = rand() % empty_cell_count;
    int empty_cell_index = 0;
    for(int i = 0; i < size_y; i++){
        for(int j = 0; j < size_x; j++){
            if(game_field[i][j].get_type() == empty_cell){
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
        game_field[wall_position / size_x][wall_position % size_x].set_type(wall_cell);
    }

}