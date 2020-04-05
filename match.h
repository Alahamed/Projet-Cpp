#ifndef MATCH_H
#define MATCH_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class match
{
public:
       match();
       match(int,QString,QString,QString,int);
       QString get_nom();
       QString get_equipe();
       QString get_type();
       int get_id_match();
       int get_minute();
       //croud
       bool ajouter();
       QSqlQueryModel * afficher();
       bool supprimer(int);
       bool modifier();
       //fonction avancé
       QSqlQueryModel * trier_id_match();

   private:
       QString nom,equipe,type;
       int id_match,minute;

};

#endif // MATCH_H
