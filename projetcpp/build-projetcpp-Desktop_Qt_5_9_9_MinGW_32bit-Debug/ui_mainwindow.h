/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <imprimer.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTableView *tabemplacement;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *trie_id;
    QPushButton *recherhce_id;
    QLineEdit *recherhce_nom;
    QPushButton *recherhce_nom_2;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_j1;
    QPushButton *pushButton_43;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_j2;
    QLineEdit *lineEdit_j3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_j4;
    QWidget *tab_5;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_nom_2;
    QLineEdit *lineEdit_j1_2;
    QPushButton *pushButton_44;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_j2_2;
    QLineEdit *lineEdit_j3_2;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_j4_2;
    QWidget *tab_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_11;
    QWidget *tab_7;
    QTableView *tabetudiant_2;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QGroupBox *groupBox;
    QTableView *tabcadeau;
    QPushButton *trie_id_2;
    QWidget *tab_9;
    QGroupBox *groupBox_5;
    QLineEdit *nomjoueur;
    QPushButton *Ajoutercadeau;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *nom;
    QLabel *label_21;
    QLineEdit *nomequipe;
    QDateEdit *date;
    QSpinBox *nbr;
    QWidget *tab_10;
    QGroupBox *groupBox_6;
    QPushButton *modifier_cadeau;
    QLineEdit *nomequipe1;
    QLabel *label_22;
    QLineEdit *nomjoueur1;
    QDateEdit *date1;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *nom1;
    QSpinBox *nbr1;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *tab_11;
    QGroupBox *groupBox_2;
    QLineEdit *nom2;
    QPushButton *supprimer_cadeau;
    QLabel *label_27;
    imprimer *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1242, 875);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1231, 821));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(80, 10, 821, 791));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabemplacement = new QTableView(tab_4);
        tabemplacement->setObjectName(QStringLiteral("tabemplacement"));
        tabemplacement->setGeometry(QRect(30, 40, 751, 521));
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 600, 113, 22));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 690, 93, 28));
        trie_id = new QPushButton(tab_4);
        trie_id->setObjectName(QStringLiteral("trie_id"));
        trie_id->setGeometry(QRect(550, 600, 141, 28));
        recherhce_id = new QPushButton(tab_4);
        recherhce_id->setObjectName(QStringLiteral("recherhce_id"));
        recherhce_id->setGeometry(QRect(150, 630, 141, 28));
        recherhce_nom = new QLineEdit(tab_4);
        recherhce_nom->setObjectName(QStringLiteral("recherhce_nom"));
        recherhce_nom->setGeometry(QRect(340, 600, 113, 22));
        recherhce_nom_2 = new QPushButton(tab_4);
        recherhce_nom_2->setObjectName(QStringLiteral("recherhce_nom_2"));
        recherhce_nom_2->setGeometry(QRect(330, 630, 141, 28));
        tabWidget_2->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 40, 761, 551));
        lineEdit_nom = new QLineEdit(groupBox_3);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(290, 140, 241, 22));
        lineEdit_j1 = new QLineEdit(groupBox_3);
        lineEdit_j1->setObjectName(QStringLiteral("lineEdit_j1"));
        lineEdit_j1->setGeometry(QRect(290, 180, 241, 22));
        pushButton_43 = new QPushButton(groupBox_3);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        pushButton_43->setGeometry(QRect(330, 450, 161, 28));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 140, 56, 16));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 180, 56, 16));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 220, 81, 16));
        lineEdit_j2 = new QLineEdit(groupBox_3);
        lineEdit_j2->setObjectName(QStringLiteral("lineEdit_j2"));
        lineEdit_j2->setGeometry(QRect(290, 220, 241, 22));
        lineEdit_j3 = new QLineEdit(groupBox_3);
        lineEdit_j3->setObjectName(QStringLiteral("lineEdit_j3"));
        lineEdit_j3->setGeometry(QRect(290, 260, 241, 22));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 260, 56, 16));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 300, 91, 16));
        lineEdit_j4 = new QLineEdit(groupBox_3);
        lineEdit_j4->setObjectName(QStringLiteral("lineEdit_j4"));
        lineEdit_j4->setGeometry(QRect(290, 300, 241, 22));
        tabWidget_2->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 40, 761, 551));
        lineEdit_nom_2 = new QLineEdit(groupBox_4);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(290, 140, 241, 22));
        lineEdit_j1_2 = new QLineEdit(groupBox_4);
        lineEdit_j1_2->setObjectName(QStringLiteral("lineEdit_j1_2"));
        lineEdit_j1_2->setGeometry(QRect(290, 180, 241, 22));
        pushButton_44 = new QPushButton(groupBox_4);
        pushButton_44->setObjectName(QStringLiteral("pushButton_44"));
        pushButton_44->setGeometry(QRect(330, 450, 161, 28));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 140, 56, 16));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(160, 180, 56, 16));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 220, 81, 16));
        lineEdit_j2_2 = new QLineEdit(groupBox_4);
        lineEdit_j2_2->setObjectName(QStringLiteral("lineEdit_j2_2"));
        lineEdit_j2_2->setGeometry(QRect(290, 220, 241, 22));
        lineEdit_j3_2 = new QLineEdit(groupBox_4);
        lineEdit_j3_2->setObjectName(QStringLiteral("lineEdit_j3_2"));
        lineEdit_j3_2->setGeometry(QRect(290, 260, 241, 22));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 260, 56, 16));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(160, 300, 91, 16));
        lineEdit_j4_2 = new QLineEdit(groupBox_4);
        lineEdit_j4_2->setObjectName(QStringLiteral("lineEdit_j4_2"));
        lineEdit_j4_2->setGeometry(QRect(290, 300, 241, 22));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        lineEdit = new QLineEdit(tab_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 50, 251, 22));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 130, 93, 28));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(170, 50, 56, 16));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabetudiant_2 = new QTableView(tab_7);
        tabetudiant_2->setObjectName(QStringLiteral("tabetudiant_2"));
        tabetudiant_2->setGeometry(QRect(70, 90, 531, 471));
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(40, 10, 1181, 771));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox = new QGroupBox(tab_8);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 50, 871, 601));
        tabcadeau = new QTableView(groupBox);
        tabcadeau->setObjectName(QStringLiteral("tabcadeau"));
        tabcadeau->setGeometry(QRect(10, 20, 851, 571));
        trie_id_2 = new QPushButton(tab_8);
        trie_id_2->setObjectName(QStringLiteral("trie_id_2"));
        trie_id_2->setGeometry(QRect(820, 660, 141, 28));
        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        groupBox_5 = new QGroupBox(tab_9);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(180, 70, 561, 471));
        nomjoueur = new QLineEdit(groupBox_5);
        nomjoueur->setObjectName(QStringLiteral("nomjoueur"));
        nomjoueur->setGeometry(QRect(310, 140, 161, 22));
        Ajoutercadeau = new QPushButton(groupBox_5);
        Ajoutercadeau->setObjectName(QStringLiteral("Ajoutercadeau"));
        Ajoutercadeau->setGeometry(QRect(360, 370, 93, 28));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(70, 140, 91, 20));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(70, 180, 91, 20));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 290, 91, 20));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(70, 100, 91, 20));
        nom = new QLineEdit(groupBox_5);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(310, 100, 161, 22));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(70, 230, 91, 20));
        nomequipe = new QLineEdit(groupBox_5);
        nomequipe->setObjectName(QStringLiteral("nomequipe"));
        nomequipe->setGeometry(QRect(310, 190, 161, 22));
        date = new QDateEdit(groupBox_5);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(310, 240, 161, 22));
        nbr = new QSpinBox(groupBox_5);
        nbr->setObjectName(QStringLiteral("nbr"));
        nbr->setGeometry(QRect(310, 290, 42, 22));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        groupBox_6 = new QGroupBox(tab_10);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(210, 90, 561, 471));
        modifier_cadeau = new QPushButton(groupBox_6);
        modifier_cadeau->setObjectName(QStringLiteral("modifier_cadeau"));
        modifier_cadeau->setGeometry(QRect(360, 370, 93, 28));
        nomequipe1 = new QLineEdit(groupBox_6);
        nomequipe1->setObjectName(QStringLiteral("nomequipe1"));
        nomequipe1->setGeometry(QRect(330, 160, 161, 22));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 200, 91, 20));
        nomjoueur1 = new QLineEdit(groupBox_6);
        nomjoueur1->setObjectName(QStringLiteral("nomjoueur1"));
        nomjoueur1->setGeometry(QRect(330, 110, 161, 22));
        date1 = new QDateEdit(groupBox_6);
        date1->setObjectName(QStringLiteral("date1"));
        date1->setGeometry(QRect(330, 210, 161, 22));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(90, 260, 91, 20));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(90, 150, 91, 20));
        nom1 = new QLineEdit(groupBox_6);
        nom1->setObjectName(QStringLiteral("nom1"));
        nom1->setGeometry(QRect(330, 70, 161, 22));
        nbr1 = new QSpinBox(groupBox_6);
        nbr1->setObjectName(QStringLiteral("nbr1"));
        nbr1->setGeometry(QRect(330, 260, 42, 22));
        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(90, 70, 91, 20));
        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(90, 110, 91, 20));
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        groupBox_2 = new QGroupBox(tab_11);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 20, 921, 601));
        nom2 = new QLineEdit(groupBox_2);
        nom2->setObjectName(QStringLiteral("nom2"));
        nom2->setGeometry(QRect(190, 60, 461, 22));
        supprimer_cadeau = new QPushButton(groupBox_2);
        supprimer_cadeau->setObjectName(QStringLiteral("supprimer_cadeau"));
        supprimer_cadeau->setGeometry(QRect(380, 190, 93, 28));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 60, 91, 20));
        tabWidget_3->addTab(tab_11, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new imprimer(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1242, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        trie_id->setText(QApplication::translate("MainWindow", "Trie par id", Q_NULLPTR));
        recherhce_id->setText(QApplication::translate("MainWindow", "Rechercher par Nombre de tirs", Q_NULLPTR));
        recherhce_nom_2->setText(QApplication::translate("MainWindow", "Rechercher par nom", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "afficher emplacement", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_43->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Equipe1", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Email equipe1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Equipe2", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Email equipe2", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "ajouter emplacement", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_44->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Equipe1", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Email equipe1", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Equipe2", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Email equipe2", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "modifier emplacement", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "supprimer emplacement", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        trie_id_2->setText(QApplication::translate("MainWindow", "Trie par nombre de tirs", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Afficher Gestion Cadeaux", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Ajoutercadeau->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Nom du joueur", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Nom de l'equipe", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Nombre de tirs", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Nom du cadeau", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Date du Match", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        modifier_cadeau->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Date du Match", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Nombre de tirs", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Nom de l'equipe", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Nom du cadeau", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Nom du joueur", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        supprimer_cadeau->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Nom du cadeau", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Cadeau", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
