#include "dialogmenu.h"
#include "dialogplanification.h"
#include "dialogevenement.h"
#include "ui_dialogmenu.h"
#include "dialogdon.h"
Dialogmenu::Dialogmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogmenu)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/DERBALI/Desktop/coup");
    ui->label->setPixmap(pix);
}

Dialogmenu::~Dialogmenu()
{
    delete ui;
}

void Dialogmenu::on_pushButton_clicked()
{   this->hide();
    Dialogplanification d;

    d.exec();
}

void Dialogmenu::on_pushButton_2_clicked()
{   this->hide();
    Dialogevenement d;

    d.exec();
}



void Dialogmenu::on_pushButton_3_clicked()
{
    this->hide();
    Dialogdon d;
    d.exec();
}


