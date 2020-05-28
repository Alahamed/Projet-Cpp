#ifndef DON_H
#define DON_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class don
{
public:
    don();
    don(int,QString,int,QString,QString);
    int get_id();
    QString get_event();
    int get_montant();
    QString get_methode();
    QString get_daate();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher2();
    bool supprimer(int);
    bool modifier();

    QSqlQueryModel * afficher_list();
private:
    int  id,montant;
    QString event,methode,daate;

};

#endif // DON_H
