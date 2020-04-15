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
        QSqlQueryModel* afficher_id();
        bool supprimer(int);
        bool modifier();
        //fonction avancé
        QSqlQueryModel * recherche_nom(QString);
        QSqlQueryModel * recherche_capitain(QString);
        QSqlQueryModel * trier_id();
        QSqlQueryModel * trier_id2();


private:
    QString nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6;
    int id;

};


#endif // EQUIPE_H
