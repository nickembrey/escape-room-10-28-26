#include "Room.h"

#include <iostream>

using namespace std;

Room::Room(int x, int y) {

    this->width = x;
    this->height = y;

    this->map = new char[x][y];

    for(int outerCounter; outerCounter < y; outerCounter++) {
        // this->map[outerCounter] = new char[x];
        for(int innerCounter; innerCounter < x; innerCounter++) {
            if(outerCounter == 0 || outerCounter == (y - 1) || innerCounter == 0 || innerCounter == (x - 1)) {
                this->map[outerCounter][innerCounter] = '#';
            } else {
                this->map[outerCounter][innerCounter] = ' ';
            }
            
        }
    }




 
}
Room::~Room() {

}
void Room::draw() {
    for(int outerCounter; outerCounter < height; outerCounter++) {
        for(int innerCounter; innerCounter < width; innerCounter++) {
            cout << this->map[outerCounter][innerCounter];
        }
        cout << endl;
    }
}