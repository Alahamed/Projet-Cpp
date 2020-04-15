#include "satisti.h"
#include "ui_satisti.h"
#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <string>
#include <QPainter>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE


statisti::statisti(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statisti)
{
    ui->setupUi(this);
}

statisti::~statisti()
{
    delete ui;
}
