#ifndef INPUTWIDGET_H
#define INPUTWIDGET_H

#include <QWidget>
#include"head/RepManager.h"
#include<QSqlDatabase>
#include<QSqlQuery>

namespace Ui {
class InputWidget;
}

class InputWidget : public QWidget
{
    Q_OBJECT

public:
    explicit InputWidget(char claasCh,QWidget *parent = nullptr,Commodity* com=nullptr);
    //explicit InputWidget(char claasCh,QWidget *parent = nullptr,QString *nid=nullptr);
    ~InputWidget();

private slots:

    void on_okBtn_released();
    void on_cancelBtn_released();

private:
    Ui::InputWidget *ui;
    RepManager rm;
    char _classCh;
    Commodity* _com;
    QString *nid;
    QSqlDatabase *db2;
    QSqlQuery *query2;
};

#endif // INPUTWIDGET_H
