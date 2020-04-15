#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "equipe.h"
#include "match.h"
#include "son.h"
#include "stat.h"
#include <QMessageBox>
#include <QDebug>
#include <QPrinter>
#include <QPainter>
#include <QtPrintSupport>
#include <QPrintDialog>
#include <QWidget>
#include <QTableView>
#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <string>
#include <QSqlQuery>
#include <QtCharts/QPieSlice>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabEquipe->setModel(tmpequipe.afficher());
    ui->tabMatch->setModel(tmpmatch.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_tabWidget_tabBarClicked()
{
    ui->comboBox_idM->setModel(tmpequipe.afficher_id());
    ui->comboBox_idSupp->setModel(tmpequipe.afficher_id());
    ui->comboBox_equipe->setModel(tmpmatch.afficher_nom());
    ui->comboBox_equipe_2->setModel(tmpmatch.afficher_nom());
    ui->comboBox_idM_mod->setModel(tmpmatch.afficher_idmatch());
    ui->comboBox_idM_Supp->setModel(tmpmatch.afficher_idmatch());
}

void MainWindow::on_AjouterE_clicked()
{
    mettreMusique();
    int id= ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nomequipe->text();
    QString joueur1= ui->lineEdit_j1->text();
    QString joueur2= ui->lineEdit_j2->text();
    QString joueur3= ui->lineEdit_j3->text();
    QString joueur4= ui->lineEdit_j4->text();
    QString joueur5= ui->lineEdit_j5->text();
    QString joueur6= ui->lineEdit_j6->text();

    equipe e(id,nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6);
        bool test=e.ajouter();
        if(test)
        { ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
          QMessageBox::information(nullptr, QObject::tr("Ajouter un equipe"),
                              QObject::tr("equipe ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel); }
        else
        {ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un Equipe"),
                             QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);}
}

void MainWindow::on_tabEquipe_activated(const QModelIndex &index)
{

        QString val=ui->tabEquipe->model()->data(index).toString() ;
        QSqlQuery query ;
        QString radio="";
        query.prepare("select * from Equipe1 where ID='"+val+"'") ;
         if( query.exec())
         {
             while (query.next())
             {
                 ui->comboBox_idM->setCurrentText(query.value(0).toString());
                 ui->lineEdit_nomquipe_2->setText(query.value(1).toString());
                 ui->lineEdit_j1_2->setText(query.value(2).toString());
                 ui->lineEdit_j2_2->setText(query.value(3).toString());
                 ui->lineEdit_j3_2->setText(query.value(4).toString());
                 ui->lineEdit_j4_2->setText(query.value(5).toString());
                 ui->lineEdit_j5_2->setText(query.value(6).toString());
                 ui->lineEdit_j6_2->setText(query.value(7).toString());
             }

     }
}

void MainWindow::on_ModifierE_clicked()
{

        int id = ui->comboBox_idM->currentText().toInt();
        QString nom= ui->lineEdit_nomquipe_2->text();
        QString joueur1= ui->lineEdit_j1_2->text();
        QString joueur2= ui->lineEdit_j2_2->text();
        QString joueur3= ui->lineEdit_j3_2->text();
        QString joueur4= ui->lineEdit_j4_2->text();
        QString joueur5= ui->lineEdit_j5_2->text();
        QString joueur6= ui->lineEdit_j6_2->text();

        equipe e(id,nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6);
        bool test=e.modifier();
        if(test)
        {
            ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("modifier un Equipe"),
                              QObject::tr("equipe modifié.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
            QMessageBox::critical(nullptr, QObject::tr("modifier un Equipe"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_Supprimer_clicked()
{
    int id= ui->comboBox_idSupp->currentText().toInt();
    bool test=tmpequipe.supprimer(id);
    if(test){
             ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
                QMessageBox::information(nullptr, QObject::tr("Supprimer un Equipe"),
                                QObject::tr("Equipe supprimé.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);}
                else{
                    ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
                    QMessageBox::critical(nullptr, QObject::tr("Supprimer un Equipe"),
                                QObject::tr("Erreur !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);

                  }
}

void MainWindow::on_Imprimer_clicked()
{
    QPrinter printer;
        printer.setPrinterName("printer");
        QPrintDialog dialog(&printer,this);
        if(dialog.exec()==QDialog::Rejected)return;
        ui->tabEquipe->render(&printer);
}


void MainWindow::on_recherche_currentIndexChanged(const QString &arg1)
{
    if(arg1=="recherche")
        ui->tabEquipe->setModel(tmpequipe.afficher());
    if(arg1=="recherche nom")
    {
        QString nom= ui->Recherche_line->text();
        ui->tabEquipe->setModel(tmpequipe.recherche_nom(nom));
    }
    else if (arg1=="recherche capitaine")
    {
        QString capitain= ui->Recherche_line->text();
        ui->tabEquipe->setModel(tmpequipe.recherche_capitain(capitain));
    }
}

void MainWindow::on_Tri_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Tri")
        ui->tabEquipe->setModel(tmpequipe.afficher());
    if(arg1=="Tri ASC")
        ui->tabEquipe->setModel(tmpequipe.trier_id());
    else if(arg1=="Tri DESC")
        ui->tabEquipe->setModel(tmpequipe.trier_id2());
}



/*--------- Gestion du Match -----------------*/

void MainWindow::on_AjouterM_clicked()
{

    int idMatch       = ui->lineEdit_idmatch->text().toInt();
    QString nomJoueur = ui->lineEdit_nomMatch->text();
    QString equipeA   = ui->comboBox_equipe->currentText();
    QString typeACt   = ui->comboBox_type->currentText();
    int minuteAct     = ui->lineEdit_minute->text().toUInt();
    match m(idMatch,nomJoueur,equipeA,typeACt,minuteAct);
    if(minuteAct<65){
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

void MainWindow::on_ModifierM_clicked()
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



void MainWindow::on_SupprimerM_clicked()
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


void MainWindow::on_Statistique_clicked()
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




void MainWindow::on_tabMatch_activated(const QModelIndex &index)
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
