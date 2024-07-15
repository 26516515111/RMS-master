#ifndef COMMIDITY_H
#define COMMIDITY_H

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
class Commidity;
}

class Commidity : public QWidget
{
    Q_OBJECT

public:
    explicit Commidity(QWidget *parent = 0);
    ~Commidity();

private slots:
    void on_pushButton_clicked();
    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Commidity *ui;
    QSqlDatabase database;
};

#endif // COMMIDITY_H
