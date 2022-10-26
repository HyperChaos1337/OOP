#include "CommandReader.h"

void Reader::press(){
    if(_kbhit){
        switch (_getch()) {
            case 'w':
                PL_DIR_UP;
                break;
            case 'a':
                PL_DIR_LEFT;
                break;
            case 's':
                PL_DIR_DOWN;
                break;
            case 'd':
                PL_DIR_RIGHT;
                break;
        }
        int x = next_x_coord(dir), y = next_y_coord(dir);
        event(x, y, dir);
    }
}