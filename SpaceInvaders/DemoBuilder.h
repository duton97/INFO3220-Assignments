#ifndef DEMOBUILDER_H
#define DEMOBUILDER_H
#include <GameBuilder.h>


namespace si {

    //Extends from the Builder named GameBuilder
    //This is the concrete builder
    class DemoBuilder : public GameBuilder
    {
        public:
            DemoBuilder();
            virtual ~DemoBuilder();

            virtual void BuildShip(int x, int y, int size); //Method to build a ship
            virtual void BuildBullet(int x, int y); //Method to build a bullet
            virtual void BuildGame(); //Method to build a game (product)
            virtual Game* GetGame(); //Method to return game

        protected:
            Game* game; //Instance of game

    };
}


#endif // DEMOGAME_H
