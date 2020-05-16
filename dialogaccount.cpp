#include "dialogaccount.h"
#include "ui_dialogaccount.h"
#include <QMessageBox>
#include <QPixmap>


Dialogaccount::Dialogaccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogaccount)
{

  ui->setupUi(this);
  ui->setupUi(this);

QPixmap pix("C:/Users/the cast/Desktop/lst.jpg");


ui->label->setPixmap(pix);
}

Dialogaccount::~Dialogaccount()
{
    delete ui;
}

void Dialogaccount::on_pushButton_clicked()
{
    QString username= ui->lineEdit->text();
    QString password= ui->lineEdit_4->text();
    QString nom= ui->lineEdit_2->text();
    QString prenom= ui->lineEdit_3->text();
    QString mail= ui->lineEdit_5->text();



    account e(username,password,nom,prenom,mail);
    bool test=e.ajouter();
    if(test)
  {
        //refresh
           // ui->comboBox->setModel(tmpmatch.afficher_list());
  QMessageBox::information(nullptr, QObject::tr("Ajouter account"),
                    QObject::tr("account ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter account"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->lineEdit->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_5->clear();

    hide();

}
