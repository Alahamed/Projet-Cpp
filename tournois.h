#ifndef TOURNOIS_H
#define TOURNOIS_H



#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class tournois
{
public:
    tournois();

    tournois(int,int,QString,QString,QString);
    int get_id();
    int get_nbr();

    QString get_lieu();
    QString get_date_debut();
    QString get_date_fin();

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher2();

    bool supprimer(int);
    bool modifier();
    QSqlQueryModel * afficher_list();

private:
    int id,nbr;
    QString lieu,date_debut,date_fin;
};

#endif // TOURNOIS_H
