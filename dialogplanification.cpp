#include "dialogplanification.h"
#include "ui_dialogplanification.h"
#include <QMessageBox>
#include <QPixmap>
#include "dialogmenu.h"
Dialogplanification::Dialogplanification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogplanification)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/DERBALI/Desktop/bck");

    ui->label_a1->setPixmap(pix);
    ui->label_a2->setPixmap(pix);
    ui->label_a3->setPixmap(pix);

    ui->label_a1_3->setPixmap(pix);
    ui->label_a2_3->setPixmap(pix);
    ui->label_a3_3->setPixmap(pix);

ui->tabmatch->setModel(tmpmatch.afficher());
ui->AffichRecherche->setModel(tmpmatch.afficher());
ui->tabmatch2->setModel(tmmatch.afficher());
ui->AffichRecherche_3->setModel(tmmatch.afficher());
}

Dialogplanification::~Dialogplanification()
{
    delete ui;
}

void Dialogplanification::on_pb_ajouter_3_clicked()
{

    int id = ui->lineEdit_id->text().toInt();
    QString lieu= ui->lineEdit_lieu->text();
    QString date_match= ui->dateEdit_5->text();
    QString hdebut= ui->timeEdit_12->text();
    QString hfin= ui->timeEdit_13->text();


  match_amical e(id,lieu,date_match,hdebut,hfin);
  bool test=e.ajouter();
  if(test)
{ui->tabmatch->setModel(tmpmatch.afficher());
 ui->AffichRecherche->setModel(tmpmatch.afficher());
      //refresh
         // ui->comboBox->setModel(tmpmatch.afficher_list());
QMessageBox::information(nullptr, QObject::tr("Ajouter match amical"),
                  QObject::tr("match amical ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter match amical"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->lineEdit_id->clear();
  ui->lineEdit_lieu->clear();
  ui->dateEdit_5->clear();
  ui->timeEdit_12->clear();
  ui->timeEdit_13->clear();
}

void Dialogplanification::on_pb_supprimer_4_clicked()
{
    int id = ui->modid->text().toInt();
    bool test=tmpmatch.supprimer(id);
    if(test)
    {ui->tabmatch->setModel(tmpmatch.afficher());
     ui->AffichRecherche->setModel(tmpmatch.afficher());
        //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un match"),
                    QObject::tr("match supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un match"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Dialogplanification::on_pb_ajouter_7_clicked()
{
    int id = ui->modid->text().toInt();
    QString date_match= ui->moddate->text();
    QString lieu= ui->modlieu->text();
    QString hdebut= ui->modhdebut->text();
    QString hfin= ui->modhfin->text();
  match_amical e(id,lieu,date_match,hdebut,hfin);
  bool test=e.modifier();
  if(test)
{ui->tabmatch->setModel(tmpmatch.afficher());
 ui->AffichRecherche->setModel(tmpmatch.afficher());

QMessageBox::information(nullptr, QObject::tr("Modifier un match"),
                  QObject::tr("Etudiant modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("modifier un match"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->modid->clear();
  ui->moddate->clear();
  ui->modlieu->clear();
  ui->modhdebut->clear();
  ui->modhfin->clear();

}

void Dialogplanification::on_AffichRecherche_activated(const QModelIndex &index)
{
    QString val=ui->AffichRecherche->model()->data(index).toString();
    int vale=ui->AffichRecherche->model()->data(index).toInt();

    QSqlQuery query;
    query.prepare("select * from match_amical where ID= :vale or DATE_MATCH= :val or LIEU= :val or HDEBUT= :val or HFIN= :val ");
    query.bindValue(":val", val);
    query.bindValue(":vale", vale);


    if(query.exec())
    {
        while(query.next())
                {

                    ui->modid->setText(query.value(0).toString());
                    ui->moddate->setText(query.value(1).toString());
                    ui->modlieu->setText(query.value(2).toString());
                    ui->modhdebut->setTime(query.value(3).toTime());
                    ui->modhfin->setTime(query.value(4).toTime());



                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("!!!!!!!"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Dialogplanification::on_Recherchid_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM match_amical WHERE id LIKE'"+arg1+"%' or date_match LIKE'"+arg1+"%' or lieu LIKE'"+arg1+"%' or hdebut LIKE'"+arg1+"%' or hfin LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AffichRecherche->setModel(model);
}

void Dialogplanification::on_pushButton_5_clicked()
{
    ui->tabmatch->setModel(tmpmatch.afficher());

}

void Dialogplanification::on_pushButton_4_clicked()
{
    ui->tabmatch->setModel(tmpmatch.afficher2());

}

void Dialogplanification::on_pb_ajouter_5_clicked()
{
    int id = ui->lineEditid->text().toInt();
    int nbr = ui->spinBox_2->text().toInt();
    QString lieu= ui->lineEdit_lieu_2->text();
    QString date_debut= ui->dateEdit_7->text();
    QString date_fin= ui->dateEdit_2->text();


  tournois e(id,nbr,lieu,date_debut,date_fin);
  bool test=e.ajouter();
  if(test)
{ui->tabmatch2->setModel(tmmatch.afficher());
 ui->AffichRecherche_3->setModel(tmmatch.afficher());
      //refresh
         // ui->comboBox->setModel(tmpmatch.afficher_list());
QMessageBox::information(nullptr, QObject::tr("Ajouter tournois"),
                  QObject::tr("match amical ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter tournois"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->lineEditid->clear();
  ui->spinBox_2->clear();
  ui->lineEdit_lieu_2->clear();
  ui->dateEdit_7->clear();
  ui->dateEdit_2->clear();
}

void Dialogplanification::on_pb_supprimer_5_clicked()
{
    int id = ui->modid_3->text().toInt();
    bool test=tmmatch.supprimer(id);
    if(test)
    {ui->tabmatch2->setModel(tmmatch.afficher());
     ui->AffichRecherche_3->setModel(tmmatch.afficher());
        //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un match"),
                    QObject::tr("match supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un match"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void Dialogplanification::on_pb_ajouter_9_clicked()
{
    int id = ui->modid_3->text().toInt();
    int nbr = ui->modnbr->text().toInt();
    QString lieu= ui->modlieu_3->text();
    QString date_debut= ui->moddd->text();
    QString date_fin= ui->moddf->text();
  tournois e(id,nbr,lieu,date_debut,date_fin);
  bool test=e.modifier();
  if(test)
{ui->tabmatch2->setModel(tmmatch.afficher());
 ui->AffichRecherche_3->setModel(tmmatch.afficher());

QMessageBox::information(nullptr, QObject::tr("Modifier un tournois"),
                  QObject::tr("Etudiant modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("modifier un tournois"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

  ui->modid_3->clear();
  ui->modnbr->clear();
  ui->modlieu_3->clear();
  ui->moddd->clear();
  ui->moddf->clear();
}

void Dialogplanification::on_AffichRecherche_3_activated(const QModelIndex &index)
{
    QString val=ui->AffichRecherche_3->model()->data(index).toString();
    int vale=ui->AffichRecherche_3->model()->data(index).toInt();

    QSqlQuery query;
    query.prepare("select * from tournois where ID= :vale or LIEU= :val or DATE_DEBUT= :val or DATE_FIN= :val ");
    query.bindValue(":val", val);
    query.bindValue(":vale", vale);


    if(query.exec())
    {
        while(query.next())
                {

                    ui->modid_3->setText(query.value(0).toString());
                    ui->modnbr->setText(query.value(1).toString());
                    ui->modlieu_3->setText(query.value(2).toString());
                    ui->moddd->setText(query.value(3).toString());
                    ui->moddf->setText(query.value(4).toString());



                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("!!!!!!!"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Dialogplanification::on_Recherchid_3_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM tournois WHERE id LIKE'"+arg1+"%' or date_debut LIKE'"+arg1+"%' or lieu LIKE'"+arg1+"%' or date_fin LIKE'"+arg1+"%' or nbr LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AffichRecherche_3->setModel(model);
}

void Dialogplanification::on_pushButton_10_clicked()
{
    ui->tabmatch2->setModel(tmmatch.afficher());

}

void Dialogplanification::on_pushButton_9_clicked()
{
    ui->tabmatch2->setModel(tmmatch.afficher2());

}

void Dialogplanification::on_pushButton_clicked()
{
    this->hide();
    Dialogmenu d;
    d.exec();
}
