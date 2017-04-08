#include "ShipBullet.h"

namespace si {
    //Calls superclass constructor
    ShipBullet::ShipBullet(int x, int y) : Bullet(x, y)
    {
        std::cout << "Build bullet ship" << std::endl;
    }

    ShipBullet::~ShipBullet()
    {
        std::cout << "Bullet ship deleted" << std::endl;
    }

    //Just shoot, not animation (handled somewhere else?)
    //Shoot from the ship
    void ShipBullet::shoot()
    {
       // if(by <= -100){ //Shoot once, shoot again once height gets to -100
            //bulletX = bulletX + (shipWidth/2) - (bulletWidth/2);
            bulletX = bulletX - (bulletWidth/2);
            bulletY = bulletY - bulletHeight;
       //     sound.play();
       // } else { //After being shot, keeps going up
       //     by -= bs;
       // }
    }
}

