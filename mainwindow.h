#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"equipe.h"
#include"match.h"
#include <QMainWindow>
#include "statistique.h"
#include <QVBoxLayout>
#include "stat.h"

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
    void on_tabWidget_tabBarClicked();
    /*--Equipe--*/

    void on_AjouterE_clicked();

    void on_tabEquipe_activated(const QModelIndex &index);

    void on_ModifierE_clicked();

    void on_Supprimer_clicked();

    void on_Imprimer_clicked();

    void on_recherche_currentIndexChanged(const QString &arg1);

    void on_Tri_currentIndexChanged(const QString &arg1);

    /*--Match--*/
    void on_AjouterM_clicked();

    void on_ModifierM_clicked();

    void on_SupprimerM_clicked();


    void on_Statistique_clicked();



    void on_tabMatch_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    equipe tmpequipe;
    match  tmpmatch;
    QVBoxLayout * mainLayout;
    Stat *S;

};
#endif // MAINWINDOW_H
