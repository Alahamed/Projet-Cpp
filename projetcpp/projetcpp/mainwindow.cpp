#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadeau.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabcadeau->setModel(tmpcadeau.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Ajoutercadeau_clicked()
{

       QString nom= ui->nom->text();
       QString nomjoueur= ui->nomjoueur->text();
       QString nomequipe= ui->nomequipe->text();
       QString datematch= ui->date->text();
       int nbrtir= ui->nbr->value();


       cadeau c(nom,nomjoueur,nomequipe,datematch,nbrtir);
       bool test=c.ajouter();
       if(test)
       {
           ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
           QMessageBox::information(nullptr, QObject::tr("Ajouter un cadeau"),
                             QObject::tr("cadeau ajouté.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);

       }
       else
           ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
           QMessageBox::critical(nullptr, QObject::tr("Ajouter un cadeau"),
                             QObject::tr("Erreur !.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


}




void MainWindow::on_supprimer_cadeau_clicked()
{
    QString nom= ui->nom2->text();
           bool test=tmpcadeau.supprimer(nom);
           if(test)
           {
               ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
               QMessageBox::information(nullptr, QObject::tr("Supprimer un cadeau"),
                               QObject::tr("Cadeau supprimé.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

               }
               else
                  {
                   ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
                   QMessageBox::critical(nullptr, QObject::tr("Supprimer un cadeau"),
                               QObject::tr("Erreur !.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


                 }
}
