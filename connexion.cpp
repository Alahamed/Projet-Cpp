#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("zaher");
db.setUserName("zaher");
db.setPassword("esprit18");

if (db.open())
test=true;
    return  test;
}
void Connexion::fermerConnexion()
{db.close();}
