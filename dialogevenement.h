#ifndef DIALOGEVENEMENT_H
#define DIALOGEVENEMENT_H
#include "entrainement.h"
#include "recrutement.h"


#include <QDialog>

namespace Ui {
class Dialogevenement;
}

class Dialogevenement : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogevenement(QWidget *parent = nullptr);
    ~Dialogevenement();

private slots:
    void on_pb_ajouter_3_clicked();

    void on_pb_supprimer_4_clicked();

    void on_pb_ajouter_7_clicked();

    void on_AffichRecherche_activated(const QModelIndex &index);

    void on_Recherchid_textChanged(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pb_ajouter_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pb_supprimer_2_clicked();

    void on_AffichRecherche2_activated(const QModelIndex &index);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Dialogevenement *ui;
    entrainement tmpmatch;
    recrutement tmmatch;

};

#endif // DIALOGEVENEMENT_H
