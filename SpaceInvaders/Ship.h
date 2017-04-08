#ifndef SHIP_H
#define SHIP_H
#include <QPixmap>
#include <iostream>

namespace si {

    //Superclass of ship, inherits QPixmap
    class Ship : public QPixmap
    {
        public:
            Ship(int x, int y);
            virtual ~Ship();

            virtual void moveLeft(); //Method to move the ship left
            virtual void moveRight(); //Method to move the ship right
            virtual int getX(); //Method that returns coordinate of x
            virtual int getY(); //Method that returns coordinate of y
            virtual int getSpeed(); //Method that returns speed of ship

        protected:
            int shipX; //X coordinate of ship
            int shipY; //Y coordiante of ship
            int shipSpeed = 10; //Speed of ship
            int shipSize; //Size og ship
            int shipHeight; //height of ship
            int shipWidth; //width of ship
    };
}


#endif // SHIP_H
