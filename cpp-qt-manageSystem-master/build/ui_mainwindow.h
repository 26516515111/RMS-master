/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *mainPg;
    QLabel *label;
    QPushButton *addBtn;
    QPushButton *showBtn;
    QPushButton *buyBtn;
    QPushButton *exitBtn;
    QPushButton *saleStatBtn;
    QPushButton *comManagerBtn;
    QLCDNumber *timeLcd;
    QLabel *gifLab;
    QWidget *buyPg;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *noEdit;
    QSpinBox *countBox;
    QPushButton *sureAddBtn;
    QPushButton *endBuyBtn;
    QLabel *label_5;
    QPushButton *backBtn;
    QTableWidget *saledComsTab;
    QLabel *label_12;
    QLCDNumber *totalLcd;
    QLabel *buyCarLab;
    QWidget *managerPg;
    QLabel *label_24;
    QTableWidget *comsManTab;
    QPushButton *backBtn_5;
    QLabel *label_25;
    QComboBox *searchKeyBox;
    QPushButton *startSeachBtn;
    QLabel *label_26;
    QPushButton *deleteBtn;
    QLabel *gifManLab;
    QWidget *saleStatPg;
    QPushButton *backBtn_3;
    QTableWidget *comTabRec;
    QLabel *label_9;
    QLineEdit *trIdEdit;
    QPushButton *searchBtn;
    QPushButton *changeBtn;
    QPushButton *returnBtn_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLCDNumber *totalMoneyLcd;
    QLCDNumber *sumRevenLcd;
    QLCDNumber *sumCostLcd;
    QPushButton *nextBtn;
    QPushButton *lastBtn;
    QLabel *moneyImgLab;
    QWidget *showPg;
    QPushButton *backBtn_2;
    QTableWidget *comsTab;
    QLabel *label_6;
    QComboBox *sortKeyBox;
    QComboBox *sortdirBox;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *displayBtn;
    QLabel *gifShowLab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1167, 688);
        MainWindow->setMinimumSize(QSize(1167, 688));
        MainWindow->setMaximumSize(QSize(1167, 688));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget\n"
"{\n"
"background-color: rgb(38, 38, 38);\n"
"\n"
"border:None;\n"
"margin:0 0 0 0;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QInputDialog\n"
"{\n"
"	color:white;\n"
"}\n"
"\n"
""));
        mainPg = new QWidget();
        mainPg->setObjectName("mainPg");
        label = new QLabel(mainPg);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 411, 91));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";"));
        addBtn = new QPushButton(mainPg);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(100, 180, 191, 51));
        addBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        showBtn = new QPushButton(mainPg);
        showBtn->setObjectName("showBtn");
        showBtn->setGeometry(QRect(430, 180, 191, 51));
        showBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px\n"
""));
        buyBtn = new QPushButton(mainPg);
        buyBtn->setObjectName("buyBtn");
        buyBtn->setGeometry(QRect(780, 180, 191, 51));
        buyBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        exitBtn = new QPushButton(mainPg);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(780, 300, 191, 51));
        exitBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px\n"
