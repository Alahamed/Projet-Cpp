#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <iostream>
#include <QDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include "connexion.h"
#include "gescadeau.h"
#include <QApplication>
#include <QMessageBox>

#define q2c(string) string.toStdString()

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gescadeau w;
    Connexion c ;
    bool test=c.ouvrirConnexion();
       if(test)
        {w.show();
            QMessageBox::critical(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);



        return a.exec();
    }
