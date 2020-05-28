#ifndef GESCADEAU_H
#define GESCADEAU_H
#include "cadeau.h"
#include <QMediaPlayer>
#include <QDialog>

namespace Ui {
class gescadeau;
}

class gescadeau : public QDialog
{
    Q_OBJECT

public:
    explicit gescadeau(QWidget *parent = nullptr);
    ~gescadeau();

    void on_chart_clicked();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_modifier_cadeau_clicked();

    void on_supprimer_cadeau_clicked();

    void on_reloadd_clicked();

    void on_pushButton_7_clicked();

    void on_print_2_clicked();

    void on_up_clicked();


    void on_commandLinkButton_2_clicked();

    void on_print_clicked();

    void on_reloadd_2_clicked();

    void on_play_clicked();

    void on_pause_clicked();

    void on_commandLinkButton_4_clicked();

    void on_home_clicked();

    void on_tabcadeau_activated(const QModelIndex &index);

    void on_charts_clicked();

    void on_pushButton_clicked();

private:
      QTimer *delay;
    Ui::gescadeau *ui;
     cadeau tmpcadeau;

};

#endif // GESCADEAU_H
