/********************************************************************************
** Form generated from reading UI file 'sales.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_H
#define UI_SALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sales
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;

    void setupUi(QWidget *Sales)
    {
        if (Sales->objectName().isEmpty())
            Sales->setObjectName(QStringLiteral("Sales"));
        Sales->resize(892, 769);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        Sales->setFont(font);
        pushButton = new QPushButton(Sales);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 121, 51));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        label = new QLabel(Sales);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 10, 271, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(16);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(Sales);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 80, 851, 541));
        lineEdit = new QLineEdit(Sales);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 700, 231, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        lineEdit->setFont(font3);
        pushButton_3 = new QPushButton(Sales);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 650, 231, 31));
        pushButton_3->setFont(font3);
        label_2 = new QLabel(Sales);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 640, 171, 31));
        label_2->setFont(font3);
        lcdNumber = new QLCDNumber(Sales);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(610, 690, 221, 61));
        label_3 = new QLabel(Sales);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 639, 141, 31));
        label_3->setFont(font3);
        lcdNumber_2 = new QLCDNumber(Sales);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(340, 690, 211, 61));

        retranslateUi(Sales);

        QMetaObject::connectSlotsByName(Sales);
    } // setupUi

    void retranslateUi(QWidget *Sales)
    {
        Sales->setWindowTitle(QApplication::translate("Sales", "Form", 0));
        pushButton->setText(QApplication::translate("Sales", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("Sales", "\351\224\200\345\224\256\347\273\237\350\256\241", 0));
        pushButton_3->setText(QApplication::translate("Sales", "\347\202\271\345\207\273\346\237\245\350\257\242\350\256\242\345\215\225\357\274\232", 0));
        label_2->setText(QApplication::translate("Sales", "\346\211\200\346\234\211\350\256\242\345\215\225\346\200\273\346\224\266\345\205\245\357\274\232", 0));
        label_3->setText(QApplication::translate("Sales", "\350\257\245\350\256\242\345\215\225\346\224\266\345\205\245\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Sales: public Ui_Sales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_H
