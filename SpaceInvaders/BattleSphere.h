#ifndef BATTLESPHERE_H
#define BATTLESPHERE_H
#include <QDialog>
#include <QPainter>
#include <QPixmap>
#include <QSound>
#include <QBrush>
#include <QString>
#include <QFile>
#include <QTextStream>

namespace si {
    class BattleSphere : public QDialog
    {
        Q_OBJECT
        QPixmap defender;
        QPixmap bullet;
        QSound sound;
        QTimer *timer;

        int dx = 0;
        int dy = 350;
        int ds = 5;
        int bx = -1000;
        int by = -1000;
        int bs = 10;

        //Variable used to access the Vector of commands.
        //Starts on the 4th command as the 3 previous commands are dedicated to the ship setting.
        int commandNumber = 3;

        std::vector <QString> commands; //Vector of commands that store the player's action
        std::string sizeShip;
        std::string m_move; //Variable that store the type of action/movement of the player

        //X-Coordinates for the stars. Vary from 0-600, width of the screen.
        int starx[20] = {rand() % 600, rand() % 600, rand() % 600, rand() % 600, rand() % 600,
                         rand() % 600, rand() % 600, rand() % 600, rand() % 600, rand() % 600,
                         rand() % 600, rand() % 600, rand() % 600, rand() % 600, rand() % 600,
                         rand() % 600, rand() % 600, rand() % 600, rand() % 600, rand() % 600, };

        //Y-Coordinates for the stars. Vary from 0-400, height of the screen.
        int stary[20] = {rand() % 400, rand() % 400, rand() % 400, rand() % 400, rand() % 400,
                         rand() % 400, rand() % 400, rand() % 400, rand() % 400, rand() % 400,
                         rand() % 400, rand() % 400, rand() % 400, rand() % 400, rand() % 400,
                         rand() % 400, rand() % 400, rand() % 400, rand() % 400, rand() % 400, };
    public:
        BattleSphere(QWidget *parent = nullptr);
        ~BattleSphere();
        void movement(std::string);
    protected:
        void paintEvent(QPaintEvent *event);
    public slots:
        void nextFrame();
    };
} // end namespace si
#endif // BATTLESPHERE_H
