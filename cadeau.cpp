#include "cadeau.h"
#include "connexion.h"
cadeau::cadeau()
{
nom="";
categ="";
nomjoueur="";
nomequipe="";
nbrtir=0;
}

cadeau::cadeau(QString nom,QString categ,QString nomjoueur,QString nomequipe,int nbrtir)
{
    this->nom=nom;
    this->categ=categ;
    this->nomjoueur=nomjoueur;
    this->nomequipe=nomequipe;
    this->nbrtir=nbrtir;
}

QString cadeau::get_nom(){return nom;};
QString cadeau::get_categ(){return categ;};
QString cadeau::get_nomjoueur(){return nomjoueur;};
QString cadeau::get_nomequipe(){return nomequipe;};
int cadeau::get_nbrtir(){return nbrtir;};

bool cadeau::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO CADEAU (NOM,CATEG,NOMJOUEUR,NOMEQUIPE,NBRTIR)" "VALUES(:nom, :categ, :nomjoueur, :nomequipe, :nbrtir)");
    query.bindValue(":nom",nom);
    query.bindValue(":categ",categ);
    query.bindValue(":nomjoueur",nomjoueur);
    query.bindValue(":nomequipe",nomequipe);
    query.bindValue(":nbrtir",nbrtir);
    return query.exec();
}

QSqlQueryModel* cadeau::afficher()
{
    QSqlQueryModel* model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM CADEAU");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Categorie"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom joueur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom equipe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de tirs"));

    return model;
}

bool cadeau::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("DELETE FROM cadeau WHERE NOM=:nom ");
    query.bindValue(":nom",nom);

    return query.exec();
}
bool cadeau::modifier(QString nom,QString categ,QString nomjoueur,QString nomequipe,int nbrtir)
{
    QSqlQuery query;
    query.prepare("UPDATE CADEAU SET nomjoueur=:nomjoueur, categ=:categ, nomequipe=:nomequipe , nbrtir=:nbrtir WHERE nom =:nom");
    query.bindValue(":nom",nom);
    query.bindValue(":categ",categ);
    query.bindValue(":nomjoueur",nomjoueur);
    query.bindValue(":nomequipe",nomequipe);
    query.bindValue(":nbrtir",nbrtir);
    return query.exec();
}
QSqlQueryModel * cadeau::recherche(QString nom)
   {

        QSqlQueryModel *model=new QSqlQueryModel;
        QSqlQuery query;
        query.prepare("select * from CADEAU where NOM=:nom");
        query.bindValue(":nom",nom);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Catégorie"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom joueur"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom equipe"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de tirs"));
        query.exec();
        model->setQuery(query);

        return model;


    }
QSqlQueryModel * cadeau::trier_nom()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from CADEAU Order by NOM ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Catégorie"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom joueur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom equipe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de tirs"));

    return model;

}
int cadeau::nombre()
{
    QSqlQuery query;
    query.prepare("select count(*) from CADEAU");
    query.exec();
    query.next();

       return query.value(0).toInt();


}

