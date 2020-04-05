#ifndef EQUIPE_H
#define EQUIPE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class equipe
{
public:
    equipe();
    equipe(int,QString,QString,QString,QString,QString,QString,QString);
        QString get_nom();
        QString get_joueur1();
        QString get_joueur2();
        QString get_joueur3();
        QString get_joueur4();
        QString get_joueur5();
        QString get_joueur6();
        int get_id();

       //CROUD
        bool ajouter();
        QSqlQueryModel* afficher();
        bool supprimer(int);
        bool modifier();
        //fonction avancé
        QSqlQueryModel * recherche_id(int);
        QSqlQueryModel * recherche_nom(QString);
        QSqlQueryModel * trier_id();

private:
    QString nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6;
    int id;

};

#endif // EQUIPE_H
