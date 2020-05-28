#include "chart.h"
#include "ui_chart.h"
#include <QMessageBox>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QSqlQuery>
QT_CHARTS_USE_NAMESPACE
chart::chart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chart)
{
    ui->setupUi(this);
    QSqlQuery query;

       int count1=0;
       int count2=0;
       int count3=0;
       int count4=0;


       if(query.exec("select categ from CADEAU"))
       {
       while(query.next())
         {
            if(query.value(0).toString()=="Coupe"){
                count1++; }
            else if(query.value(0).toString()=="Certificat"){
                count2++;}
            else if(query.value(0).toString()=="Medaille"){
                count3++;}
            else if(query.value(0).toString()=="Cash"){
                count4++;}


          }
        }
       QPieSeries *series;
       series = new QPieSeries();


       series->append("Coupe", count1);
       series->append("Certificat", count2);
       series->append("Medaille", count3);
       series->append("Cash", count4);


       QPieSlice *slice = series->slices().at(0);
       slice->setExploded();
       slice->setLabelVisible();
       slice->setPen(QPen(Qt::darkGreen, 5));
       slice->setBrush(Qt::green);

       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("Statistique des cadeaux par catégorie.");


        QChartView *chartview = new QChartView(chart);
        chartview->resize(781,471);
        chartview->setParent(ui->frame);
}


chart::~chart()
{
    delete ui;
}
