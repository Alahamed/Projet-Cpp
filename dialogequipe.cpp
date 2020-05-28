#include "dialogequipe.h"
#include "ui_dialogequipe.h"
#include "equipe.h"
#include "match.h"
#include "dialogmatch.h"
#include "ui_dialogmatch.h"
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
dialogequipe::dialogequipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogequipe)
{
    ui->setupUi(this);
}

dialogequipe::~dialogequipe()
{
    delete ui;
}

void dialogequipe::on_tabWidget_tabBarClicked(int index)
{
    ui->comboBox_idM->setModel(tmpequipe.afficher_id());
    ui->comboBox_idSupp->setModel(tmpequipe.afficher_id());

}


void dialogequipe::on_AjouterE_clicked()
{

    int id= ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nomequipe->text();
    QString joueur1= ui->lineEdit_j1->text();
    QString joueur2= ui->lineEdit_j2->text();
    QString joueur3= ui->lineEdit_j3->text();
    QString joueur4= ui->lineEdit_j4->text();
    QString joueur5= ui->lineEdit_j5->text();
    QString joueur6= ui->lineEdit_j6->text();

    #define std ;
    QSqlQuery q;
    int verif=0;
    int i=0;
     if(q.exec("select * from equipe1 WHERE ID='id' "))
        {
          int count= 0 ;
          while(q.next())
               { count++ ;}
          if(count==0)
               {verif=0; }
          else
               {verif=1;
                 ui->label_id->setText("id déjà existe");}
        }

        else if((nom=="")or(joueur1=="")or(joueur2=="")or(joueur3=="")or(joueur4=="")or(joueur5=="")or(joueur6==""))
          {  verif =1 ;
             ui->label_nom->setText("champ vide");
          }

     for(i=0;i<nom.length();i++)
        { if((nom.at(i)>='0')and(nom.at(i)<='9'))
            { verif =1 ;
              ui->label_nom->setText("contient des chiffres");
              break;}
        }


            if(verif==0 && id < 200)
              {
                equipe e(id,nom,joueur1,joueur2,joueur3,joueur4,joueur5,joueur6);
                       e.ajouter();

                ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
                QMessageBox::information(nullptr, QObject::tr("Ajouter un equipe"),
                                             QObject::tr("equipe ajouté.\n"
                                                    "Click Cancel to exit."), QMessageBox::Cancel);}
            else
              {
                ui->tabEquipe->setModel(tmpequipe.afficher());//refresh
                 QMessageBox::critical(nullptr, QObject::tr("Ajouter un Equipe"),
                                            QObject::tr("Erreur !.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel); }

}

void dialogequipe::on_tabEquipe_activated(const QModelIndex &index)
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

void dialogequipe::on_ModifierE_clicked()
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

void dialogequipe::on_Supprimer_clicked()
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

void dialogequipe::on_Imprimer_clicked()
{
    QPrinter printer;
        printer.setPrinterName("printer");
        QPrintDialog dialog(&printer,this);
        if(dialog.exec()==QDialog::Rejected)return;
        ui->tabEquipe->render(&printer);
}

void dialogequipe::on_recherche_currentIndexChanged(const QString &arg1)
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

void dialogequipe::on_Tri_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Tri")
        ui->tabEquipe->setModel(tmpequipe.afficher());
    if(arg1=="Tri ASC")
        ui->tabEquipe->setModel(tmpequipe.trier_id());
    else if(arg1=="Tri DESC")
        ui->tabEquipe->setModel(tmpequipe.trier_id2());
}
