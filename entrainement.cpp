#include "entrainement.h"
#include <QDebug>


entrainement::entrainement()
{

id=0;
lieu="";
date_entrainement="";
hdebut="";
hfin="";
}
entrainement::entrainement(int id,QString lieu,QString date_entrainement,QString hdebut,QString hfin)
{

  this->id=id;
  this->lieu=lieu;
  this->date_entrainement=date_entrainement;
  this->hdebut=hdebut;
  this->hfin=hfin;



}
QString entrainement::get_lieu(){return  lieu;}

int entrainement::get_id(){return  id;}

QString entrainement::get_date_entrainement(){return  date_entrainement;}

QString entrainement::get_hdebut(){return  hdebut;}

QString entrainement::get_hfin(){return  hfin;}


QSqlQueryModel * entrainement::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from entrainement order by ID");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_entrainement"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("heure_debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("heure_fin "));

    return model;
}

QSqlQueryModel * entrainement::afficher2()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from entrainement order by ID desc");


model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_entrainement"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("heure_debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("heure_fin "));

    return model;
}


bool entrainement::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO ENTRAINEMENT ( ID, LIEU, DATE_ENTRAINEMENT, HDEBUT, HFIN) "
                    "VALUES ( :id, :lieu, :date_entrainement, :hdebut, :hfin)");
query.bindValue(":id", res);
query.bindValue(":lieu", lieu);
query.bindValue(":date_entrainement", date_entrainement);
query.bindValue(":hdebut", hdebut);
query.bindValue(":hfin", hfin);




return    query.exec();
}


bool entrainement::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from entrainement where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool entrainement::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("UPDATE ENTRAINEMENT SET ID=:id, DATE_ENTRAINEMENT=:date_entrainement, LIEU=:lieu, HDEBUT=:hdebut, HFIN=:hfin where ID = :id");
query.bindValue(":id", res);
query.bindValue(":date_entrainement",date_entrainement);
query.bindValue(":lieu",lieu);
query.bindValue(":hdebut",hdebut);
query.bindValue(":hfin",hfin);


return    query.exec();
}

QSqlQueryModel * entrainement::afficher_list()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select ID from date_entrainement");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieu"));

    return model;
}
