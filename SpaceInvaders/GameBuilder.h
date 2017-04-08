#ifndef GAMEBUILDER_H
#define GAMEBUILDER_H
#include <Game.h>
//#include <Ship.h>
//#include <Bullet.h>
#include <TinyShip.h>
#include <NormalShip.h>
#include <LargeShip.h>
#include <GiantShip.h>
#include <ShipBullet.h>
#include <Game.h>

namespace si {

    /* GameBuilder is the builder interface
     * BuildShip() - Build ship
     * BuildBullet() - Build bullet
     * BuildGame() - Build game
     * GetGame() - Return game
     */

    class GameBuilder
    {
        public:
            virtual void BuildShip(int x, int y, int size) = 0; //pure virtual methods
            virtual void BuildBullet(int x, int y) = 0; //pure virtual methods
            virtual void BuildGame() = 0; //pure virtual method
            virtual Game* GetGame() = 0; //pure virtual methods
            virtual ~GameBuilder(){}
        protected:
            GameBuilder(){}
    };
}


#endif // GAMEBUILDER_H
