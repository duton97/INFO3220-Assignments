#include "LargeShip.h"

namespace si {

    //Calls Ship constructor to construct the subclass
    LargeShip::LargeShip(int x, int y, int size) : Ship(x, y), shipSize(size)
    {

    }

    LargeShip::~LargeShip()
    {

    }
}

