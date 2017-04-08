#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QSound>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
        Q_OBJECT
        QSound sound;
        QTimer *timer;

    public:
        explicit Dialog(QWidget *parent = 0);
        ~Dialog();

    protected:
        void paintEvent(QPaintEvent *event);

    private:
        Ui::Dialog *ui;

    public slots:
        void nextFrame();
};

#endif // DIALOG_H
