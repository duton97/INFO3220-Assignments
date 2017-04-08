#include "Bullet.h"

namespace si {

    //Uses a QPixmap constructor to build the bullet
    Bullet::Bullet(int x, int y) : QPixmap(x, y), bulletX(x), bulletY(y)
    {

    }

    Bullet::~Bullet()
    {

    }
}
