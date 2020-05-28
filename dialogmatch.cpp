#include "dialogmatch.h"
#include "ui_dialogmatch.h"
#include "equipe.h"
#include "match.h"

#include <QtWidgets/QMainWindow>

#include <QtPrintSupport>
#include <QPrintDialog>
#include <QApplication>
#include <QMessageBox>
#include <QTableView>
#include <QSqlQuery>
#include <QPrinter>
#include <QPainter>
#include <QWidget>
#include <QDebug>
#include <string>
Dialogmatch::Dialogmatch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogmatch)
{
    ui->setupUi(this);
    ui->tabMatch->setModel(tmpmatch.afficher());
}

Dialogmatch::~Dialogmatch()
{
    delete ui;
}

void Dialogmatch::on_AjouterM_clicked()
{
    int idMatch       = ui->lineEdit_idmatch->text().toInt();
    QString nomJoueur = ui->lineEdit_nomMatch->text();
    QString equipeA   = ui->comboBox_equipe->currentText();
    QString typeACt   = ui->comboBox_type->currentText();
    int minuteAct     = ui->lineEdit_minute->text().toUInt();
    match m(idMatch,nomJoueur,equipeA,typeACt,minuteAct);
    if(minuteAct<65 && idMatch <500){
    bool test=m.ajouter();
    if(test)
    {
        ui->tabMatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Match"),
                          QObject::tr("Match ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        ui->tabMatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Match"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
   }
    }else {
        ui->tabMatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Erreur !"),
                            QObject::tr("Controle de Saisie!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
         }
}

void Dialogmatch::on_tabMatch_activated(const QModelIndex &index)
{
    QString val=ui->tabMatch->model()->data(index).toString() ;
    QSqlQuery query ;
    QString radio="";
    query.prepare("select * from Match1 where ID_MATCH='"+val+"'") ;
     if( query.exec())
     {
         while (query.next())
         {
             ui->comboBox_idM_mod->setCurrentText(query.value(0).toString());
             ui->lineEdit_nomMatch_2->setText(query.value(1).toString());
             ui->comboBox_equipe_2->setCurrentText(query.value(2).toString());
             ui->comboBox_type_2->setCurrentText(query.value(3).toString());
             ui->lineEdit_minute_2->setText(query.value(4).toString());
         }
    }
}

void Dialogmatch::on_ModifierM_clicked()
{
    int idMatch       = ui->comboBox_idM_mod->currentText().toInt();
    QString nomJoueur = ui->lineEdit_nomMatch_2->text();
    QString equipeA   = ui->comboBox_equipe_2->currentText();
    QString typeACt   = ui->comboBox_type_2->currentText();
    int minuteAct     = ui->lineEdit_minute_2->text().toUInt();
    match m(idMatch,nomJoueur,equipeA,typeACt,minuteAct);
    if(minuteAct<65){
    bool test=m.modifier();
    if(test)
    {
        ui->tabMatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un Match"),
                          QObject::tr("Match ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    {
        ui->tabMatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Modifier un Match"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
   }
    }else {
        ui->tabMatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Erreur !"),
                            QObject::tr("Controle de Saisie!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
         }
}

void Dialogmatch::on_SupprimerM_clicked()
{
    int id= ui->comboBox_idM_Supp->currentText().toInt();
        bool test=tmpmatch.supprimer(id);
        if(test)
        {
            ui->tabMatch->setModel(tmpmatch.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer un Equipe"),
                            QObject::tr("Equipe supprimé.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

            }
            else
               {
                ui->tabMatch->setModel(tmpmatch.afficher());//refresh
                QMessageBox::critical(nullptr, QObject::tr("Supprimer un Equipe"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
              }
}

/*void Dialogmatch::on_Statistique_clicked()
{
    QSqlQuery query;
       int count1=0;
       int count2=0;
       int count3=0;

       if(query.exec("select TYPE from MATCH1"))
       {
       while(query.next())
         {
            if(query.value(0).toString()=="But"){
                count1++; }
            else if(query.value(0).toString()=="Carton Jaune"){
                count2++;}
            else if(query.value(0).toString()=="Carton Rouge"){
                count3++;}
          }
        }
       QPieSeries *series;
       series = new QPieSeries();

       series->append("But", count1);
       series->append("Carton Jaune", count2);
       series->append("Carton Rouge", count3);

       QPieSlice *slice = series->slices().at(0);
       slice->setExploded();
       slice->setLabelVisible();
       slice->setPen(QPen(Qt::darkGreen, 2));
       slice->setBrush(Qt::green);

       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("Statistique des types des matches");
       QChartView *chartView = new QChartView(chart);
       chartView = new QChartView(chart);
       chartView->setRenderHint(QPainter::Antialiasing);

       Stat *S;
       S=new Stat(this);
       S->setCentralWidget(chartView);
       S-> resize(400, 300);
       S->show();

}
*/
