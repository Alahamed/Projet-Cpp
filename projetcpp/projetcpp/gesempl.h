#ifndef GESEMPL_H
#define GESEMPL_H

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

private slots:
    void on_pushButton_clicked();

private:
    Ui::gesempl *ui;
};

#endif // GESEMPL_H
