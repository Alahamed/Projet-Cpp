#ifndef DIALOGMENU_H
#define DIALOGMENU_H

#include <QDialog>

namespace Ui {
class Dialogmenu;
}

class Dialogmenu : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogmenu(QWidget *parent = nullptr);
    ~Dialogmenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialogmenu *ui;
};

#endif // DIALOGMENU_H
