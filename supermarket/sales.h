#ifndef SALES_H
#define SALES_H

#include <QWidget>
#include "mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtDebug>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlRecord>
#include <QInputDialog>
#include <QStandardItem>
#include <QSqlQueryModel>
#include <QSqlTableModel>

namespace Ui {
class Sales;
}

class Sales : public QWidget
{
    Q_OBJECT

public:
    explicit Sales(QWidget *parent = 0);
    ~Sales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Sales *ui;
    QSqlDatabase database;


};

#endif // SALES_H
