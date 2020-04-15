#include "match.h"

match::match()
{
        id_match=0;
        nom="";
        equipe="";
        type="";
        minute=0;
}

match::match(int id_match,QString nom,QString equipe,QString type,int minute)
{
    this->id_match=id_match;
    this->nom=nom;
    this->equipe=equipe;
    this->type=type;
    this->minute=minute;
}

int match::get_id_match(){return id_match;}
QString match::get_nom(){return nom;}
QString match::get_equipe(){return equipe;}
QString match::get_type(){return type;}
int match::get_minute(){return minute;}

bool match::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(id_match);
    QString temps=QString::number(minute);
    query.prepare("INSERT INTO match1 (ID_MATCH,NOM,EQUIPE,TYPE,MINUTE)" "VALUES(:id_match, :nom, :equipe, :type, :minute)");
    query.bindValue(":id_match",res);
    query.bindValue(":nom",nom);
    query.bindValue(":equipe",equipe);
    query.bindValue(":type",type);
    query.bindValue(":minute",temps);
    return query.exec();
}


QSqlQueryModel* match::afficher()
{
    QSqlQueryModel* model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM match1");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_MATCH"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EQUIPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("MINUTE"));

    return model;
}
QSqlQueryModel* match::afficher_nom()
{
    QSqlQueryModel* model= new QSqlQueryModel();

    model->setQuery("SELECT nom FROM equipe1 ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom d'equipe"));
    return model;
}

QSqlQueryModel* match::afficher_idmatch()
{
    QSqlQueryModel* model= new QSqlQueryModel();

    model->setQuery("SELECT id_match FROM match1 ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_Match"));
    return model;
}



bool match::supprimer(int idd)
{
    QSqlQuery query;
    QString res=QString::number(idd);
    query.prepare("DELETE FROM match1 WHERE ID_MATCH = :id ");
    query.bindValue(":id",res);

    return query.exec();
}

bool match::modifier()
{
    QSqlQuery query;
    QString res=QString::number(id_match);
    query.prepare("UPDATE match1 SET id_match=:id_match, nom =:nom , equipe=:equipe , type=:type , minute=:minute WHERE id_match =:id_match");
    query.bindValue(":id_match",res);
    query.bindValue(":nom",nom);
    query.bindValue(":equipe",equipe);
    query.bindValue(":type",type);
    query.bindValue(":minute",minute);
    return query.exec();
}




