#ifndef STATII_H
#define STATII_H

#include <QMainWindow>

namespace Ui {
class Statii;
}

class Statii : public QMainWindow
{
    Q_OBJECT

public:
    explicit Statii(QWidget *parent = nullptr);
    ~Statii();

private:
    Ui::Statii *ui;
};

#endif // STATII_H
