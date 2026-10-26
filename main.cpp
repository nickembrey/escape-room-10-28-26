#include <iostream>
#include "Room.h"

using namespace std;

int main() {
    // TODO: When the program starts, it asks the user how big the map should be: a number of rows and a number of columns.
    
    // w moves up, a left, s down, and d right.

    Room room(5,10);

    room.draw();

    // bool isRunning = true;

    // while(isRunning) {

    //     // take user input
    //     // draw

    //     // do game things
    // }
    
    return 0;
}