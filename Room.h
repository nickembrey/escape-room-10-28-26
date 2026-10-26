

#ifndef ROOM_H
#define ROOM_H



// The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too.

// The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place.

// The @ never moves onto a #: if the next space is a wall, it stays where it is.

// A Room class holds the map. The map's size isn't known until the program runs, so the Room allocates the map with new and releases it in its destructor.

// The Room can draw itself, with the @ at the player's position.

class Room {
    private:
        // Player * player;


        // What does a map look like?
        int width;
        int height;
        char ** map;

        // 0x576873ABEF -> [#,#,#,#,#,#,#,#,#,#,#,#]
        // 0x75873ABCDF -> [#, , , ,@, ,#, ,#, , ,#]
        // 0x758534BCDA -> [#, , , ,@, ,#, ,#, , ,#]

        // 0x3525243893 -> [0x576873ABEF, 0x75873ABCDF, 0x758534BCDA]

        // ######################
        // #                    #
        // #              #     #
        // #      #             #
        // #                    #
        // #           #        #
        // #                    #
        // ######################
    
        // TODO: what type should the map be? probably some kind of array of type char, but we'll see

    public:
        Room(int x, int y); // allocate the map
        ~Room(); // deallocate the map
        void draw();
};

#endif