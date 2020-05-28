


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include "dialogmenu.h"
#include "dialogaccount.h"
#include <QLabel>
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
    MainWindow::setWindowTitle("LOGIN");
    QPixmap pix("C:/Users/ZAHER/Desktop/projet2020/truc.png");
     ui->label_4->setPixmap(pix);

}

MainWindow::~MainWindow()
{


}




void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
       QString password= ui->lineEdit_2->text();
       QSqlQuery query;
           query.prepare("SELECT * FROM LOGIN WHERE USERNAME= ? AND PASSWORD= ?");
           query.addBindValue(username);
           query.addBindValue(password);
            query.exec();
              if(query.next())
              {
                   this->hide();
                  Dialogmenu d;

                  d.exec();




                  }
                    else
                        QMessageBox::critical(nullptr, QObject::tr("LOGIN"),
                                    QObject::tr("\nUser Name or Password is incorrect try again !\n"), QMessageBox::Cancel);

              ui->lineEdit->clear();
              ui->lineEdit_2->clear();


}

void MainWindow::on_commandLinkButton_clicked()
{
    Dialogaccount d;

    d.exec();
}


