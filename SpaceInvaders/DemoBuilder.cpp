#include "DemoBuilder.h"
#include <iostream>

namespace si {
    DemoBuilder::DemoBuilder()
    {
        std::cout << "Create DemoBuilder" << std::endl;
    }

    DemoBuilder::~DemoBuilder()
    {
        std::cout << "Delete DemoBuilder" << std::endl;
    }

    /* Parameters: x, y, size
     * x - coordinate x of ship
     * y - coordinate y of ship
     * size - size of ship to determine which type of ship to build
     * pass ship to game. (pass built part to product)
     */
    void DemoBuilder::BuildShip(int x, int y, int size)
    {
        Ship* ship;

        if (size == 1)
        {
            ship = new TinyShip(x, y, size);
        } else if (size == 2)
        {
            ship = new NormalShip(x, y, size);
        } else if (size == 3)
        {
            ship = new LargeShip(x, y, size);
        } else if (size == 4)
        {
            ship = new GiantShip(x, y, size);
        }
        game->setShip(ship);
    }

    /* Parameters: x, y
     * x - coordinate x of bullet
     * y - coordinate y of bullet
     * pass bullet to game. (pass built part to product)
     */
    void DemoBuilder::BuildBullet(int x, int y)
    {
        Bullet* bullet = new ShipBullet(x, y);
        game->setBullet(bullet);
    }

    /* Create instance of game object. (end product)
     *
     */
    void DemoBuilder::BuildGame()
    {
        game = new Game();
    }

    /* Return the game (product) to the Builder and then Director
     */
    Game* DemoBuilder::GetGame()
    {
        return game;
    }

}
