#include "GiantShip.h"


namespace si {

    //Calls Ship constructor to construct the subclass
    GiantShip::GiantShip(int x, int y, int size) : Ship(x, y), shipSize(size)
    {

    }

    GiantShip::~GiantShip()
    {

    }
}

