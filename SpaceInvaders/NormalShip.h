#ifndef NORMALSHIP_H
#define NORMALSHIP_H
#include <Ship.h>

namespace si {
    //Subclass of ship
    class NormalShip : public Ship
    {
        public:
            NormalShip(int x, int y, int size = 2); //Constructor, defaults size to 2, being normal
            virtual ~NormalShip();

        protected:
            int shipSize; //Size of ship
            int shipHeight = 120; //height of ship
            int shipWidth = 40; //width of ship

    };
}



#endif // NORMALSHIP_H
