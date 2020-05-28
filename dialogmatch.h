#ifndef DIALOGMATCH_H
#define DIALOGMATCH_H
#include"match.h"
#include <QMainWindow>

#include <QVBoxLayout>

#include <QDialog>

namespace Ui {
class Dialogmatch;
}

class Dialogmatch : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogmatch(QWidget *parent = nullptr);
    ~Dialogmatch();

private slots:
    void on_AjouterM_clicked();

    void on_tabMatch_activated(const QModelIndex &index);

    void on_ModifierM_clicked();

    void on_SupprimerM_clicked();

    void on_Statistique_clicked();

private:
    Ui::Dialogmatch *ui;
    match  tmpmatch;
        QVBoxLayout * mainLayout;

};

#endif // DIALOGMATCH_H
