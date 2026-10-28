#include "Inventory.h"

bool Inventory::addItem(Item item) {
    // check if the array is big enough
    if(this->numberOfItems >= this->arraySize) {
        // 1. create a new array that's twice as big
        // 2. copy over the existing array
        // 3. delete the old array
    }
    this->items[this->numberOfItems] = item;
    this->numberOfItems += 1;
}
bool Inventory::removeItem(string id) {
    this->numberOfItems -= 1;
}
bool Inventory::hasItem(string id) {

}

Inventory::Inventory() {
    this->arraySize = 2;
    this->numberOfItems = 0;
    this->items = new Item[arraySize];
}

Inventory::~Inventory() {
    delete[] this->items;
}