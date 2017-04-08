#include "NormalShip.h"

namespace si {

    //Calls Ship constructor to construct the subclass
    NormalShip::NormalShip(int x, int y, int size) : Ship(x, y), shipSize(size)
    {
        std::cout << "Normal sized Ship is built" << std::endl;
    }

    NormalShip::~NormalShip()
    {
        std::cout << "Normal size ship deleted" << std::endl;
    }
}


