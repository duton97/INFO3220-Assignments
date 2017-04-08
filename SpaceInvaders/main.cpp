#include <QApplication>
#include <Director.h>
#include <GameBuilder.h>
#include <DemoBuilder.h>
#include <Game.h>
#include "BattleSphere.h"

#include <iostream>
    int main(int argc, char *argv[])
    {
        QApplication a(argc, argv);
        si::BattleSphere w;
        //Dialog w;
        w.show();

        return a.exec();


        //Implements a Builder Design Patter.
        //Doesn't use QDialog
//        si::Director* d = new si::Director(); //Create a Director
//        si::GameBuilder* db = new si::DemoBuilder(); //Create a Concrete Builder "DemoBuilder" using a Builder interface "GameBuilder"
//        si::Game* game = d->BuildGame(db); //Create game and tell the Director to build and return a product game
//        delete d;
//        delete db;
//        delete game->getBullet();
//        delete game->getShip();
//        delete game;
//        return 0;
    }


