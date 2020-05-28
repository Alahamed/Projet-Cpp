#include "don.h"
#include <QDebug>
don::don()
{
id=0;
event="";
montant=0;
methode="";
daate="";
}
don::don(int id,QString event,int montant,QString methode,QString daate)
{
    this->id=id;
    this->event=event;
    this->montant=montant;
    this->methode=methode;
    this->daate=daate;

}
int don::get_id(){return id;}
QString don::get_event(){return event;}
int don::get_montant(){return montant;}
QString don::get_methode(){return methode;}
QString don::get_daate(){return daate;}

bool don::ajouter()
{
QSqlQuery query;
QString res=QString::number(id);
query.prepare("INSERT INTO DON ( ID, EVENT, MONTANT, METHODE, DAATE)"
              "VALUES ( :id, :event, :montant, :methode, :daate)");
query.bindValue(":id", id);
query.bindValue(":event", event);
query.bindValue(":montant", montant);
query.bindValue(":methode", methode);
query.bindValue(":daate", daate);




return    query.exec();
}
QSqlQueryModel * don::afficher()
{QSqlQueryModel * model = new QSqlQueryModel();
model->setQuery("select * from don order by ID");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Event"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Montant"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Methode"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));
return model;
}
bool don::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from don where ID = :id ");
query.bindValue(":id", res);

return    query.exec();
}

bool don::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("UPDATE DON SET ID=:id, EVENT=:event, MONTANT=:montant,  DAATE=:daate where ID = :id");
query.bindValue(":id", res);
query.bindValue(":event", event);
query.bindValue(":montant", montant);
query.bindValue(":methode", methode);
query.bindValue(":daate", daate);



return    query.exec();
}
QSqlQueryModel * don::afficher_list()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select ID from date_entrainement");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID "));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Montant"));

    return model;
}
