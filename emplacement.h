#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connexion.h"
#include <QTimer>

class emplacement
{
public:

    emplacement();
    emplacement(int,QString,QString,QString,QString);
    int get_id();
    QString get_equipe1();
    QString get_email1();
    QString get_equipe2();
    QString get_email2();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int id);
    bool modifier(int,QString,QString,QString,QString);
    QSqlQueryModel * recherche(int id);
    QSqlQueryModel * trier_id();
    int nombre();
private:
    QString equipe1,email1,equipe2,email2;
    int id;
    QTimer *delay;

};

#endif // EMPLACEMENT_H
