#ifndef FORUM_H
#define FORUM_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class forum
{
public:
    forum();

    forum(int,QString,QString);
    int get_id();

    QString get_userr();
    QString get_msg();

    bool ajouter();
    QSqlQueryModel * afficher();



private:
    int id;
    QString userr,msg;
};

#endif // FORUM_H
