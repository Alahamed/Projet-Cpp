#include "connection.h"

Connection::Connection()
{

}

bool Connection::ouvrirconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("wiemlsd1");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
return  test;
}
void Connection::fermerconnect()
{ db.close();}
