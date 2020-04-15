#include "statistique.h"
#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <string>
#include <QPainter>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE

Statistique::Statistique(){

}

QChartView * Statistique::Preparechart(){
    QSqlQuery query;
       int count1=0;
       int count2=0;
       int count3=0;

       if(query.exec("select type from match1"))
       {
       while(query.next())
         {
            if(query.value(0).toString()=="but"){
                count1++; }
            else if(query.value(0).toString()=="carton jaune"){
                count2++;}
            else if(query.value(0).toString()=="carton rouge"){
                count3++;}
          }
        }
       QPieSeries *series;
       series = new QPieSeries();

       series->append("but", count1);
       series->append("carton jaune", count2);
       series->append("carton rouge", count3);

       chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("Statistique des types des matches");
       chartView = new QChartView(chart);
       chartView->setRenderHint(QPainter::Antialiasing);

       return chartView;
}
