#include "equipe.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

equipe::equipe()
{
        id=0;
        nom="";
        joueur1="";
        joueur2="";
        joueur3="";
        joueur4="";
        joueur5="";
        joueur6="";
}

equipe::equipe(int id,QString nom,QString joueur1,QString joueur2,QString joueur3,QString joueur4,QString joueur5,QString joueur6)
{
    this->id=id;
    this->nom=nom;
    this->joueur1=joueur1;
    this->joueur2=joueur2;
    this->joueur3=joueur3;
    this->joueur4=joueur4;
    this->joueur5=joueur5;
    this->joueur6=joueur6;
}

int equipe::get_id(){return id;}
QString equipe::get_nom(){return nom;}
QString equipe::get_joueur1(){return joueur1;}
QString equipe::get_joueur2(){return joueur2;}
QString equipe::get_joueur3(){return joueur3;}
QString equipe::get_joueur4(){return joueur4;}
QString equipe::get_joueur5(){return joueur5;}
QString equipe::get_joueur6(){return joueur6;}


bool equipe::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("INSERT INTO equipe1 (id,nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6) VALUES(:id, :nom, :joueur1, :joueur2, :joueur3, :joueur4, :joueur5, :joueur6)");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":joueur1",joueur1);
    query.bindValue(":joueur2",joueur2);
    query.bindValue(":joueur3",joueur3);
    query.bindValue(":joueur4",joueur4);
    query.bindValue(":joueur5",joueur5);
    query.bindValue(":joueur6",joueur6);

    return query.exec();
}


QSqlQueryModel * equipe::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM equipe1");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("JOUEUR1"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("JOUEUR2"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("JOUEUR3"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("JOUEUR4"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("JOUEUR5"));
    model->setHeaderData(7, Qt::Horizontal,QObject::tr("JOUEUR6"));

    return model;
}

bool equipe::supprimer(int idd)
{
    QSqlQuery query;
    QString res=QString::number(idd);
    query.prepare("DELETE FROM equipe1 WHERE ID=:id");
    query.bindValue(":id",res);

    return query.exec();
}

bool equipe::modifier()
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("UPDATE equipe1 SET id=:id, nom =:nom , JOUEUR1=:joueur1 , JOUEUR2=:joueur2 , JOUEUR3=:joueur3 , JOUEUR4=:joueur4 , JOUEUR5=:joueur5 , JOUEUR6=:joueur6 WHERE id =:id");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":joueur1",joueur1);
    query.bindValue(":joueur2",joueur2);
    query.bindValue(":joueur3",joueur3);
    query.bindValue(":joueur4",joueur4);
    query.bindValue(":joueur5",joueur5);
    query.bindValue(":joueur6",joueur6);
    return query.exec();
}

QSqlQueryModel * equipe::recherche_id(int)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString res = QString::number(id);
    model->setQuery("Select * From equipe1 WHERE id=:res ") ;
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("JOUEUR1"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("JOUEUR2"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("JOUEUR3"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("JOUEUR4"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("JOUEUR5"));
    model->setHeaderData(7, Qt::Horizontal,QObject::tr("JOUEUR6"));
    return model;
}

QSqlQueryModel * equipe::recherche_nom(QString nom){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From equipe1 WHERE nom=='"+nom+"'");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("JOUEUR1"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("JOUEUR2"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("JOUEUR3"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("JOUEUR4"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("JOUEUR5"));
    model->setHeaderData(7, Qt::Horizontal,QObject::tr("JOUEUR6"));
    return model;
}

QSqlQueryModel * equipe::trier_id()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from equipe1 Order by id ASC");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("JOUEUR1"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("JOUEUR2"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("JOUEUR3"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("JOUEUR4"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("JOUEUR5"));
    model->setHeaderData(7, Qt::Horizontal,QObject::tr("JOUEUR6"));
    return model;
}
