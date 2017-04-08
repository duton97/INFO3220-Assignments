#ifndef LARGESHIP_H
#define LARGESHIP_H
#include <Ship.h>

namespace si {

    //Subclass of Ship
    class LargeShip : public Ship
    {
        public:
            LargeShip(int x, int y, int size = 3); //Constructor of subclass, defaults size to 3, being large
            virtual ~LargeShip();

        protected:
            int shipSize; //Size of ship
            int shipHeight = 240; //Height of ship
            int shipWidth = 80; //Width if ship
    };
}


#endif // LARGESHIP_H
