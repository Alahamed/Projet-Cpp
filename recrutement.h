#ifndef RECRUTEMENT_H
#define RECRUTEMENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class recrutement
{public:
    recrutement();
    recrutement(int,QString,QString,QString,QString);
    int get_id();
    QString get_nom();
    QString get_prenom();
    QString get_date_naissance();
    QString get_profession();

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher2();

    bool supprimer(int);
    bool modifier();
    QSqlQueryModel * afficher_list();

private:
    int id;
    QString nom,prenom,date_naissance,profession;
};

#endif // RECRUTEMENT_H
