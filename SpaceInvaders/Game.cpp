#include "Game.h"
#include <iostream>

namespace si {
    Game::Game()
    {
        std::cout << "game created" << std::endl;
    }

    Game::~Game()
    {
        std::cout << "game deleted" << std::endl;
    }


    //Method that returns ship
    Ship* Game::getShip()
    {
        return m_ship;
    }

    //Method that returns bullet
    Bullet* Game::getBullet()
    {
        return m_bullet;
    }

    //Method that sets member ship to ship built and passed by parameter
    void Game::setShip(Ship* ship)
    {
        m_ship = ship;
    }

    //Method that sets member bullet to bullet built and passed by paramater
    void Game::setBullet(Bullet* bullet)
    {
        m_bullet = bullet;
    }
}
