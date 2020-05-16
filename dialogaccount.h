#ifndef DIALOGACCOUNT_H
#define DIALOGACCOUNT_H
#include "account.h"

#include <QDialog>

namespace Ui {
class Dialogaccount;
}

class Dialogaccount : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogaccount(QWidget *parent = nullptr);
    ~Dialogaccount();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogaccount *ui;
};

#endif // DIALOGACCOUNT_H
