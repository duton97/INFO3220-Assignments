#include "Director.h"
#include <iostream>
namespace si {
    Director::Director()
    {
        std::cout << "Create Director" << std::endl;
    }

    Director::~Director()
    {
        std::cout << "Delete director" << std::endl;
    }

    /* Parameters: builder
     * builder - instance of a builder that will be used to build objects
     * builder will build a standard game.
     * builder builds game, bullet and normal sized ship
     * Return the produced game with its components
     */
    Game* Director::BuildGame(GameBuilder* builder)
    {
        builder->BuildGame();
        builder->BuildBullet(-100, -100); //Not visible
        builder->BuildShip(0, 0, 2); //Normal size
        return builder->GetGame();
    }

    /* Parameters: builder
     * builder - instance of a builder that will be used to build objects
     * builder will build a different version of game.
     * builder builds game, bullet and tiny sized ship
     * Return the produced game with its components
     */
    Game* Director::BuildGameTiny(GameBuilder* builder)
    {
        builder->BuildGame();
        builder->BuildBullet(-100, -100); //Not visible
        builder->BuildShip(0, 0, 1); //Tiny size
        return builder->GetGame();
    }

    /* Parameters: builder
     * builder - instance of a builder that will be used to build objects
     * builder will build a different version of game.
     * builder builds game, bullet and large sized ship
     * Return the produced game with its components
     */
    Game* Director::BuildGameLarge(GameBuilder* builder)
    {
        builder->BuildGame();
        builder->BuildBullet(-100, -100); //Not visible
        builder->BuildShip(0, 0, 3); //large size
        return builder->GetGame();
    }

    /* Parameters: builder
     * builder - instance of a builder that will be used to build objects
     * builder will build a different version of game.
     * builder builds game, bullet and giant sized ship
     * Return the produced game with its components
     */
    Game* Director::BuildGameGiant(GameBuilder* builder)
    {
        builder->BuildGame();
        builder->BuildBullet(-100, -100); //Not visible
        builder->BuildShip(0, 0, 4); //Giant size
        return builder->GetGame();
    }
}


