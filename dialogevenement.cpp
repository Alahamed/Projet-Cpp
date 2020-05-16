#include "dialogevenement.h"
#include "ui_dialogevenement.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDateTime>


Dialogevenement::Dialogevenement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogevenement)

{
      ui->setupUi(this);

   /* QPixmap pixx("C:/Users/the cast/Desktop/c.jpg");
   QPixmap pix("C:/Users/the cast/Desktop/x.jpg");


    ui->label_a1->setPixmap(pix);
    ui->label_a2->setPixmap(pix);
    ui->label_a3->setPixmap(pix);

    ui->label_a1_2->setPixmap(pixx);
    ui->label_a2_2->setPixmap(pixx);
    ui->label_a3_2->setPixmap(pixx);

*/
    ui->tabmatch->setModel(tmpmatch.afficher());
     ui->AffichRecherche->setModel(tmpmatch.afficher());
     ui->tabmatch2->setModel(tmmatch.afficher());
      ui->AffichRecherche2->setModel(tmmatch.afficher());
}

Dialogevenement::~Dialogevenement()
{
    delete ui;
}

void Dialogevenement::on_pb_ajouter_3_clicked()
{
    QDate date = QDate::currentDate();
    QDate dates= ui->dateEdit->date();
    QTime hd= ui->timeEdit_2->time();
    QTime hf= ui->timeEdit_3->time();

    int id = ui->lineEdit->text().toInt();
    QString lieu= ui->lineEdit_2->text();
    QString date_entrainement= ui->dateEdit->text();
    QString hdebut= ui->timeEdit_2->text();
    QString hfin= ui->timeEdit_3->text();

    if((date<dates)&&(hd<hf))
    {


  entrainement e(id,lieu,date_entrainement,hdebut,hfin);
  bool test=e.ajouter();
  if(test)
{ui->tabmatch->setModel(tmpmatch.afficher());
 ui->AffichRecherche->setModel(tmpmatch.afficher());
      //refresh
         // ui->comboBox->setModel(tmpmatch.afficher_list());
QMessageBox::information(nullptr, QObject::tr("Ajouter entrainement"),
                  QObject::tr("match amical ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
    }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter entrainement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->lineEdit->clear();
  ui->lineEdit_2->clear();
  ui->dateEdit->clear();
  ui->timeEdit_2->clear();
  ui->timeEdit_3->clear();
}

void Dialogevenement::on_pb_supprimer_4_clicked()
{
    int id = ui->modid->text().toInt();
    bool test=tmpmatch.supprimer(id);
    if(test)
    {ui->tabmatch->setModel(tmpmatch.afficher());
     ui->AffichRecherche->setModel(tmpmatch.afficher());
        //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un entrainement"),
                    QObject::tr("match supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un entrainement"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Dialogevenement::on_pb_ajouter_7_clicked()
{
    int id = ui->modid->text().toInt();
    QString date_match= ui->moddate->text();
    QString lieu= ui->modlieu->text();
    QString hdebut= ui->modhdebut->text();
    QString hfin= ui->modhfin->text();
  entrainement e(id,lieu,date_match,hdebut,hfin);
  bool test=e.modifier();
  if(test)
{ui->tabmatch->setModel(tmpmatch.afficher());
 ui->AffichRecherche->setModel(tmpmatch.afficher());

QMessageBox::information(nullptr, QObject::tr("Modifier un entrainement"),
                  QObject::tr("Etudiant modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("modifier un entrainement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->modid->clear();
  ui->moddate->clear();
  ui->modlieu->clear();
  ui->modhdebut->clear();
  ui->modhfin->clear();

}

void Dialogevenement::on_AffichRecherche_activated(const QModelIndex &index)
{
    QString val=ui->AffichRecherche->model()->data(index).toString();
    int vale=ui->AffichRecherche->model()->data(index).toInt();

    QSqlQuery query;
    query.prepare("select * from entrainement where ID= :vale or DATE_ENTRAINEMENT= :val or LIEU= :val or HDEBUT= :val or HFIN= :val ");
    query.bindValue(":val", val);
    query.bindValue(":vale", vale);


    if(query.exec())
    {
        while(query.next())
                {

                    ui->modid->setText(query.value(0).toString());
                    ui->modlieu->setText(query.value(1).toString());
                    ui->moddate->setText(query.value(4).toString());
                    ui->modhdebut->setTime(query.value(2).toTime());
                    ui->modhfin->setTime(query.value(3).toTime());



                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("!!!!!!!"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Dialogevenement::on_Recherchid_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM entrainement WHERE id LIKE'"+arg1+"%' or date_entrainement LIKE'"+arg1+"%' or lieu LIKE'"+arg1+"%' or hdebut LIKE'"+arg1+"%' or hfin LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AffichRecherche->setModel(model);
}

void Dialogevenement::on_pushButton_5_clicked()
{
    ui->tabmatch->setModel(tmpmatch.afficher());

}

void Dialogevenement::on_pushButton_4_clicked()
{
    ui->tabmatch->setModel(tmpmatch.afficher2());

}

void Dialogevenement::on_pb_ajouter_2_clicked()
{

    QDate date = QDate::currentDate();
    QDate daten= ui->dateEdit_3->date();

    int id = ui->lineEdit_5->text().toInt();
    QString nom= ui->lineEdit_55->text();
    QString prenom= ui->lineEdit_4->text();
    QString date_naissance= ui->dateEdit_3->text();
    QString profession= ui->comboBox->currentText();

    if(date>daten)
    {


  recrutement a(id,nom,prenom,date_naissance,profession);
  bool test=a.ajouter();
  if(test)
{ui->tabmatch2->setModel(tmmatch.afficher());
 ui->AffichRecherche2->setModel(tmmatch.afficher());
      //refresh
         // ui->comboBox->setModel(tmpmatch.afficher_list());
QMessageBox::information(nullptr, QObject::tr("Ajouter entrainement"),
                  QObject::tr("match amical ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
    }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter entrainement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->lineEdit_5->clear();
  ui->lineEdit_55->clear();
  ui->lineEdit_4->clear();
  ui->dateEdit_3->clear();

}

void Dialogevenement::on_pushButton_3_clicked()
{
    ui->tabmatch2->setModel(tmmatch.afficher());

}

void Dialogevenement::on_pushButton_6_clicked()
{
    ui->tabmatch2->setModel(tmmatch.afficher2());

}

void Dialogevenement::on_pb_supprimer_2_clicked()
{
    int id = ui->modid2->text().toInt();
    bool test=tmmatch.supprimer(id);
    if(test)
    {ui->tabmatch2->setModel(tmmatch.afficher());
     ui->AffichRecherche2->setModel(tmmatch.afficher());
        //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un entrainement"),
                    QObject::tr("match supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un entrainement"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void Dialogevenement::on_AffichRecherche2_activated(const QModelIndex &index)
{
    QString val=ui->AffichRecherche2->model()->data(index).toString();
    int vale=ui->AffichRecherche2->model()->data(index).toInt();

    QSqlQuery query;
    query.prepare("select * from recrutement where ID= :vale or NOM= :val or PRENOM= :val or DATE_NAISSANCE= :val or PROFESSION= :val ");
    query.bindValue(":val", val);
    query.bindValue(":vale", vale);


    if(query.exec())
    {
        while(query.next())
                {

                    ui->modid2->setText(query.value(0).toString());
                    ui->modnom2->setText(query.value(1).toString());
                    ui->modprenom2->setText(query.value(2).toString());
                    ui->moddate2->setText(query.value(3).toString());
                 //   ui->modprofession->set(query.value(4).toString());



                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("!!!!!!!"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Dialogevenement::on_lineEdit_3_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM recrutement WHERE id LIKE'"+arg1+"%' or date_naissance LIKE'"+arg1+"%' or nom LIKE'"+arg1+"%' or prenom LIKE'"+arg1+"%' or profession LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AffichRecherche2->setModel(model);
}

void Dialogevenement::on_pushButton_7_clicked()
{
    int id = ui->modid2->text().toInt();
    QString nom= ui->modnom2->text();
    QString prenom= ui->modprenom2->text();
    QString date_naissance= ui->moddate2->text();
    QString profession= ui->modprofession->currentText();

  recrutement e(id,nom,prenom,date_naissance,profession);
  bool test=e.modifier();
  if(test)
{ui->tabmatch2->setModel(tmmatch.afficher());
 ui->AffichRecherche2->setModel(tmmatch.afficher());

QMessageBox::information(nullptr, QObject::tr("Modifier un entrainement"),
                  QObject::tr("Etudiant modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("modifier un entrainement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
