#include "match_amical.h"

#include <QDebug>
match_amical::match_amical()
{
id=0;
lieu="";
date_match="";
hdebut="";
hfin="";
}
match_amical::match_amical(int id,QString lieu,QString date_match,QString hdebut,QString hfin)
{

  this->id=id;
  this->lieu=lieu;
  this->date_match=date_match;
  this->hdebut=hdebut;
  this->hfin=hfin;



}
QString match_amical::get_lieu(){return  lieu;}

int match_amical::get_id(){return  id;}

QString match_amical::get_date_match(){return  date_match;}

QString match_amical::get_hdebut(){return  hdebut;}

QString match_amical::get_hfin(){return  hfin;}


QSqlQueryModel * match_amical::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from match_amical order by ID");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_match"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("heure_debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("heure_fin "));

    return model;
}

QSqlQueryModel * match_amical::afficher2()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from match_amical order by ID desc");


model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_match"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("heure_debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("heure_fin "));

    return model;
}


bool match_amical::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO match_amical ( ID, LIEU, DATE_MATCH, HDEBUT, HFIN) "
                    "VALUES ( :id, :lieu, :date_match, :hdebut, :hfin)");
query.bindValue(":id", res);
query.bindValue(":lieu", lieu);
query.bindValue(":date_match", date_match);
query.bindValue(":hdebut", hdebut);
query.bindValue(":hfin", hfin);




return    query.exec();
}


bool match_amical::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from match_amical where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool match_amical::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("UPDATE MATCH_AMICAL SET ID=:id, DATE_MATCH=:date_match, LIEU=:lieu, HDEBUT=:hdebut, HFIN=:hfin where ID = :id");
query.bindValue(":id", res);
query.bindValue(":date_match",date_match);
query.bindValue(":lieu",lieu);
query.bindValue(":hdebut",hdebut);
query.bindValue(":hfin",hfin);


return    query.exec();
}

QSqlQueryModel * match_amical::afficher_list()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select ID from match_amical");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieu"));

    return model;
}
