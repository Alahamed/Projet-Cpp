#include "emplacement.h"

emplacement::emplacement()
{
    id=0;
    equipe1="";
    email1="";
    equipe2="";
    email2="";

}
emplacement::emplacement(int id,QString equipe1,QString email1,QString equipe2,QString email2)
{
    this->id=id;
    this->equipe1=equipe1;
    this->email1=email1;
    this->equipe2=equipe2;
    this->email2=email2;
}

int emplacement::get_id(){return id;};
QString emplacement::get_equipe1(){return equipe1;};
QString emplacement::get_email1(){return email1;};
QString emplacement::get_equipe2(){return equipe2;};
QString emplacement::get_email2(){return email2;};

bool emplacement::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO EMPLACEMENT (ID,EQUIPE1,EMAIL1,EQUIPE2,EMAIL2)" "VALUES(:id, :equipe1, :email1, :equipe2, :email2)");
    query.bindValue(":id",id);
    query.bindValue(":equipe1",equipe1);
    query.bindValue(":email1",email1);
    query.bindValue(":equipe2",equipe2);
    query.bindValue(":email2",email2);
    return query.exec();
}

QSqlQueryModel* emplacement::afficher()
{
    QSqlQueryModel* model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM EMPLACEMENT");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Equipe 1"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("E-mail equipe1"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Equipe 2"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("E-mail equipe2"));

    return model;
}

bool emplacement::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM emplacement WHERE ID = :id ");
    query.bindValue(":id",id);

    return query.exec();
}
bool emplacement::modifier(int id,QString equipe1,QString email1,QString equipe2,QString email2)
{
    QSqlQuery query;
    query.prepare("UPDATE EMPLACEMENT SET equipe1=:equipe1, email1 =:email1 , equipe2=:equipe2 , email2=:email2 WHERE ID =:id");
    query.bindValue(":id",id);
    query.bindValue(":equipe1",equipe1);
    query.bindValue(":email1",email1);
    query.bindValue(":equipe2",equipe2);
    query.bindValue(":email2",email2);
    return query.exec();
}
QSqlQueryModel * emplacement::recherche(int id)
   {

        QSqlQueryModel *model=new QSqlQueryModel;
        QSqlQuery query;
        query.prepare("select * from EMPLACEMENT where ID=:id");
        query.bindValue(":id",id);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Equipe 1"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("E-mail equipe1"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Equipe 2"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("E-mail equipe2"));
        query.exec();
        model->setQuery(query);

        return model;


    }
QSqlQueryModel * emplacement::trier_id()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from EMPLACEMENT Order by ID ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Equipe 1"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("E-mail equipe1"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Equipe 2"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("E-mail equipe2"));

    return model;

}
int emplacement::nombre()
{
    QSqlQuery query;
    query.prepare("select count(*) from EMPLACEMENT");
    query.exec();
    query.next();

       return query.value(0).toInt();


}