""));
        saleStatBtn = new QPushButton(mainPg);
        saleStatBtn->setObjectName("saleStatBtn");
        saleStatBtn->setGeometry(QRect(100, 300, 191, 51));
        saleStatBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        comManagerBtn = new QPushButton(mainPg);
        comManagerBtn->setObjectName("comManagerBtn");
        comManagerBtn->setGeometry(QRect(430, 300, 191, 51));
        comManagerBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        timeLcd = new QLCDNumber(mainPg);
        timeLcd->setObjectName("timeLcd");
        timeLcd->setGeometry(QRect(540, 430, 471, 91));
        timeLcd->setSmallDecimalPoint(false);
        timeLcd->setMode(QLCDNumber::Dec);
        timeLcd->setProperty("value", QVariant(1055.000000000000000));
        timeLcd->setProperty("intValue", QVariant(1055));
        gifLab = new QLabel(mainPg);
        gifLab->setObjectName("gifLab");
        gifLab->setGeometry(QRect(80, 420, 311, 121));
        stackedWidget->addWidget(mainPg);
        buyPg = new QWidget();
        buyPg->setObjectName("buyPg");
        label_3 = new QLabel(buyPg);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 410, 91, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";"));
        label_4 = new QLabel(buyPg);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 490, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";"));
        noEdit = new QLineEdit(buyPg);
        noEdit->setObjectName("noEdit");
        noEdit->setGeometry(QRect(470, 400, 161, 41));
        noEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        countBox = new QSpinBox(buyPg);
        countBox->setObjectName("countBox");
        countBox->setGeometry(QRect(470, 490, 81, 41));
        countBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        countBox->setMinimum(1);
        sureAddBtn = new QPushButton(buyPg);
        sureAddBtn->setObjectName("sureAddBtn");
        sureAddBtn->setGeometry(QRect(590, 480, 151, 51));
        sureAddBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        endBuyBtn = new QPushButton(buyPg);
        endBuyBtn->setObjectName("endBuyBtn");
        endBuyBtn->setGeometry(QRect(920, 260, 151, 51));
        endBuyBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        label_5 = new QLabel(buyPg);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(820, 430, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 25pt \"\346\245\267\344\275\223\";"));
        backBtn = new QPushButton(buyPg);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(0, 0, 131, 61));
        backBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        saledComsTab = new QTableWidget(buyPg);
        if (saledComsTab->columnCount() < 6)
            saledComsTab->setColumnCount(6);
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(15);
        font.setBold(true);
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        saledComsTab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(15);
        font1.setBold(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        saledComsTab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        saledComsTab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        saledComsTab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        saledComsTab->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        saledComsTab->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        saledComsTab->setObjectName("saledComsTab");
        saledComsTab->setGeometry(QRect(170, 120, 731, 241));
        saledComsTab->setStyleSheet(QString::fromUtf8(".QTableWidget\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"font: 17pt \"\346\245\267\344\275\223\";\n"
"}"));
        label_12 = new QLabel(buyPg);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(450, 10, 201, 91));
        label_12->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_12->setAlignment(Qt::AlignCenter);
        totalLcd = new QLCDNumber(buyPg);
        totalLcd->setObjectName("totalLcd");
        totalLcd->setGeometry(QRect(930, 420, 151, 51));
        totalLcd->setDigitCount(8);
        buyCarLab = new QLabel(buyPg);
        buyCarLab->setObjectName("buyCarLab");
        buyCarLab->setGeometry(QRect(620, 0, 141, 101));
        stackedWidget->addWidget(buyPg);
        managerPg = new QWidget();
        managerPg->setObjectName("managerPg");
        label_24 = new QLabel(managerPg);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(350, -10, 411, 91));
        label_24->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_24->setAlignment(Qt::AlignCenter);
        comsManTab = new QTableWidget(managerPg);
        if (comsManTab->columnCount() < 11)
            comsManTab->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        comsManTab->setHorizontalHeaderItem(10, __qtablewidgetitem16);
        comsManTab->setObjectName("comsManTab");
        comsManTab->setGeometry(QRect(0, 80, 1161, 321));
        comsManTab->setStyleSheet(QString::fromUtf8(".QTableWidget\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"font: 13pt \"\346\245\267\344\275\223\";\n"
"}"));
        backBtn_5 = new QPushButton(managerPg);
        backBtn_5->setObjectName("backBtn_5");
        backBtn_5->setGeometry(QRect(0, 0, 131, 61));
        backBtn_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        label_25 = new QLabel(managerPg);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(730, 430, 161, 51));
        label_25->setStyleSheet(QString::fromUtf8("font: 25pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        searchKeyBox = new QComboBox(managerPg);
        searchKeyBox->addItem(QString());
        searchKeyBox->addItem(QString());
        searchKeyBox->addItem(QString());
        searchKeyBox->addItem(QString());
        searchKeyBox->addItem(QString());
        searchKeyBox->setObjectName("searchKeyBox");
        searchKeyBox->setGeometry(QRect(900, 430, 91, 51));
        searchKeyBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        startSeachBtn = new QPushButton(managerPg);
        startSeachBtn->setObjectName("startSeachBtn");
        startSeachBtn->setGeometry(QRect(1000, 450, 71, 31));
        startSeachBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        label_26 = new QLabel(managerPg);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(0, 420, 351, 41));
        label_26->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        deleteBtn = new QPushButton(managerPg);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setGeometry(QRect(430, 420, 241, 61));
        deleteBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        gifManLab = new QLabel(managerPg);
        gifManLab->setObjectName("gifManLab");
        gifManLab->setGeometry(QRect(840, 500, 151, 151));
        stackedWidget->addWidget(managerPg);
        saleStatPg = new QWidget();
        saleStatPg->setObjectName("saleStatPg");
        backBtn_3 = new QPushButton(saleStatPg);
        backBtn_3->setObjectName("backBtn_3");
        backBtn_3->setGeometry(QRect(0, 0, 131, 61));
        backBtn_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        comTabRec = new QTableWidget(saleStatPg);
        if (comTabRec->columnCount() < 6)
            comTabRec->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font);
        comTabRec->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font1);
        comTabRec->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font1);
        comTabRec->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font1);
        comTabRec->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font1);
        comTabRec->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFont(font1);
        comTabRec->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        comTabRec->setObjectName("comTabRec");
        comTabRec->setGeometry(QRect(10, 120, 831, 301));
        comTabRec->setStyleSheet(QString::fromUtf8(".QTableWidget\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"font: 17pt \"\346\245\267\344\275\223\";\n"
"}"));
        label_9 = new QLabel(saleStatPg);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 460, 91, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";"));
        trIdEdit = new QLineEdit(saleStatPg);
        trIdEdit->setObjectName("trIdEdit");
        trIdEdit->setGeometry(QRect(160, 450, 161, 51));
        trIdEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        searchBtn = new QPushButton(saleStatPg);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(60, 510, 101, 31));
        searchBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        changeBtn = new QPushButton(saleStatPg);
        changeBtn->setObjectName("changeBtn");
        changeBtn->setGeometry(QRect(90, 560, 161, 31));
        changeBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        returnBtn_2 = new QPushButton(saleStatPg);
        returnBtn_2->setObjectName("returnBtn_2");
        returnBtn_2->setGeometry(QRect(220, 510, 101, 31));
        returnBtn_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        label_10 = new QLabel(saleStatPg);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(580, 430, 151, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";"));
        label_11 = new QLabel(saleStatPg);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(370, 10, 261, 91));
        label_11->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";"));
        label_11->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(saleStatPg);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(850, 160, 121, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";"));
        label_14 = new QLabel(saleStatPg);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(850, 250, 91, 31));
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        label_15 = new QLabel(saleStatPg);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(850, 350, 91, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        totalMoneyLcd = new QLCDNumber(saleStatPg);
        totalMoneyLcd->setObjectName("totalMoneyLcd");
        totalMoneyLcd->setGeometry(QRect(690, 430, 151, 51));
        totalMoneyLcd->setDigitCount(8);
        sumRevenLcd = new QLCDNumber(saleStatPg);
        sumRevenLcd->setObjectName("sumRevenLcd");
        sumRevenLcd->setGeometry(QRect(950, 240, 201, 51));
        sumRevenLcd->setDigitCount(11);
        sumCostLcd = new QLCDNumber(saleStatPg);
        sumCostLcd->setObjectName("sumCostLcd");
        sumCostLcd->setGeometry(QRect(950, 340, 201, 51));
        sumCostLcd->setDigitCount(11);
        nextBtn = new QPushButton(saleStatPg);
        nextBtn->setObjectName("nextBtn");
        nextBtn->setGeometry(QRect(330, 480, 51, 20));
        nextBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 1pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"\n"
"border:none;\n"
"border-radius:8px"));
        lastBtn = new QPushButton(saleStatPg);
        lastBtn->setObjectName("lastBtn");
        lastBtn->setGeometry(QRect(330, 450, 51, 20));
        lastBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 145, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 1pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"\n"
