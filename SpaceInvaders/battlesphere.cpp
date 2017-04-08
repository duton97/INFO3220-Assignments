#include "battlesphere.h"
#include <QTimer>
#include <iostream>
namespace si {

BattleSphere::BattleSphere(QWidget *parent) : QDialog(parent), sound(":/sounds/explosion_x.wav") {

        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(nextFrame()));
        timer->start(32);

        //Open the config file, read the actions and store in commands Vector.
        QFile file("C:\\Users\\Vincent\\Desktop\\Homework\\University of Sydney\\Semester 1 - 2017\\INFO3220 - Object Oriented Design\\Labs\\Week3\\SpaceInvaders\\Config.txt");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream input (&file);
            QString string;
            while(!input.atEnd()) {
                string = input.readLine();
                commands.push_back(string);
            }
        }
        sizeShip = commands[0].toStdString();
        dx = commands[1].toInt();
        dy = commands[2].toInt();

        if (sizeShip == "tiny")
        {
           defender.load(":/images/tinydefender.png");
        } else if (sizeShip == "normal")
        {
            defender.load(":/images/defender.png");
        } else if (sizeShip == "large")
        {
            defender.load(":/images/bigdefender.png");
        } else if (sizeShip == "giant")
        {
            defender.load(":/images/giantdefender.png");
        }

        bullet.load(":/images/fireball.png");
        setStyleSheet("background-color: #000000;");
        this->resize(600, 400);

        update();

    }

    BattleSphere::~BattleSphere() {
        delete timer;
    }

    void BattleSphere::paintEvent(QPaintEvent *event) {
        QPainter painter(this);

        //Set brush to white to paint the stars
        painter.setBrush(Qt::white);

        //Paint the stars at given coordinates. if and else statement to vary the size of stars
        for (int i = 0; i < 20; i++) {
            if (i % 2 == 0) {
                painter.drawEllipse(starx[i], stary[i], 5, 5);
            } else {
                painter.drawEllipse(starx[i], stary[i], 2, 2);
            }
        }

        //Draw the defender and bullet
        painter.drawPixmap(dx, dy, defender);
        painter.drawPixmap(bx, by, bullet);
    }

    /*
     * first statement - moves the ship to the left. Cannot go lower than the 0 boundary of the screen
     * second statment - moves the ship to the right. cannot go higher than the maxX boundary of the screen
     * last statment - shoots the bullet and plays a sound when shot. If statement allows to shoot again, once the bullet goes off scren, meaning one bullet at a time.
     */
    void BattleSphere::movement(std:: string move) {
        int maxX = this->width() - defender.width();

        if (move == "left") {
            if (dx >= 0) {
                dx -= ds;
            }
        } else if (move == "right") {
            if (dx <= maxX) {
                dx += ds;
            }
        } else if (move == "shoot") {
            if (by < 0) {
                bx = dx + (defender.width()/2) - (bullet.width()/2);
                by = dy - bullet.height();
                sound.play();
            }
        }
    }

    void BattleSphere::nextFrame() {

        //Length variable to store size of the commands Vector
        int length = commands.size();

        //Checks for available commands. If there are still commands, store the command into m_move to signal the type of movement the player wants
        //else, cease movement of ship and bullet, m_move stores void to avoid repeating the last command.
        if (commandNumber < length) {
            m_move = commands[commandNumber].toStdString();
            commandNumber++;
        } else {
            m_move = "void";
        }

        //Call method to move or shoot
        BattleSphere::movement(m_move);

        //To animate the bullet
        by -= bs;

        //Scrolling down stars
        for (int i = 0; i < 20; i++) {
            stary[i] += 10;
            if (stary[i] >= 400) { //to wrap around
                stary[i] = 0;
            }
        }

        update();
    }

} // end namespace si
