/********************************************************************************
** Form generated from reading UI file 'users.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_H
#define UI_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_users
{
public:
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *users)
    {
        if (users->objectName().isEmpty())
            users->setObjectName(QStringLiteral("users"));
        users->resize(715, 731);
        pushButton = new QPushButton(users);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 111, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        pushButton->setFont(font);
        tableView = new QTableView(users);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 681, 451));
        label = new QLabel(users);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 531, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(users);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 550, 151, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(users);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 610, 171, 21));
        lineEdit_2 = new QLineEdit(users);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 660, 171, 21));
        lineEdit_3 = new QLineEdit(users);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(370, 610, 161, 21));
        lineEdit_4 = new QLineEdit(users);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(370, 660, 161, 21));
        label_3 = new QLabel(users);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 610, 71, 20));
        label_4 = new QLabel(users);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 610, 71, 20));
        label_5 = new QLabel(users);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 660, 71, 21));
        label_6 = new QLabel(users);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 660, 81, 21));
        pushButton_3 = new QPushButton(users);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(569, 540, 121, 71));
        pushButton_4 = new QPushButton(users);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 640, 121, 71));

        retranslateUi(users);

        QMetaObject::connectSlotsByName(users);
    } // setupUi

    void retranslateUi(QWidget *users)
    {
        users->setWindowTitle(QApplication::translate("users", "Form", 0));
        pushButton->setText(QApplication::translate("users", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("users", "\347\224\250\346\210\267\346\225\260\346\215\256\345\261\225\347\244\272\357\274\210\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257\357\274\211", 0));
        label_2->setText(QApplication::translate("users", "\346\226\260\345\221\230\345\267\245\344\277\241\346\201\257", 0));
        label_3->setText(QApplication::translate("users", "\345\221\230\345\267\245\347\274\226\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("users", "\345\221\230\345\267\245\345\247\223\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("users", "\345\257\206\347\240\201\357\274\232", 0));
        label_6->setText(QApplication::translate("users", "\345\221\230\345\267\245\347\261\273\345\236\213\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("users", "\346\267\273\345\212\240\346\226\260\345\221\230\345\267\245", 0));
        pushButton_4->setText(QApplication::translate("users", "\345\210\240\351\231\244\345\221\230\345\267\245", 0));
    } // retranslateUi

};

namespace Ui {
    class users: public Ui_users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H
