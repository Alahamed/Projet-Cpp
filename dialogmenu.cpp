#include "dialogmenu.h"
#include "dialogplanification.h"
#include "dialogevenement.h"
#include "ui_dialogmenu.h"

Dialogmenu::Dialogmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogmenu)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/the cast/Desktop/m.jpg");
    ui->label->setPixmap(pix);
}

Dialogmenu::~Dialogmenu()
{
    delete ui;
}

void Dialogmenu::on_pushButton_clicked()
{
    Dialogplanification d;

    d.exec();
}

void Dialogmenu::on_pushButton_2_clicked()
{
    Dialogevenement d;

    d.exec();
}
