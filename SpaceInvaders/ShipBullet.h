#ifndef SHIPBULLET_H
#define SHIPBULLET_H
#include <Bullet.h>

namespace si {

    //Subclass of bullet. Type of bullets for the ship
    class ShipBullet : public Bullet
    {
        public:
            ShipBullet(int x, int y);
            virtual ~ShipBullet();
            void shoot(); //method that allows player to shoot bullet
    };
}


#endif // SHIPBULLET_H
