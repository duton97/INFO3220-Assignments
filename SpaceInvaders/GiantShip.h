#ifndef GIANTSHIP_H
#define GIANTSHIP_H
#include <Ship.h>

namespace si {

    //Subclass of Ship
    class GiantShip : public Ship
    {
        public:
            GiantShip(int x, int y, int size = 4); //Constructor, defaults size to 4, being Giant
            virtual ~GiantShip();

        protected:
            int shipSize; //Size of ship
            int shipHeight = 100; //Height of ship, default to 100
            int shipWidth = 300; //Width of ship, default to 300
    };
}


#endif // GIANTSHIP_H
