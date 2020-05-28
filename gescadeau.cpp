#include "gescadeau.h"
#include "gesempl.h"
#include "ui_gesempl.h"
#include <QMessageBox>
#include "connexion.h"
#include <QDesktopServices>
#include <QPainter>
#include <QPdfWriter>
#include <QMediaPlayer>
#include <QDialog>
#include "ui_gescadeau.h"
#include "cadeau.h"
#include "mainwindow.h"
#include <QDate>
#include "chart.h"

gescadeau::gescadeau(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gescadeau)
{
    ui->setupUi(this);
    ui->tabcadeau->setModel(tmpcadeau.afficher());
    int i = tmpcadeau.nombre();
     QString nombre;
     nombre.setNum(i);
     ui->nbr_2->setText(nombre);
}

gescadeau::~gescadeau()
{
    delete ui;
}

void gescadeau::on_pushButton_2_clicked()
{
    this->close();
}

void gescadeau::on_pushButton_5_clicked()
{

            QString nom= ui->nom->text();
            QString categ= ui->categ->currentText();
            QString nomjoueur= ui->nomjoueur->text();
            QString nomequipe= ui->nomequipe->text();
            int nbrtir= ui->nbr->value();
    cadeau c(nom,categ,nomjoueur,nomequipe,nbrtir);
    bool test=c.ajouter();
    if(test)
    {
        ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un cadeau"),
                          QObject::tr("Cadeau ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else if(!test)
    {
        ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un cadeau"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
void gescadeau::on_modifier_cadeau_clicked()
{
    QString nom= ui->nom->text();
    QString categ= ui->categ->currentText();
    QString nomjoueur= ui->nomjoueur->text();
    QString nomequipe= ui->nomequipe->text();
    int nbrtir= ui->nbr->value();

    cadeau c(nom,categ,nomjoueur,nomequipe,nbrtir);
    bool test=c.modifier(nom,categ,nomjoueur,nomequipe,nbrtir);
    if(test)
    {
        ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un cadeau"),
                          QObject::tr("Cadeau modifié.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if(!test)
      ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Modifier un cadeau"),
                          QObject::tr("Erreur !.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);


}

void gescadeau::on_supprimer_cadeau_clicked()
{
    QString nom= ui->nom->text();
           bool test=tmpcadeau.supprimer(nom);
           if(test)
           {
               ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
               QMessageBox::information(nullptr, QObject::tr("Supprimer un cadeau"),
                               QObject::tr("Cadeau supprimé.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

               }
               else if(!test)
                  {
                   ui->tabcadeau->setModel(tmpcadeau.afficher());//refresh
                   QMessageBox::critical(nullptr, QObject::tr("Supprimer un cadeau"),
                               QObject::tr("Erreur !.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


                 }
}



void gescadeau::on_reloadd_clicked()
{
       ui->tabcadeau->setModel(tmpcadeau.afficher());
}

void gescadeau::on_pushButton_7_clicked()
{
    QString nom=ui->idr->text();
    ui->tabcadeau->setModel(tmpcadeau.recherche(nom));
}



void gescadeau::on_up_clicked()
{
    ui->tabcadeau->setModel(tmpcadeau.trier_nom());

}


void gescadeau::on_commandLinkButton_2_clicked()
{
    this->close();
    gesempl emp;
    emp.setModal(true);
    emp.exec();

}

void gescadeau::on_print_clicked()
{
    QDateTime date;
        QDateTime datecreation = date.currentDateTime();
            QString afficheDC = "Date de Creation PDF : " + datecreation.toString() ;

               QPdfWriter pdf("C:/Users/HP/Desktop/PDFcadeau.pdf");
               QPainter painter(&pdf);
              int i = 4000;


                   painter.setPen(Qt::blue);
                   painter.setFont(QFont("Arial", 30));
                   painter.drawText(1100,1200,"Liste Des Cadeaux");
                   painter.setPen(Qt::black);
                   painter.setFont(QFont("Arial", 15));
                   painter.drawText(1100,2000,afficheDC);
                   painter.drawRect(100,100,7300,2600);
                   painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/HP/Desktop/projet/print.png"));
                   painter.drawRect(0,3000,9600,500);
                   painter.setFont(QFont("Arial", 9));
                   painter.drawText(200,3300,"Nom du cadeau");
                   painter.drawText(2000,3300,"Joueur");
                   painter.drawText(3000,3300,"Equipe");
                   painter.drawText(4000,3300,"Date Match");
                   painter.drawText(5300,3300,"Nombre de tirs");

                   QSqlQuery query;
                   query.prepare("select * from CADEAU ");
                   query.exec();
                   while (query.next())
                   {

                       painter.drawText(200,i,query.value(0).toString());
                       painter.drawText(2000,i,query.value(1).toString());
                       painter.drawText(3000,i,query.value(2).toString());
                       painter.drawText(4000,i,query.value(3).toString());
                       painter.drawText(5300,i,query.value(4).toString());


                      i = i + 400;


                   }
                   int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);

    QDesktopServices service;

                       if (reponse == QMessageBox::Yes)
                       {
                           service.openUrl(QUrl("C:/Users/HP/Desktop/Pdfcadeau.pdf"));
                           painter.end();
                       }
                       if (reponse == QMessageBox::No)
                       {
                            painter.end();
                       }
}






void gescadeau::on_commandLinkButton_4_clicked()
{
    gesempl gs;
    gs.setModal(true);
    gs.exec();
}

void gescadeau::on_home_clicked()
{
    this->close();
    MainWindow *main;
    main = new MainWindow();
    main->showFullScreen();
    delay = new QTimer(this);
   connect(delay,SIGNAL(timeout()),this,SLOT(closeWin()));
   delay->start(500);
}

void gescadeau::on_tabcadeau_activated(const QModelIndex &index)
{
    QString val = ui->tabcadeau->model()->data(index).toString() ;
       QSqlQuery qry;
       qry.prepare(" SELECT * from CADEAU where NOM='"+val+"'");
       if (qry.exec())
       {
           while (qry.next()) {
               ui->nom->setText(qry.value(0).toString()) ;
               ui->categ->setCurrentText(qry.value(1).toString());

                  ui->nomjoueur->setText(qry.value(2).toString()) ;
               ui->nomequipe->setText(qry.value(3).toString()) ;

              ui->nbr->setValue(qry.value(4).toInt()) ;




              }
              ui->tabcadeau->setModel(tmpcadeau.afficher());
      }
}


void gescadeau::on_print_2_clicked()
{
    chart ch;
    ch.setModal(true);
    ch.exec();
}

void gescadeau::on_pushButton_clicked()
{
    chart ch;
    ch.setModal(true);
    ch.exec();
}
