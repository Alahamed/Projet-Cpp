#include "tournois.h"

#include <QDebug>
tournois::tournois()
{
id=0;
nbr=0;
lieu="";
date_debut="";
date_fin="";

}
tournois::tournois(int id,int nbr,QString lieu,QString date_debut,QString date_fin)
{

    this->id=id;
    this->nbr=nbr;
    this->lieu=lieu;
    this->date_debut=date_debut;
    this->date_fin=date_fin;



}

int tournois::get_id(){return  id;}

int tournois::get_nbr(){return  nbr;}

QString tournois::get_lieu(){return  lieu;}

QString tournois::get_date_debut(){return  date_debut;}

QString tournois::get_date_fin(){return  date_fin;}




QSqlQueryModel * tournois::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from tournois order by ID");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("date_fin "));


    return model;
}

QSqlQueryModel * tournois::afficher2()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from tournois order by ID desc");


model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("date_fin "));
    return model;
}


bool tournois::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
QString ress= QString::number(nbr);

query.prepare("INSERT INTO tournois ( ID, NBR, LIEU, DATE_DEBUT, DATE_FIN) "
              "VALUES ( :id, :nbr, :lieu, :date_debut, :date_fin)");
query.bindValue(":id", res);
query.bindValue(":nbr", ress);
query.bindValue(":lieu", lieu);
query.bindValue(":date_debut", date_debut);
query.bindValue(":date_fin", date_fin);


return    query.exec();
}


bool tournois::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from tournois where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool tournois::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
QString ress= QString::number(nbr);

query.prepare("UPDATE TOURNOIS SET ID=:id, NBR=:nbr, LIEU=:lieu, DATE_DEBUT=:date_debut, DATE_FIN=:date_fin where ID = :id");
query.bindValue(":id", res);
query.bindValue(":nbr", ress);
query.bindValue(":lieu",lieu);
query.bindValue(":date_debut",date_debut);
query.bindValue(":date_fin",date_fin);


return    query.exec();
}

