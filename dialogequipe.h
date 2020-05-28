#ifndef DIALOGEQUIPE_H
#define DIALOGEQUIPE_H

#include <QDialog>
#include "equipe.h"
#include <QDialog>
#include <QTimer>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
namespace Ui {
class dialogequipe;
}

class dialogequipe : public QDialog
{
    Q_OBJECT

public:
    explicit dialogequipe(QWidget *parent = nullptr);
    ~dialogequipe();

private slots:
    void on_tabWidget_tabBarClicked(int index);

    void on_AjouterE_clicked();

    void on_tabEquipe_activated(const QModelIndex &index);

    void on_ModifierE_clicked();

    void on_Supprimer_clicked();

    void on_Imprimer_clicked();

    void on_recherche_currentIndexChanged(const QString &arg1);

    void on_Tri_currentIndexChanged(const QString &arg1);

private:
    Ui::dialogequipe *ui;
    equipe tmpequipe;
};

#endif // DIALOGEQUIPE_H
