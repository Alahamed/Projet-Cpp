#include "forum.h"
#include <QDebug>

forum::forum()
{
id=0;
userr="";
msg="";
}
forum::forum(int id,QString userr,QString msg)
{

    this->id=id;
    this->userr=userr;
    this->msg=msg;




}

int forum::get_id(){return  id;}


QString forum::get_userr(){return  userr;}

QString forum::get_msg(){return  msg;}





QSqlQueryModel * forum::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select userr,msg from forum order by ID");






    return model;
}


bool forum::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);

query.prepare("INSERT INTO forum ( ID, USERR, MSG) "
              "VALUES ( :id, :userr, :msg)");
query.bindValue(":id", res);
query.bindValue(":userr", userr);
query.bindValue(":msg", msg);


return    query.exec();
}




