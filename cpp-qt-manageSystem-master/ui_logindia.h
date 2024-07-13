/********************************************************************************
** Form generated from reading UI file 'logindia.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIA_H
#define UI_LOGINDIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDia
{
public:
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QLineEdit *accountEdit;
    QLineEdit *pwdEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *chPwdEdit;
    QLabel *label_3;
    QLabel *imgLab;
    QPushButton *aboutBtn;

    void setupUi(QDialog *LoginDia)
    {
        if (LoginDia->objectName().isEmpty())
            LoginDia->setObjectName(QStringLiteral("LoginDia"));
        LoginDia->resize(692, 409);
        LoginDia->setMinimumSize(QSize(692, 409));
        LoginDia->setMaximumSize(QSize(692, 409));
        LoginDia->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background-color: rgb(38, 38, 38);"));
        okBtn = new QPushButton(LoginDia);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(140, 280, 151, 41));
        okBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"\n"
"border:none;\n"
"border-radius:8px"));
        cancelBtn = new QPushButton(LoginDia);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(360, 280, 151, 41));
        cancelBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"\n"
"border:none;\n"
"border-radius:8px"));
        accountEdit = new QLineEdit(LoginDia);
        accountEdit->setObjectName(QStringLiteral("accountEdit"));
        accountEdit->setGeometry(QRect(340, 100, 221, 51));
        accountEdit->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";"));
        pwdEdit = new QLineEdit(LoginDia);
        pwdEdit->setObjectName(QStringLiteral("pwdEdit"));
        pwdEdit->setGeometry(QRect(340, 200, 221, 51));
        pwdEdit->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";"));
        pwdEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(LoginDia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 110, 81, 41));
        label->setStyleSheet(QString::fromUtf8("font: 22pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255,255,255);\n"
""));
        label_2 = new QLabel(LoginDia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 200, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 22pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
""));
        chPwdEdit = new QPushButton(LoginDia);
        chPwdEdit->setObjectName(QStringLiteral("chPwdEdit"));
        chPwdEdit->setGeometry(QRect(140, 350, 151, 41));
        chPwdEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"\n"
"border:none;\n"
"border-radius:8px"));
        label_3 = new QLabel(LoginDia);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 10, 301, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 25pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255,255, 255);\n"
""));
        imgLab = new QLabel(LoginDia);
        imgLab->setObjectName(QStringLiteral("imgLab"));
        imgLab->setGeometry(QRect(80, 130, 90, 90));
        aboutBtn = new QPushButton(LoginDia);
        aboutBtn->setObjectName(QStringLiteral("aboutBtn"));
        aboutBtn->setGeometry(QRect(360, 350, 151, 41));
        aboutBtn->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"\n"
"border:none;\n"
"border-radius:8px"));

        retranslateUi(LoginDia);

        QMetaObject::connectSlotsByName(LoginDia);
    } // setupUi

    void retranslateUi(QDialog *LoginDia)
    {
        LoginDia->setWindowTitle(QApplication::translate("LoginDia", "\347\231\273\345\275\225", 0));
        okBtn->setText(QApplication::translate("LoginDia", "\347\241\256\345\256\232", 0));
        cancelBtn->setText(QApplication::translate("LoginDia", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("LoginDia", "\350\264\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("LoginDia", "\345\257\206\347\240\201:", 0));
        chPwdEdit->setText(QApplication::translate("LoginDia", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("LoginDia", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        imgLab->setText(QString());
        aboutBtn->setText(QApplication::translate("LoginDia", "\345\205\263\344\272\216\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDia: public Ui_LoginDia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIA_H
