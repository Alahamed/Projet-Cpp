#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "equipe.h"
#include "match.h"
#include <QMessageBox>
#include <QDebug>
#include "QMessageBox"
#include <QDebug>
#include <QtPrintSupport>
#include <QPrintDialog>
#include <QWidget>
#include <QTableView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabequipe->setModel(tmpequipe.afficher());
    ui->tabmatch->setModel(tmpmatch.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_43_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString joueur1= ui->lineEdit_j1->text();
    QString joueur2= ui->lineEdit_j2->text();
    QString joueur3= ui->lineEdit_j3->text();
    QString joueur4= ui->lineEdit_j4->text();
    QString joueur5= ui->lineEdit_j5->text();
    QString joueur6= ui->lineEdit_j6->text();

    equipe e(id,nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6);
    bool test=e.ajouter();
    if(test)
    {
        ui->tabequipe->setModel(tmpequipe.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un equipe"),
                          QObject::tr("equipe ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        ui->tabequipe->setModel(tmpequipe.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Equipe"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_clicked()
{
        int id= ui->lineEdit->text().toInt();
        bool test=tmpequipe.supprimer(id);
        if(test)
        {
            ui->tabequipe->setModel(tmpequipe.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer un Equipe"),
                            QObject::tr("Equipe supprimé.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

            }
            else
               {
                ui->tabequipe->setModel(tmpequipe.afficher());//refresh
                QMessageBox::critical(nullptr, QObject::tr("Supprimer un Equipe"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);


              }

}



void MainWindow::on_pushButton_44_clicked()
{
    int id = ui->lineEdit_idE->text().toInt();
    QString nom= ui->lineEdit_nomE->text();
    QString joueur1= ui->lineEdit_j1E->text();
    QString joueur2= ui->lineEdit_j2E->text();
    QString joueur3= ui->lineEdit_j3E->text();
    QString joueur4= ui->lineEdit_j4E->text();
    QString joueur5= ui->lineEdit_j5E->text();
    QString joueur6= ui->lineEdit_j6E->text();

    equipe e(id,nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6);
    bool test=e.modifier();
    if(test)
    {
        ui->tabequipe->setModel(tmpequipe.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("modifier un Equipe"),
                          QObject::tr("equipe modifié.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        ui->tabequipe->setModel(tmpequipe.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("modifier un Equipe"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
}






void MainWindow::on_Ajoutermatch_clicked()
{
    int idMatch       = ui->lineEdit_21->text().toInt();
    QString nomJoueur = ui->lineEdit_20->text();
    QString equipeA   = ui->m_equipeA->text();
    QString typeACt   = ui->comboBox_8->currentText();
    int minuteAct     = ui->minute->text().toUInt();
    match m(idMatch,nomJoueur,equipeA,typeACt,minuteAct);
    if(minuteAct<65){
    bool test=m.ajouter();
    if(test)
    {
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Match"),
                          QObject::tr("Match ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    {
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Match"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
   }
    }else {
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Erreur !"),
                            QObject::tr("Controle de Saisie!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
         }
}



void MainWindow::on_supprimer_match_clicked()
{
    int id= ui->lineEdit_24->text().toInt();
    bool test=tmpmatch.supprimer(id);
    if(test)
    {
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Equipe"),
                        QObject::tr("Equipe supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
           {
            ui->tabmatch->setModel(tmpmatch.afficher());//refresh
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un Equipe"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
          }

}

void MainWindow::on_modifier_match_clicked()
{
    int id_matchM   = ui->lineEdit_23->text().toInt();
    QString nomM    = ui->lineEdit_22->text();
    QString equipeM = ui->m_equipeM->text();
    QString typeM   = ui->comboBox_7->currentText();
    int minuteM     = ui->minute_m->text().toInt();
    match m(id_matchM,nomM,equipeM,typeM,minuteM);
    if(minuteM<65)
   {bool test=m.modifier();
    if(test)
    {
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("modifier un Match"),
                          QObject::tr("Match modifié.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else{
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("modifier un Match"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }else
    {
        ui->tabmatch->setModel(tmpmatch.afficher());//refresh
        QMessageBox::critical(nullptr, QObject::tr("Erreur !"),
                            QObject::tr("Controle de Saisie!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QPrinter printer;
    printer.setPrinterName("printer");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec()==QDialog::Rejected)return;
    ui->tabequipe->render(&printer);
}

void MainWindow::on_trie_id_clicked()
{
    ui->tabequipe->setModel(tmpequipe.trier_id());
}

void MainWindow::on_recherhce_id_clicked()
{
    int id = ui->recherhce_id->text().toUInt();
    ui->tabequipe->setModel(tmpequipe.recherche_id(id));
}

void MainWindow::on_recherhce_nom_2_clicked()
{
    QString nom = ui->recherhce_nom->text();
        ui->tabequipe->setModel(tmpequipe.recherche_nom(nom));
}

void MainWindow::on_trie_id_2_clicked()
{
    ui->tabmatch->setModel(tmpmatch.trier_id_match());
}
