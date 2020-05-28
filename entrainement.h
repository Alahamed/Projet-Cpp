#ifndef ENTRAINEMENT_H
#define ENTRAINEMENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class entrainement
{public:
    entrainement();
    entrainement(int,QString,QString,QString,QString);
    int get_id();
    QString get_lieu();
    QString get_date_entrainement();
    QString get_hdebut();
    QString get_hfin();

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher2();

    bool supprimer(int);
    bool modifier();
    QSqlQueryModel * afficher_list();

private:
    int id;
    QString lieu,date_entrainement,hdebut,hfin;
};

#endif // ENTRAINEMENT_H
