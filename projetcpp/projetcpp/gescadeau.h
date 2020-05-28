#ifndef GESCADEAU_H
#define GESCADEAU_H
#include "cadeau.h"

#include <QMainWindow>

namespace Ui {
class gescadeau;
}

class gescadeau : public QMainWindow
{
    Q_OBJECT

public:
    explicit gescadeau(QWidget *parent = nullptr);
    ~gescadeau();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_modifier_cadeau_clicked();

    void on_supprimer_cadeau_clicked();

    void on_reloadd_clicked();

    void on_pushButton_7_clicked();

    void on_print_2_clicked();

    void on_up_clicked();

    void on_tabcadeau_activated(const QModelIndex &index);

    void on_tabcadeau_clicked(const QModelIndex &index);

private:
    Ui::gescadeau *ui;
     cadeau tmpcadeau;
};

#endif // GESCADEAU_H
