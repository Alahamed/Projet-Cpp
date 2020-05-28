#include "gesempl.h"
#include "ui_gesempl.h"

gesempl::gesempl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gesempl)
{
    ui->setupUi(this);
}

gesempl::~gesempl()
{
    delete ui;
}

void gesempl::on_pushButton_clicked()
{

}
