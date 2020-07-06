#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "cadeau.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_Ajoutercadeau_clicked();

    void on_modifier_match_clicked();

    void on_modifier_cadeau_clicked();

    void on_supprimer_match_clicked();

    void on_supprimer_cadeau_clicked();

private:
    Ui::MainWindow *ui;
    cadeau tmpcadeau;
};
#endif // MAINWINDOW_H
