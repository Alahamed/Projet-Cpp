#ifndef GESEMPL_H
#define GESEMPL_H
#include "emplacement.h"
#include <QDialog>

namespace Ui {
class gesempl;
}

class gesempl : public QDialog
{
    Q_OBJECT

public:
    explicit gesempl(QWidget *parent = nullptr);
    ~gesempl();

    void on_tableView_activated(const QModelIndex &index);
private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_3_clicked();

    void on_reloadd_clicked();

    void on_pushButton_5_clicked();

    void on_modifier_cadeau_clicked();

    void on_supprimer_cadeau_clicked();

    void on_pushButton_3_clicked();

    void on_up_clicked();

    void on_print_clicked();

    void on_pushButton_8_clicked();

    void on_maiil_clicked();

    void on_home_clicked();

    void on_tablemp_doubleClicked(const QModelIndex &index);

    void on_tablemp_activated(const QModelIndex &index);


private:
    Ui::gesempl *ui;
    emplacement tmpemp;
    QTimer *delay;

};

#endif // GESEMPL_H
