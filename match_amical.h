#ifndef MATCH_AMICAL_H
#define MATCH_AMICAL_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class match_amical
{public:
    match_amical();
    match_amical(int,QString,QString,QString,QString);
    int get_id();
    QString get_lieu();
    QString get_date_match();
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
    QString lieu,date_match,hdebut,hfin;
};

#endif // MATCH_AMICAL_H
