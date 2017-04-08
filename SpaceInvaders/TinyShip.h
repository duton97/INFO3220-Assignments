#ifndef TINYSHIP_H
#define TINYSHIP_H
#include <Ship.h>

namespace si {
    //Subclass of ship
    class TinyShip : public Ship
    {
        public:
            TinyShip(int x, int y, int size = 1); //Constructor, defaults size to 1, being tiny
            virtual ~TinyShip();

        protected:
            int shipSize; //Size of ship
            int shipHeight = 30; //height of ship
            int shipWidth = 90; //width of ship

    };

}


#endif // TINYSHIP_H
