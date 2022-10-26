#include "Apply.h"

Heal* Applier::healing(Event *current_event){
    Heal* event = dynamic_cast<Heal*>(current_event);
    return event;
}
Trap* Applier::entrapping(Event *current_event){
    Trap* event = dynamic_cast<Trap*>(current_event);
    return event;
}

Getting_gem* Applier::getting_gem(Event *current_event){
    Getting_gem* event = dynamic_cast<Getting_gem*>(current_event);
    return event;
}
Wall* Applier::wall(Event *current_event){
    Wall* event = dynamic_cast<Wall*>(current_event);
    return event;
}
Empty* Applier::empty(Event *current_event){
    Empty* event = dynamic_cast<Empty*>(current_event);
    return event;
}
Weapon* Applier::weapon(Event *current_event){
    Weapon* event = dynamic_cast<Weapon*>(current_event);
    return event;
}

Enemy* Applier::enemy(Event *current_event){
    Enemy* event = dynamic_cast<Enemy*>(current_event);
    return event;
}
Earthquake* Applier::earthquake(Event *current_event){
    Earthquake* event = dynamic_cast<Earthquake*>(current_event);
    return event;
}
Exit* Applier::exit(Event *current_event){
    Exit* event = dynamic_cast<Exit*>(current_event);
    return event;
}