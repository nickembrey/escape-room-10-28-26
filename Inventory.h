
// TODO: When it's full, it allocates an array twice as big, copies the items over, and releases the old one with delete[].

#include "Item.h"

class Inventory {
    private:
        Item * items;
        int numberOfItems;
        int arraySize;
    public: 
        bool addItem(Item item);
        bool removeItem(string id);
        bool hasItem(string id);
        Inventory(); // allocate space for 2 items initially
        ~Inventory(); // deallocate the items array
};