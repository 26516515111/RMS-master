/********************************************************************************
** Form generated from reading UI file 'commidity.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMIDITY_H
#define UI_COMMIDITY_H

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

class Ui_Commidity
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Commidity)
    {
        if (Commidity->objectName().isEmpty())
            Commidity->setObjectName(QStringLiteral("Commidity"));
        Commidity->resize(1013, 784);
        pushButton = new QPushButton(Commidity);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 101, 61));
        label = new QLabel(Commidity);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 781, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(Commidity);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 80, 971, 391));
        lineEdit = new QLineEdit(Commidity);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 560, 241, 31));
        lineEdit_2 = new QLineEdit(Commidity);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(480, 560, 261, 31));
        lineEdit_3 = new QLineEdit(Commidity);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 630, 241, 31));
        lineEdit_4 = new QLineEdit(Commidity);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(480, 630, 261, 31));
        lineEdit_5 = new QLineEdit(Commidity);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 700, 241, 31));
        lineEdit_6 = new QLineEdit(Commidity);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(480, 700, 261, 31));
        label_2 = new QLabel(Commidity);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 560, 81, 31));
        label_3 = new QLabel(Commidity);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 620, 81, 41));
        label_4 = new QLabel(Commidity);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 700, 71, 41));
        label_5 = new QLabel(Commidity);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 560, 81, 31));
        label_6 = new QLabel(Commidity);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 620, 81, 41));
        label_7 = new QLabel(Commidity);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 690, 81, 51));
        label_8 = new QLabel(Commidity);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 490, 201, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(Commidity);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(820, 510, 131, 81));
        pushButton_3 = new QPushButton(Commidity);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(820, 640, 131, 91));

        retranslateUi(Commidity);

        QMetaObject::connectSlotsByName(Commidity);
    } // setupUi

    void retranslateUi(QWidget *Commidity)
    {
        Commidity->setWindowTitle(QApplication::translate("Commidity", "Form", 0));
        pushButton->setText(QApplication::translate("Commidity", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("Commidity", "\345\225\206\345\223\201\344\277\241\346\201\257\346\200\273\350\247\210\357\274\210\345\217\214\345\207\273\345\217\257\344\277\256\346\224\271\357\274\211", 0));
        label_2->setText(QApplication::translate("Commidity", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("Commidity", "\345\225\206\345\223\201\345\272\223\345\255\230\357\274\232", 0));
        label_4->setText(QApplication::translate("Commidity", "\344\276\233\345\272\224\345\225\206\345\220\215\347\247\260\357\274\232", 0));
        label_5->setText(QApplication::translate("Commidity", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        label_6->setText(QApplication::translate("Commidity", "\345\225\206\345\223\201\345\215\225\344\273\267\357\274\232", 0));
        label_7->setText(QApplication::translate("Commidity", "\347\224\237\344\272\247\346\227\245\346\234\237\357\274\232", 0));
        label_8->setText(QApplication::translate("Commidity", "\346\226\260\345\225\206\345\223\201\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("Commidity", "\346\267\273\345\212\240\345\225\206\345\223\201", 0));
        pushButton_3->setText(QApplication::translate("Commidity", "\345\210\240\351\231\244\345\225\206\345\223\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Commidity: public Ui_Commidity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMIDITY_H
