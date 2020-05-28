#ifndef DIALOGDON_H
#define DIALOGDON_H
#include "don.h"
#include "dialogmenu.h"
#include <QDialog>
#include <QTimer>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>



namespace Ui {
class Dialogdon;
}

class Dialogdon : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogdon(QWidget *parent = nullptr);
    ~Dialogdon();
public slots:
    void myfunction();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Dialogdon *ui;
    don tmpdon;
    QTimer *timer;
};

#endif // DIALOGDON_H
