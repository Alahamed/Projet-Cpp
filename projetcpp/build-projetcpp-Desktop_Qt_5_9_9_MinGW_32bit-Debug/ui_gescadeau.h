/********************************************************************************
** Form generated from reading UI file 'gescadeau.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESCADEAU_H
#define UI_GESCADEAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gescadeau
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QLineEdit *nomjoueur;
    QLineEdit *nom;
    QLineEdit *nomequipe;
    QSpinBox *nbr;
    QDateEdit *date;
    QDateEdit *date1;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_7;
    QLineEdit *nom1;
    QLineEdit *nomjoueur1;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_10;
    QSpinBox *nbr1;
    QLineEdit *nomequipe1;
    QPushButton *pushButton_5;
    QTableView *tabcadeau;
    QPushButton *modifier_cadeau;
    QPushButton *supprimer_cadeau;
    QTextEdit *textEdit_17;
    QLineEdit *nom2;
    QPushButton *reloadd;
    QPushButton *print;
    QLabel *label;
    QLineEdit *idr;
    QPushButton *pushButton_7;
    QPushButton *up;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gescadeau)
    {
        if (gescadeau->objectName().isEmpty())
            gescadeau->setObjectName(QStringLiteral("gescadeau"));
        gescadeau->resize(1398, 788);
        gescadeau->setStyleSheet(QStringLiteral("background-color: rgb(179, 242, 255);"));
        centralwidget = new QWidget(gescadeau);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 20, 221, 651));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/back.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 560, 51, 51));
        pushButton_2->setStyleSheet(QLatin1String("*{\n"
"width: 10px;\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/exit.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"width: 10px;\n"
"background-color: transparent;\n"
"\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/exit1.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(-180, 70, 401, 501));
        pushButton_6->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"	background-image: url(:/man.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"}"));
        commandLinkButton = new QCommandLinkButton(frame);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 230, 221, 41));
        commandLinkButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        commandLinkButton_2 = new QCommandLinkButton(frame);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(1, 290, 221, 41));
        commandLinkButton_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(220, 310, 151, 45));
        textEdit->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(220, 360, 151, 45));
        textEdit_2->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(220, 510, 151, 45));
        textEdit_3->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_5 = new QTextEdit(centralwidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(220, 410, 151, 45));
        textEdit_5->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_6 = new QTextEdit(centralwidget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setEnabled(false);
        textEdit_6->setGeometry(QRect(220, 460, 151, 45));
        textEdit_6->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        nomjoueur = new QLineEdit(centralwidget);
        nomjoueur->setObjectName(QStringLiteral("nomjoueur"));
        nomjoueur->setGeometry(QRect(350, 360, 161, 22));
        nom = new QLineEdit(centralwidget);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(350, 310, 161, 22));
        nomequipe = new QLineEdit(centralwidget);
        nomequipe->setObjectName(QStringLiteral("nomequipe"));
        nomequipe->setGeometry(QRect(350, 410, 161, 22));
        nbr = new QSpinBox(centralwidget);
        nbr->setObjectName(QStringLiteral("nbr"));
        nbr->setGeometry(QRect(350, 510, 42, 22));
        date = new QDateEdit(centralwidget);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(350, 460, 161, 22));
        date1 = new QDateEdit(centralwidget);
        date1->setObjectName(QStringLiteral("date1"));
        date1->setGeometry(QRect(1180, 460, 161, 22));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(1050, 310, 151, 45));
        textEdit_4->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_7 = new QTextEdit(centralwidget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setEnabled(false);
        textEdit_7->setGeometry(QRect(1050, 460, 151, 45));
        textEdit_7->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        nom1 = new QLineEdit(centralwidget);
        nom1->setObjectName(QStringLiteral("nom1"));
        nom1->setGeometry(QRect(1180, 310, 161, 22));
        nomjoueur1 = new QLineEdit(centralwidget);
        nomjoueur1->setObjectName(QStringLiteral("nomjoueur1"));
        nomjoueur1->setGeometry(QRect(1180, 360, 161, 22));
        textEdit_8 = new QTextEdit(centralwidget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setEnabled(false);
        textEdit_8->setGeometry(QRect(1050, 360, 151, 45));
        textEdit_8->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_9 = new QTextEdit(centralwidget);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setEnabled(false);
        textEdit_9->setGeometry(QRect(1050, 410, 151, 45));
        textEdit_9->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_10 = new QTextEdit(centralwidget);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setEnabled(false);
        textEdit_10->setGeometry(QRect(1050, 510, 151, 45));
        textEdit_10->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        nbr1 = new QSpinBox(centralwidget);
        nbr1->setObjectName(QStringLiteral("nbr1"));
        nbr1->setGeometry(QRect(1180, 510, 42, 22));
        nomequipe1 = new QLineEdit(centralwidget);
        nomequipe1->setObjectName(QStringLiteral("nomequipe1"));
        nomequipe1->setGeometry(QRect(1180, 410, 161, 22));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(320, 220, 141, 61));
        pushButton_5->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/ajout.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"}"));
        tabcadeau = new QTableView(centralwidget);
        tabcadeau->setObjectName(QStringLiteral("tabcadeau"));
        tabcadeau->setGeometry(QRect(520, 230, 521, 331));
        tabcadeau->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 127);"));
        modifier_cadeau = new QPushButton(centralwidget);
        modifier_cadeau->setObjectName(QStringLiteral("modifier_cadeau"));
        modifier_cadeau->setGeometry(QRect(1170, 220, 141, 61));
        modifier_cadeau->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/modifbtn.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}"));
        supprimer_cadeau = new QPushButton(centralwidget);
        supprimer_cadeau->setObjectName(QStringLiteral("supprimer_cadeau"));
        supprimer_cadeau->setGeometry(QRect(900, 560, 121, 51));
        supprimer_cadeau->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/suppbtn.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}"));
        textEdit_17 = new QTextEdit(centralwidget);
        textEdit_17->setObjectName(QStringLiteral("textEdit_17"));
        textEdit_17->setEnabled(false);
        textEdit_17->setGeometry(QRect(540, 570, 331, 45));
        textEdit_17->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        nom2 = new QLineEdit(centralwidget);
        nom2->setObjectName(QStringLiteral("nom2"));
        nom2->setGeometry(QRect(770, 570, 151, 26));
        nom2->setStyleSheet(QLatin1String("*\n"
"{\n"
"border:none;\n"
"font-size:20px;\n"
"background-color:white; \n"
"border: none; \n"
"border-radius: 10px; \n"
"padding: 0 8px; \n"
"selection-background-color: white; \n"
"}"));
        reloadd = new QPushButton(centralwidget);
        reloadd->setObjectName(QStringLiteral("reloadd"));
        reloadd->setGeometry(QRect(520, 180, 41, 41));
        reloadd->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/reload.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}"));
        print = new QPushButton(centralwidget);
        print->setObjectName(QStringLiteral("print"));
        print->setGeometry(QRect(580, 180, 41, 41));
        print->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/print.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 60, 1181, 51));
        QFont font;
        font.setFamily(QStringLiteral("Berlin Sans FB"));
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 127);"));
        idr = new QLineEdit(centralwidget);
        idr->setObjectName(QStringLiteral("idr"));
        idr->setGeometry(QRect(700, 185, 211, 32));
        idr->setStyleSheet(QLatin1String("*{\n"
"background-color:white; \n"
"border: none; \n"
"border-radius: 10px; \n"
"padding: 0 8px; \n"
"selection-background-color: white; \n"
" font-size: 16px;\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(670, 180, 41, 42));
        pushButton_7->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/cherchbtn.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"border-image: url(C:/Users/HP/Desktop/projet/image/cherchbtnpr.png);\n"
"\n"
"}"));
        up = new QPushButton(centralwidget);
        up->setObjectName(QStringLiteral("up"));
        up->setGeometry(QRect(940, 180, 44, 44));
        up->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"	background-image: url(:/triup.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}"));
        gescadeau->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(gescadeau);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gescadeau->setStatusBar(statusbar);

        retranslateUi(gescadeau);

        QMetaObject::connectSlotsByName(gescadeau);
    } // setupUi

    void retranslateUi(QMainWindow *gescadeau)
    {
        gescadeau->setWindowTitle(QApplication::translate("gescadeau", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        commandLinkButton->setText(QApplication::translate("gescadeau", "Gestion des cadeaux", Q_NULLPTR));
        commandLinkButton_2->setText(QApplication::translate("gescadeau", "Gestion des emplacements", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom du cadeau</span></p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom du joueur</span></p></body></html>", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nombre de tirs</span></p></body></html>", Q_NULLPTR));
        textEdit_5->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom de l'\303\251quipe</span></p></body></html>", Q_NULLPTR));
        textEdit_6->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Date du match </span></p></body></html>", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom du cadeau</span></p></body></html>", Q_NULLPTR));
        textEdit_7->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Date du match </span></p></body></html>", Q_NULLPTR));
        textEdit_8->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom du joueur</span></p></body></html>", Q_NULLPTR));
        textEdit_9->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom de l'\303\251quipe</span></p></body></html>", Q_NULLPTR));
        textEdit_10->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nombre de tirs</span></p></body></html>", Q_NULLPTR));
        pushButton_5->setText(QString());
        modifier_cadeau->setText(QString());
        supprimer_cadeau->setText(QString());
        textEdit_17->setHtml(QApplication::translate("gescadeau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom du cadeau \303\240 supprimer</span></p></body></html>", Q_NULLPTR));
        reloadd->setText(QString());
        print->setText(QString());
        label->setText(QApplication::translate("gescadeau", "                                      Gestion des cadeaux", Q_NULLPTR));
        pushButton_7->setText(QString());
        up->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gescadeau: public Ui_gescadeau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESCADEAU_H
