#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gescadeau.h"
#include "ui_gescadeau.h"
#include "gesempl.h"
#include "ui_gesempl.h"
#include <QMessageBox>
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_play_clicked()
{
    player = new QMediaPlayer(this);
    player->setMedia(QUrl::fromLocalFile("C:/Qt/projetcpp/img/appmusic.mp3"));
    player->play();
}

void MainWindow::on_pause_clicked()
{
    player->pause();
}

void MainWindow::on_commandLinkButton_3_clicked()
{
    gescadeau gs;
    gs.setModal(true);
    gs.exec();
}



void MainWindow::on_commandLinkButton_4_clicked()
{
    gesempl gs;
    gs.setModal(true);
    gs.exec();
}
