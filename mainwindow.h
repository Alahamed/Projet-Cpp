#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"equipe.h"
#include"match.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_43_clicked();

    void on_pushButton_clicked();

    void on_pushButton_44_clicked();
    void on_Ajoutermatch_clicked();

    void on_supprimer_match_clicked();

    void on_modifier_match_clicked();

    void on_combo_part_2_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_trie_id_clicked();

    void on_recherhce_id_clicked();

    void on_recherhce_nom_2_clicked();

    void on_trie_id_2_clicked();

private:
    Ui::MainWindow *ui;
    equipe tmpequipe;
    match tmpmatch;

};

#endif // MAINWINDOW_H
