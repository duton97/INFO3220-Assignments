#ifndef GAME_H
#define GAME_H
#include <Ship.h>
#include <Bullet.h>

namespace si {

    //Product produced by the builder
    class Game
    {
        public:
            Game();
            virtual ~Game();
            Ship* getShip(); //Method to return ship
            Bullet* getBullet(); //Method to return bullet
            void setShip(Ship* ship); //Method to set current ship to ship built by builder
            void setBullet(Bullet* bullet); //Method to set current bullet to bullet built by builder

        protected:
            Ship* m_ship;
            Bullet* m_bullet;


    };
}


#endif // GAME_H
