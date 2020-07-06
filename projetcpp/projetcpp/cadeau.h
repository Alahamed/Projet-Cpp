#ifndef CADEAU_H
#define CADEAU_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connexion.h"

class cadeau
{
public:
cadeau();
cadeau(QString,QString,QString,QString,int);
QString get_nom();
QString get_nomjoueur();
QString get_nomequipe();
QString get_datematch();
int get_nbrtir();
bool ajouter();
QSqlQueryModel * afficher();
bool supprimer(QString nom);
bool modifier(QString,QString,QString,QString,int);
QSqlQueryModel * recherche(QString nom);
QSqlQueryModel * trier_nom();
private:
QString nom,nomjoueur,nomequipe,datematch;
int nbrtir;
};

#endif // CADEAU_H
