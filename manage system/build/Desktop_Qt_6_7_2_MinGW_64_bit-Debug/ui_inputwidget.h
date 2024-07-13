/********************************************************************************
** Form generated from reading UI file 'inputwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWIDGET_H
#define UI_INPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *brandEdit;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *manuEdit;
    QLabel *label_4;
    QDoubleSpinBox *priceBox;
    QLabel *label_5;
    QDoubleSpinBox *costBox;
    QLabel *weiOrCapaLab;
    QDoubleSpinBox *weightOrCapaBox;
    QSpinBox *amountBox;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *kindBox;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *InputWidget)
    {
        if (InputWidget->objectName().isEmpty())
            InputWidget->setObjectName("InputWidget");
        InputWidget->resize(659, 410);
        InputWidget->setMinimumSize(QSize(659, 410));
        InputWidget->setMaximumSize(QSize(659, 410));
        InputWidget->setStyleSheet(QString::fromUtf8(".InputWidget\n"
"{\n"
"background-color:rgb(38,38,38);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QAbstractSpinBox\n"
"{\n"
"	font: 14pt \"\346\245\267\344\275\223\";\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	font: 14pt \"\346\245\267\344\275\223\";\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"	font: 14pt \"\346\245\267\344\275\223\";\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(InputWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 47, 80, 19));
        label->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        label_2 = new QLabel(InputWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(9, 119, 80, 19));
        label_2->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        brandEdit = new QLineEdit(InputWidget);
        brandEdit->setObjectName("brandEdit");
        brandEdit->setGeometry(QRect(95, 119, 176, 27));
        nameEdit = new QLineEdit(InputWidget);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(95, 47, 176, 27));
        nameEdit->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(InputWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(9, 191, 80, 19));
        label_3->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        manuEdit = new QLineEdit(InputWidget);
        manuEdit->setObjectName("manuEdit");
        manuEdit->setGeometry(QRect(95, 191, 176, 27));
        label_4 = new QLabel(InputWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(420, 60, 80, 19));
        label_4->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        priceBox = new QDoubleSpinBox(InputWidget);
        priceBox->setObjectName("priceBox");
        priceBox->setGeometry(QRect(526, 47, 124, 27));
        priceBox->setMinimum(0.010000000000000);
        priceBox->setMaximum(999999.000000000000000);
        label_5 = new QLabel(InputWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(420, 130, 80, 19));
        label_5->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        costBox = new QDoubleSpinBox(InputWidget);
        costBox->setObjectName("costBox");
        costBox->setGeometry(QRect(526, 119, 124, 27));
        costBox->setMinimum(0.010000000000000);
        costBox->setMaximum(999999.000000000000000);
        costBox->setSingleStep(1.000000000000000);
        costBox->setValue(1.000000000000000);
        weiOrCapaLab = new QLabel(InputWidget);
        weiOrCapaLab->setObjectName("weiOrCapaLab");
        weiOrCapaLab->setGeometry(QRect(420, 200, 80, 19));
        weiOrCapaLab->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        weightOrCapaBox = new QDoubleSpinBox(InputWidget);
        weightOrCapaBox->setObjectName("weightOrCapaBox");
        weightOrCapaBox->setGeometry(QRect(526, 191, 124, 27));
        weightOrCapaBox->setDecimals(2);
        weightOrCapaBox->setMinimum(0.010000000000000);
        weightOrCapaBox->setMaximum(999999.000000000000000);
        weightOrCapaBox->setSingleStep(1.000000000000000);
        weightOrCapaBox->setValue(1.000000000000000);
        amountBox = new QSpinBox(InputWidget);
        amountBox->setObjectName("amountBox");
        amountBox->setGeometry(QRect(526, 263, 121, 27));
        amountBox->setMinimum(1);
        amountBox->setMaximum(999999);
        label_7 = new QLabel(InputWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(420, 270, 80, 19));
        label_7->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        label_8 = new QLabel(InputWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(9, 263, 80, 19));
        label_8->setStyleSheet(QString::fromUtf8("	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\346\245\267\344\275\223\";"));
        kindBox = new QComboBox(InputWidget);
        kindBox->setObjectName("kindBox");
        kindBox->setGeometry(QRect(95, 263, 161, 27));
        okBtn = new QPushButton(InputWidget);
        okBtn->setObjectName("okBtn");
        okBtn->setGeometry(QRect(140, 340, 111, 25));
        okBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        cancelBtn = new QPushButton(InputWidget);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setGeometry(QRect(390, 340, 115, 25));
        cancelBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));

        retranslateUi(InputWidget);

        QMetaObject::connectSlotsByName(InputWidget);
    } // setupUi

    void retranslateUi(QWidget *InputWidget)
    {
        InputWidget->setWindowTitle(QCoreApplication::translate("InputWidget", "\350\276\223\345\205\245\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\345\223\201\347\211\214", nullptr));
        label_3->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\345\216\202\345\256\266", nullptr));
        label_4->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        label_5->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\346\210\220\346\234\254", nullptr));
        weiOrCapaLab->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\351\207\215\351\207\217", nullptr));
        label_7->setText(QCoreApplication::translate("InputWidget", "\345\272\223\345\255\230\346\225\260\351\207\217", nullptr));
        label_8->setText(QCoreApplication::translate("InputWidget", "\345\225\206\345\223\201\345\210\206\347\261\273", nullptr));
        okBtn->setText(QCoreApplication::translate("InputWidget", "\347\241\256\345\256\232", nullptr));
        cancelBtn->setText(QCoreApplication::translate("InputWidget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputWidget: public Ui_InputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWIDGET_H
