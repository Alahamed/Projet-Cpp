#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_projet2A");
db.setUserName("Seif");
db.setPassword("Seif");

if (db.open())
test=true;
    return  test;
}
void Connexion::fermerConnexion()
{db.close();}
