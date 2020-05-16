#ifndef DIALOGPLANIFICATION_H
#define DIALOGPLANIFICATION_H
#include "match_amical.h"
#include "tournois.h"


#include <QDialog>

namespace Ui {
class Dialogplanification;
}

class Dialogplanification : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogplanification(QWidget *parent = nullptr);
    ~Dialogplanification();

private slots:
    void on_pb_ajouter_3_clicked();

    void on_pb_supprimer_4_clicked();

    void on_pb_ajouter_7_clicked();

    void on_AffichRecherche_activated(const QModelIndex &index);

    void on_Recherchid_textChanged(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pb_ajouter_5_clicked();

    void on_pb_supprimer_5_clicked();

    void on_pb_ajouter_9_clicked();

    void on_AffichRecherche_3_activated(const QModelIndex &index);

    void on_Recherchid_3_textChanged(const QString &arg1);

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Dialogplanification *ui;
    match_amical tmpmatch;
    tournois tmmatch;
};

#endif // DIALOGPLANIFICATION_H
