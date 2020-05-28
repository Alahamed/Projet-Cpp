#include "recrutement.h"


#include <QDebug>
recrutement::recrutement()
{
id=0;
nom="";
prenom="";
date_naissance="";
profession="";
}
recrutement::recrutement(int id,QString nom,QString prenom,QString date_naissance,QString profession)
{

  this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->date_naissance=date_naissance;
    this->profession=profession;



}

int recrutement::get_id(){return  id;}

QString recrutement::get_nom(){return  nom;}

QString recrutement::get_prenom(){return  prenom;}

QString recrutement::get_date_naissance(){return  date_naissance;}

QString recrutement::get_profession(){return  profession;}



QSqlQueryModel * recrutement::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from recrutement order by ID");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_naissance"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("profession "));


    return model;
}

QSqlQueryModel * recrutement::afficher2()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from recrutement order by ID desc");


model->setHeaderData(0, Qt::Horizontal, QObject::tr("id "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_naissance"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("profession "));


    return model;
}


bool recrutement::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO recrutement ( ID, NOM, PRENOM, DATE_NAISSANCE, PROFESSION) "
              "VALUES ( :id, :nom, :prenom, :date_naissance, :profession)");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":date_naissance", date_naissance);
query.bindValue(":profession", profession);


return    query.exec();
}


bool recrutement::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from recrutement where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool recrutement::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("UPDATE RECRUTEMENT SET ID=:id, NOM=:nom, PRENOM=:prenom, DATE_NAISSANCE=:date_naissance, PROFESSION=:profession where ID = :id");
query.bindValue(":id", res);
query.bindValue(":nom",nom);
query.bindValue(":prenom",prenom);
query.bindValue(":date_naissance",date_naissance);
query.bindValue(":profession",profession);


return    query.exec();
}

