#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog), sound(":/sounds/explosion_x.wav")
{
   ui->setupUi(this);
   this->setStyleSheet("background-color: #82CAFF;");
   this->resize(600, 400);
   this->update();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{


//    QPainter painter(this);

}

void Dialog::nextFrame()
{

}