"border:none;\n"
"border-radius:8px"));
        moneyImgLab = new QLabel(saleStatPg);
        moneyImgLab->setObjectName("moneyImgLab");
        moneyImgLab->setGeometry(QRect(930, 30, 141, 101));
        stackedWidget->addWidget(saleStatPg);
        showPg = new QWidget();
        showPg->setObjectName("showPg");
        backBtn_2 = new QPushButton(showPg);
        backBtn_2->setObjectName("backBtn_2");
        backBtn_2->setGeometry(QRect(0, 0, 131, 61));
        backBtn_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        comsTab = new QTableWidget(showPg);
        if (comsTab->columnCount() < 11)
            comsTab->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(6, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(7, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(8, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(9, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        comsTab->setHorizontalHeaderItem(10, __qtablewidgetitem33);
        comsTab->setObjectName("comsTab");
        comsTab->setGeometry(QRect(0, 80, 1161, 401));
        comsTab->setStyleSheet(QString::fromUtf8(".QTableWidget\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"font: 13pt \"\346\245\267\344\275\223\";\n"
"}"));
        label_6 = new QLabel(showPg);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(440, 0, 261, 71));
        label_6->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);
        sortKeyBox = new QComboBox(showPg);
        sortKeyBox->addItem(QString());
        sortKeyBox->addItem(QString());
        sortKeyBox->addItem(QString());
        sortKeyBox->addItem(QString());
        sortKeyBox->setObjectName("sortKeyBox");
        sortKeyBox->setGeometry(QRect(580, 510, 111, 41));
        sortKeyBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        sortdirBox = new QComboBox(showPg);
        sortdirBox->addItem(QString());
        sortdirBox->addItem(QString());
        sortdirBox->setObjectName("sortdirBox");
        sortdirBox->setGeometry(QRect(580, 590, 111, 41));
        sortdirBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(showPg);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 500, 111, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_8 = new QLabel(showPg);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(390, 590, 111, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        displayBtn = new QPushButton(showPg);
        displayBtn->setObjectName("displayBtn");
        displayBtn->setGeometry(QRect(970, 550, 161, 71));
        displayBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.189944 rgba(202, 144, 87, 255), stop:0.726257 rgba(235, 148, 61, 255), stop:1 rgba(143, 143, 143, 255));\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"font-size:25px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"border-radius:8px"));
        gifShowLab = new QLabel(showPg);
        gifShowLab->setObjectName("gifShowLab");
        gifShowLab->setGeometry(QRect(200, 490, 171, 171));
        stackedWidget->addWidget(showPg);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1167, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        searchKeyBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        showBtn->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\211\200\346\234\211\345\225\206\345\223\201", nullptr));
        buyBtn->setText(QCoreApplication::translate("MainWindow", "\346\224\266\351\223\266\345\217\260", nullptr));
        exitBtn->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        saleStatBtn->setText(QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", nullptr));
        comManagerBtn->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        gifLab->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", nullptr));
        noEdit->setText(QString());
        noEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\225\206\345\223\201\345\217\267", nullptr));
        sureAddBtn->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        endBuyBtn->setText(QCoreApplication::translate("MainWindow", "\347\273\223\347\256\227", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\207\221\351\242\235", nullptr));
        backBtn->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem = saledComsTab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = saledComsTab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = saledComsTab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = saledComsTab->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = saledComsTab->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = saledComsTab->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\200\273\344\273\267", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\224\266\351\223\266\345\217\260", nullptr));
        buyCarLab->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = comsManTab->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = comsManTab->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = comsManTab->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = comsManTab->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = comsManTab->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = comsManTab->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\345\223\201\347\211\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = comsManTab->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\345\225\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = comsManTab->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\351\224\200\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = comsManTab->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\346\210\220\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = comsManTab->horizontalHeaderItem(9);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "\347\247\215\347\261\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = comsManTab->horizontalHeaderItem(10);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "\351\207\215(\345\256\271)\351\207\217", nullptr));
        backBtn_5->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", nullptr));
        searchKeyBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\217\267", nullptr));
        searchKeyBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\220\215", nullptr));
        searchKeyBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\223\201\347\211\214", nullptr));
        searchKeyBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\261\273\345\236\213", nullptr));
        searchKeyBox->setItemText(4, QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211 ", nullptr));

        startSeachBtn->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\345\217\214\345\207\273\345\225\206\345\223\201\345\217\267\345\217\257\344\277\256\346\224\271\345\257\271\345\272\224\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        deleteBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        gifManLab->setText(QString());
        backBtn_3->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = comTabRec->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = comTabRec->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = comTabRec->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = comTabRec->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "\345\224\256\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = comTabRec->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = comTabRec->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "\346\200\273\344\273\267", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\345\217\267:", nullptr));
        trIdEdit->setText(QString());
        trIdEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\256\242\345\215\225\345\217\267", nullptr));
        searchBtn->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        changeBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        returnBtn_2->setText(QCoreApplication::translate("MainWindow", "\351\200\200\350\264\247", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\207\221\351\242\235:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\344\277\241\346\201\257\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\200\273\350\220\245\344\270\232\351\242\235:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\200\273\346\210\220\346\234\254:", nullptr));
        nextBtn->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        lastBtn->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        moneyImgLab->setText(QString());
        backBtn_2->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = comsTab->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = comsTab->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = comsTab->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = comsTab->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = comsTab->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = comsTab->horizontalHeaderItem(5);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "\345\223\201\347\211\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = comsTab->horizontalHeaderItem(6);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\345\225\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = comsTab->horizontalHeaderItem(7);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "\351\224\200\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = comsTab->horizontalHeaderItem(8);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "\346\210\220\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = comsTab->horizontalHeaderItem(9);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "\347\247\215\347\261\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = comsTab->horizontalHeaderItem(10);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "\351\207\215(\345\256\271)\351\207\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\345\225\206\345\223\201", nullptr));
        sortKeyBox->setItemText(0, QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        sortKeyBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\346\225\260\351\207\217", nullptr));
        sortKeyBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        sortKeyBox->setItemText(3, QCoreApplication::translate("MainWindow", "\351\224\200\351\207\217", nullptr));

        sortdirBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        sortdirBox->setItemText(1, QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\344\276\235\346\215\256\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\350\247\204\345\210\231\357\274\232", nullptr));
        displayBtn->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        gifShowLab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
