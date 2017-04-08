#include "TinyShip.h"

namespace si {
    //Calls Ship constructor to construct the subclass
    TinyShip::TinyShip(int x, int y, int size) : Ship(x, y), shipSize(size)
    {

    }

    TinyShip::~TinyShip()
    {

    }

}
