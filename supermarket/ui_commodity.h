/********************************************************************************
** Form generated from reading UI file 'commodity.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITY_H
#define UI_COMMODITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Commodity
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Commodity)
    {
        if (Commodity->objectName().isEmpty())
            Commodity->setObjectName(QStringLiteral("Commodity"));
        Commodity->resize(800, 600);
        centralwidget = new QWidget(Commodity);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Commodity->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Commodity);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        Commodity->setMenuBar(menubar);
        statusbar = new QStatusBar(Commodity);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Commodity->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());

        retranslateUi(Commodity);

        QMetaObject::connectSlotsByName(Commodity);
    } // setupUi

    void retranslateUi(QMainWindow *Commodity)
    {
        Commodity->setWindowTitle(QApplication::translate("Commodity", "MainWindow", 0));
        menu->setTitle(QApplication::translate("Commodity", "\346\226\260\345\242\236\345\225\206\345\223\201", 0));
        menu_2->setTitle(QApplication::translate("Commodity", "\346\230\276\347\244\272\346\211\200\346\234\211\345\225\206\345\223\201", 0));
        menu_3->setTitle(QApplication::translate("Commodity", "\344\277\256\346\224\271\345\225\206\345\223\201\344\277\241\346\201\257", 0));
        menu_4->setTitle(QApplication::translate("Commodity", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Commodity: public Ui_Commodity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITY_H
