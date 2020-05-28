/********************************************************************************
** Form generated from reading UI file 'gesempl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESEMPL_H
#define UI_GESEMPL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_gesempl
{
public:
    QFrame *frame_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QLabel *label;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QLineEdit *nom;
    QLineEdit *nom_2;
    QLineEdit *nom_3;
    QLineEdit *nom_4;
    QLineEdit *nom_5;
    QPushButton *pushButton;
    QTableView *tablemp;

    void setupUi(QDialog *gesempl)
    {
        if (gesempl->objectName().isEmpty())
            gesempl->setObjectName(QStringLiteral("gesempl"));
        gesempl->resize(1398, 788);
        gesempl->setStyleSheet(QLatin1String("background-color: rgb(179, 242, 255);\n"
""));
        frame_2 = new QFrame(gesempl);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 20, 221, 651));
        frame_2->setStyleSheet(QStringLiteral("background-image: url(:/back.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 560, 51, 51));
        pushButton_3->setStyleSheet(QLatin1String("*{\n"
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
        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(-180, 70, 401, 501));
        pushButton_7->setStyleSheet(QLatin1String("*{\n"
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
        commandLinkButton_3 = new QCommandLinkButton(frame_2);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(0, 230, 221, 41));
        commandLinkButton_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        commandLinkButton_4 = new QCommandLinkButton(frame_2);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(1, 290, 221, 41));
        commandLinkButton_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(gesempl);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 1181, 51));
        QFont font;
        font.setFamily(QStringLiteral("Berlin Sans FB"));
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 127);"));
        textEdit = new QTextEdit(gesempl);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(220, 300, 151, 45));
        textEdit->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_2 = new QTextEdit(gesempl);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(220, 350, 191, 45));
        textEdit_2->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_3 = new QTextEdit(gesempl);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(240, 250, 151, 45));
        textEdit_3->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_4 = new QTextEdit(gesempl);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(220, 450, 181, 45));
        textEdit_4->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        textEdit_5 = new QTextEdit(gesempl);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(220, 400, 151, 45));
        textEdit_5->setStyleSheet(QLatin1String("*\n"
"{\n"
"background:transparent;\n"
"border:none\n"
"}"));
        nom = new QLineEdit(gesempl);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(380, 450, 161, 22));
        nom_2 = new QLineEdit(gesempl);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setGeometry(QRect(380, 250, 161, 22));
        nom_3 = new QLineEdit(gesempl);
        nom_3->setObjectName(QStringLiteral("nom_3"));
        nom_3->setGeometry(QRect(380, 300, 161, 22));
        nom_4 = new QLineEdit(gesempl);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setGeometry(QRect(380, 350, 161, 22));
        nom_5 = new QLineEdit(gesempl);
        nom_5->setObjectName(QStringLiteral("nom_5"));
        nom_5->setGeometry(QRect(380, 400, 161, 22));
        pushButton = new QPushButton(gesempl);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 510, 75, 23));
        tablemp = new QTableView(gesempl);
        tablemp->setObjectName(QStringLiteral("tablemp"));
        tablemp->setGeometry(QRect(570, 190, 371, 341));

        retranslateUi(gesempl);

        QMetaObject::connectSlotsByName(gesempl);
    } // setupUi

    void retranslateUi(QDialog *gesempl)
    {
        gesempl->setWindowTitle(QApplication::translate("gesempl", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        commandLinkButton_3->setText(QApplication::translate("gesempl", "Gestion des cadeaux", Q_NULLPTR));
        commandLinkButton_4->setText(QApplication::translate("gesempl", "Gestion des emplacements", Q_NULLPTR));
        label->setText(QApplication::translate("gesempl", "                                      Gestion des emplacements", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("gesempl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom de l'\303\251quipe 1</span></p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("gesempl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">E-mail de l'\303\251quipe 1</span></p></body></html>", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("gesempl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">ID</span></p></body></html>", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("gesempl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">E-mail de l'\303\251quipe 2	</span></p></body></html>", Q_NULLPTR));
        textEdit_5->setHtml(QApplication::translate("gesempl", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:600; color:#00007f;\">Nom de l'\303\251quipe 2</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gesempl", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gesempl: public Ui_gesempl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESEMPL_H
