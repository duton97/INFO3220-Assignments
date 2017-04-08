#include "Ship.h"

namespace si {

    //Class QPixmap constructor
    Ship::Ship(int x, int y) : QPixmap(x, y), shipX(x), shipY(y)
    {

    }

    Ship::~Ship()
    {

    }

    //Decreases the x coordinate to move left. Cannot move lower than 0 as its the boundary of screen
    void Ship::moveLeft()
    {
        if (shipX >= 0) {
            shipX -= shipSpeed;
        }
    }

    //Increases the x coordinate to move right. Cannot move higher than the size of the screen
    void Ship::moveRight()
    {
        //int maxX = this->width() - defender.width();
        if (shipX <= 1000) {
            shipX += shipSpeed;
        }
    }

    //Returns x coordinate of ship
    int Ship::getX()
    {
        return shipX;
    }

    //Returns y coordinate of ship
    int Ship::getY()
    {
        return shipY;
    }

    //Returns speed of ship
    int Ship::getSpeed()
    {
        return shipSpeed;
    }
}
