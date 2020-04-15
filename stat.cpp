#include "stat.h"
#include "ui_stat.h"

Stat::Stat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Stat)
{
    ui->setupUi(this);
}

