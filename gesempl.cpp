#include "gesempl.h"
#include "ui_gesempl.h"
#include "ui_gescadeau.h"
#include "gescadeau.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QPainter>
#include "smtp.h"
#include <QPdfWriter>
#include "mainwindow.h"
#include <QTimer>

gesempl::gesempl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gesempl)
{
    ui->setupUi(this);
    ui->tablemp->setModel(tmpemp.afficher());
    int i = tmpemp.nombre();
     QString nombre;
     nombre.setNum(i);
     ui->nbr->setText(nombre);

}

gesempl::~gesempl()
{
    delete ui;
}

void gesempl::on_pushButton_clicked()
{

}

void gesempl::on_commandLinkButton_3_clicked()
{
    this->close();

    gescadeau cd;
    cd.setModal(true);
    cd.exec();



}
void gesempl::on_reloadd_clicked()
{
       ui->tablemp->setModel(tmpemp.afficher());
}



void gesempl::on_pushButton_5_clicked()
{
    int id= ui->id->text().toInt();
    QString nomequipe1= ui->nomeq1->text();
    QString email1= ui->email1->text();
    QString nomequipe2= ui->nomeq2->text();
    QString email2= ui->email2->text();
    QRegularExpression regex("^[0-9a-zA-Z]+([0-9a-zA-Z]*[-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");

    if(!regex.match(email1).hasMatch())
    {


        ui->email1->setStyleSheet("QLineEdit { color: red;}");

        QMessageBox::critical(nullptr, QObject::tr("Ajouter un emplacement"),
                              QObject::tr("Vérifier les adresses !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);}
    else if(!regex.match(email2).hasMatch())
    {


        ui->email2->setStyleSheet("QLineEdit { color: red;}");

        QMessageBox::critical(nullptr, QObject::tr("Ajouter un emplacement"),
                              QObject::tr("Vérifier les adresses !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);}

    else
    {

        ui->email1->setStyleSheet("QLineEdit { color: green;}");
        ui->email2->setStyleSheet("QLineEdit { color: green;}");
    emplacement e(id,nomequipe1,email1,nomequipe2,email2);
    bool test=e.ajouter();
    if(test)
    {
        ui->tablemp->setModel(tmpemp.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un emplacement"),
                          QObject::tr("Emplacement ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else if(!test)
    {
        ui->tablemp->setModel(tmpemp.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un emplacement"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
}

void gesempl::on_modifier_cadeau_clicked()
{
    int id= ui->id->text().toInt();
    QString nomequipe1= ui->nomeq1->text();
    QString email1= ui->email1->text();
    QString nomequipe2= ui->nomeq2->text();
    QString email2= ui->email2->text();
    QRegularExpression regex("^[0-9a-zA-Z]+([0-9a-zA-Z]*[-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");

    if(!regex.match(email1).hasMatch())
    {


        ui->email1->setStyleSheet("QLineEdit { color: red;}");

        QMessageBox::critical(nullptr, QObject::tr("Modifier un emplacement"),
                              QObject::tr("Vérifier les adresses !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);}
    else if(!regex.match(email2).hasMatch())
    {


        ui->email2->setStyleSheet("QLineEdit { color: red;}");

        QMessageBox::critical(nullptr, QObject::tr("Modifier un emplacement"),
                              QObject::tr("Vérifier les adresses !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);}

    else
    {


    ui->email1->setStyleSheet("QLineEdit { color: green;}");
    ui->email2->setStyleSheet("QLineEdit { color: green;}");
    emplacement e(id,nomequipe1,email1,nomequipe2,email2);
    bool test=e.modifier(id,nomequipe1,email1,nomequipe2,email2);
    if(test)
    {
        ui->tablemp->setModel(tmpemp.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un emplacement"),
                          QObject::tr("Emplacement modifié.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else if(!test)
    {
        ui->tablemp->setModel(tmpemp.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Modifier un emplacement"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
    }
}

void gesempl::on_supprimer_cadeau_clicked()
{
    int id= ui->id->text().toInt();
           bool test=tmpemp.supprimer(id);
           if(test)
           {
               ui->tablemp->setModel(tmpemp.afficher());//refresh
               QMessageBox::information(nullptr, QObject::tr("Supprimer un emplacement"),
                               QObject::tr("Emplacement supprimé.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

               }
               else if(!test)
                  {
                   ui->tablemp->setModel(tmpemp.afficher());//refresh
                   QMessageBox::critical(nullptr, QObject::tr("Supprimer un emplacement"),
                               QObject::tr("Erreur !.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


                 }
}


void gesempl::on_pushButton_3_clicked()
{
    this->close();
}

void gesempl::on_up_clicked()
{
    ui->tablemp->setModel(tmpemp.trier_id());
}

void gesempl::on_print_clicked()
{
    QDateTime date;
        QDateTime datecreation = date.currentDateTime();
            QString afficheDC = "Date de Creation PDF : " + datecreation.toString() ;

               QPdfWriter pdf("C:/Users/HP/Desktop/PDFemp.pdf");
               QPainter painter(&pdf);
              int i = 4000;


                   painter.setPen(Qt::blue);
                   painter.setFont(QFont("Arial", 30));
                   painter.drawText(1100,1200,"Liste Des Emplacements");
                   painter.setPen(Qt::black);
                   painter.setFont(QFont("Arial", 15));
                   painter.drawText(1100,2000,afficheDC);
                   painter.drawRect(100,100,7300,2600);
                   painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/HP/Desktop/projet/print.png"));
                   painter.drawRect(0,3000,9600,500);
                   painter.setFont(QFont("Arial", 9));
                   painter.drawText(200,3300,"ID ");
                   painter.drawText(1300,3300,"Equipe 1");
                   painter.drawText(2500,3300,"E-mail de l'equipe1");
                   painter.drawText(3900,3300,"Equipe 2");
                   painter.drawText(5300,3300,"E-mail de l'equipe2");

                   QSqlQuery query;
                   query.prepare("select * from EMPLACEMENT ");
                   query.exec();
                   while (query.next())
                   {

                       painter.drawText(200,i,query.value(0).toString());
                       painter.drawText(1300,i,query.value(1).toString());
                       painter.drawText(2500,i,query.value(2).toString());
                       painter.drawText(3900,i,query.value(3).toString());
                       painter.drawText(5300,i,query.value(4).toString());


                      i = i + 400;


                   }
                   int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);

    QDesktopServices service;

                       if (reponse == QMessageBox::Yes)
                       {
                           service.openUrl(QUrl("C:/Users/HP/Desktop/Pdfemp.pdf"));
                           painter.end();
                       }
                       if (reponse == QMessageBox::No)
                       {
                            painter.end();
                       }
}

void gesempl::on_pushButton_8_clicked()
{
    int id=ui->idr->text().toInt();
    ui->tablemp->setModel(tmpemp.recherche(id));
}

void gesempl::on_maiil_clicked()
{
Smtp* smtp = new Smtp("fnaticassociation@gmail.com", "fnatic1234", "smtp.gmail.com", 465);
connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
QString adresse= ui->mailbox->text();
smtp->sendMail("fnaticassociation@gmail.com", adresse , "B",0);

QMessageBox::information( 0, tr( "E-mail" ), tr( "La liste des emplacements a été envoyée!\n\n" ) );

}

void gesempl::on_home_clicked()
{
    MainWindow *main;
    main = new MainWindow();
    main->showFullScreen();
    delay = new QTimer(this);
   connect(delay,SIGNAL(timeout()),this,SLOT(closeWin()));
   delay->start(500);
}




void gesempl::on_tablemp_activated(const QModelIndex &index)
{
    QString val = ui->tablemp->model()->data(index).toString() ;
       QSqlQuery qry;
       qry.prepare(" SELECT * from EMPLACEMENT where id='"+val+"'");
       if (qry.exec())
       {
           while (qry.next()) {
               ui->id->setText(qry.value(0).toString()) ;

               ui->nomeq1->setText(qry.value(1).toString()) ;
               ui->email1->setText(qry.value(2).toString()) ;



              ui->nomeq2->setText(qry.value(3).toString()) ;

                  ui->email2->setText(qry.value(4).toString()) ;


              }
              ui->tablemp->setModel(tmpemp.afficher());
      }
}
