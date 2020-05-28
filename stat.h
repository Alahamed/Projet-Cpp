#ifndef STAT_H
#define STAT_H

#include <QMainWindow>

#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <algorithm>
QT_CHARTS_USE_NAMESPACE
#include <QMainWindow>

namespace Ui {
class Stat;
}

class Stat : public QMainWindow
{
    Q_OBJECT

public:
    explicit Stat(QWidget *parent = nullptr);

private:
    Ui::Stat *ui;
};

#endif // STAT_H
