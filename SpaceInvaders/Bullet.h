#ifndef BULLET_H
#define BULLET_H
#include <QPixmap>
#include <iostream>

namespace si {

    /*
     * Superclass for Bullets.
     * Subclasses will inherit from it and be specific type of bullet
     *
     */

    class Bullet : public QPixmap
    {
        public:
            Bullet(int x, int y); //X and Y Coordinate for the bullet
            virtual ~Bullet();
            virtual void shoot() = 0; //Abstract Method

        protected:
            int bulletX; //X coordinate of Bullet
            int bulletY; //Y coordinate of Bullet
            int bulletSpeed; //Speed of Bullet
            int bulletHeight; //Height of Bullet
            int bulletWidth; //Width of Bullet
    };
}



#endif // BULLET_H
