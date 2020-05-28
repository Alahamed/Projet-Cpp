#include "cadeau.h"
#include "connexion.h"
cadeau::cadeau()
{
nom="";
nomjoueur="";
nomequipe="";
datematch="";
nbrtir=0;
}

cadeau::cadeau(QString nom,QString nomjoueur,QString nomequipe,QString datematch,int nbrtir)
{
    this->nom=nom;
    this->nomjoueur=nomjoueur;
    this->nomequipe=nomequipe;
    this->datematch=datematch;
    this->nbrtir=nbrtir;
}

QString cadeau::get_nom(){return nom;};
QString cadeau::get_nomjoueur(){return nomjoueur;};
QString cadeau::get_nomequipe(){return nomequipe;};
QString cadeau::get_datematch(){return datematch;};
int cadeau::get_nbrtir(){return nbrtir;};

bool cadeau::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO CADEAU (NOM,NOMJOUEUR,NOMEQUIPE,DATEMATCH,NBRTIR)" "VALUES(:nom, :nomjoueur, :nomequipe, :datematch, :nbrtir)");
    query.bindValue(":nom",nom);
    query.bindValue(":nomjoueur",nomjoueur);
    query.bindValue(":nomequipe",nomequipe);
    query.bindValue(":datematch",datematch);
    query.bindValue(":nbrtir",nbrtir);
    return query.exec();
}

QSqlQueryModel* cadeau::afficher()
{
    QSqlQueryModel* model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM CADEAU");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom joueur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom equipe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Match"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de tirs"));

    return model;
}

bool cadeau::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("DELETE FROM cadeau WHERE NOM = :nom ");
    query.bindValue(":nom",nom);

    return query.exec();
}
bool cadeau::modifier(QString nom,QString nomjoueur,QString nomequipe,QString datematch,int nbrtir)
{
    QSqlQuery query;
    query.prepare("UPDATE CADEAU SET nomjoueur=:nomjoueur, nomequipe =:nomequipe , datematch=:datematch , nbrtir=:nbrtir WHERE nom =:nom");
    query.bindValue(":nom",nom);
    query.bindValue(":nomjoueur",nomjoueur);
    query.bindValue(":nomequipe",nomequipe);
    query.bindValue(":datematch",datematch);
    query.bindValue(":nbrtir",nbrtir);
    return query.exec();
}
QSqlQueryModel * cadeau::recherche(QString nom)
   {

        QSqlQueryModel *model=new QSqlQueryModel;
        QSqlQuery query;
        query.prepare("select * from CADEAU where NOM = :nom");
        query.bindValue(":nom",nom);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom joueur"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom equipe"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Match"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de tirs"));
        model->setQuery(query);

        return model;


    }
QSqlQueryModel * cadeau::trier_nom()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from CADEAU Order by NOM ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom joueur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom equipe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Match"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de tirs"));

    return model;

}
