#include "gescadeau.h"
#include "ui_gescadeau.h"
#include <QMessageBox>
#include "connexion.h"

gescadeau::gescadeau(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gescadeau)
{
    ui->setupUi(this);
    ui->tabcadeau->setModel(tmpcadeau.afficher());
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
    QString nom= ui->nom1->text();
    QString nomjoueur= ui->nomjoueur1->text();
    QString nomequipe= ui->nomequipe1->text();
    QString datematch= ui->date1->text();
    int nbrtir= ui->nbr1->value();

    cadeau c(nom,nomjoueur,nomequipe,datematch,nbrtir);
    bool test=c.modifier(nom,nomjoueur,nomequipe,datematch,nbrtir);
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
    QString nom= ui->nom2->text();
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

void gescadeau::on_tabcadeau_activated(const QModelIndex &index)
{
    ui->tabcadeau->setModel(tmpcadeau.afficher());
}

void gescadeau::on_tabcadeau_clicked(const QModelIndex &index)
{
    ui->tabcadeau->setModel(tmpcadeau.afficher());
}
