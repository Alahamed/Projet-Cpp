#include "dialogdon.h"
#include "ui_dialogdon.h"
#include <QPixmap>
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>


Dialogdon::Dialogdon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogdon)
{
    ui->setupUi(this);
    ui->tabdon->setModel(tmpdon.afficher());
    QPixmap pix("C:/Users/ZAHER/Desktop/projet2020/donate.jpg");
    ui->label->setPixmap(pix);
    timer = new QTimer (this);
            connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
            timer->start(1000);
    ui->label_7->hide();
    ui->label_8->hide();
    ui->idd->hide();
    ui->mont->hide();
    ui->event->hide();
    ui->idd_2->hide();
    ui-> pushButton_6->hide();


}

Dialogdon::~Dialogdon()
{
    delete ui;
}

void Dialogdon::myfunction()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString time_text = dateTime.toString("dd.MM.yyyy hh:mm:ss");
    ui->label_date_time->setText(time_text);
     ui->label_date_time->hide();
}

void Dialogdon::on_pushButton_clicked()
{
    this->hide();
    Dialogmenu d;
    d.exec();
}

void Dialogdon::on_pushButton_2_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString event = ui->combo_event->currentText();
    int montant = ui-> lineEdit_Montant->text().toInt();
 QString methode = ui->combo_Methode->currentText();
    QString daate= ui->label_date_time->text();

 don E(id,event,montant,methode,daate);
 bool test=E.ajouter();
 if(test)
  {ui->tabdon->setModel(tmpdon.afficher());
     ui->lineEdit_id->clear();

     ui-> lineEdit_Montant->clear();}
 else

    ui->lineEdit_id->clear();

    ui-> lineEdit_Montant->clear();

    QMessageBox::information(nullptr, QObject::tr("Ajouter Don"),
                      QObject::tr("Thank you for your Donation! .\n"
                                  "Click Close to exit."), QMessageBox::Close);

}

void Dialogdon::on_pushButton_3_clicked()
{
    int id=ui->id->text().toInt();

       QSqlQuery query;
           query.prepare("SELECT * FROM DON WHERE id= ? ");
           query.addBindValue(id);

            query.exec();
              if(query.next())
              {



                  ui->label_7->show();
                  ui->label_8->show();
                  ui->idd->show();
                    ui->idd_2->show();
                  ui->mont->show();
                  ui->event->show();
                  QString mytext = ui->id->text();
                  ui->idd->setText(mytext);
                   ui-> pushButton_6->show();


                  }
                    else
                        QMessageBox::critical(nullptr, QObject::tr("EDIT"),
                                    QObject::tr("\n ID not Found !\n"), QMessageBox::Cancel);

              ui->id->clear();



}

void Dialogdon::on_pushButton_4_clicked()
{
    int id=ui->id->text().toInt();

       QSqlQuery query;
           query.prepare("SELECT * FROM DON WHERE id= ? ");
           query.addBindValue(id);

            query.exec();
              if(query.next())
                 {  int id =ui-> id->text().toInt();
bool test=tmpdon.supprimer(id);
if(test)
{ui->tabdon->setModel(tmpdon.afficher());
    QMessageBox::information(nullptr, QObject::tr("Delete Donation"),
                QObject::tr("Donation Deleted :(.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}}
else
               QMessageBox::critical(nullptr, QObject::tr("Delete Donation"),
                           QObject::tr("Couldn't Find ID !!.\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);
}
void Dialogdon::on_pushButton_6_clicked()
{


    int id = ui->idd->text().toInt();
    QString event = ui->event->currentText();
    int montant = ui-> mont->text().toInt();
 QString methode = ui->combo_Methode->currentText();
    QString daate= ui->label_date_time->text();
  don e(id,event,montant,methode,daate);
  bool test=e.modifier();
  if(test)
{ui->tabdon->setModel(tmpdon.afficher());


QMessageBox::information(nullptr, QObject::tr("Modifier un Don"),
                  QObject::tr("Don modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
     { QMessageBox::critical(nullptr, QObject::tr("modifier un Don"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel); }
  ui->mont->clear();
  ui->label_7->hide();
  ui->label_8->hide();
  ui->idd->hide();
  ui->mont->hide();
  ui->event->hide();
  ui->idd_2->hide();
  ui-> pushButton_6->hide();

}
