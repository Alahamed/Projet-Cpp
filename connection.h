#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
private:
    QSqlDatabase db;
public:
    Connection();
    bool ouvrirconnect();
    void fermerconnect();
};

#endif // CONNECTION_H
