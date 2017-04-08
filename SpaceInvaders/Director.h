#ifndef DIRECTOR_H
#define DIRECTOR_H
//#include <Game.h>
//#include <Ship.h>
//#include <Bullet.h>
#include <GameBuilder.h>


namespace si {

    //Director class, in charge of telling the builder to build
    class Director
    {
        public:
            Director();
            virtual ~Director();
            Game* BuildGame(GameBuilder* builder); //Build a standard version of game. Normal settings for ship and bullet
            Game* BuildGameTiny(GameBuilder* builder); //Build a tiny version of game. Build a tiny ship
            Game* BuildGameLarge(GameBuilder* builder); //Build a large version of game. Build a large ship
            Game* BuildGameGiant(GameBuilder* builder); //Build a giant version of game. Build a giant ship
    };

}

#endif // DIRECTOR_H
