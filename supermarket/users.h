#ifndef USERS_H
#define USERS_H

#include <QWidget>
#include <QMessageBox>
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
#include "mainwindow.h"

namespace Ui {
class users;
}

class users : public QWidget
{
    Q_OBJECT

public:
    explicit users(QWidget *parent = 0);
    ~users();

private slots:
    //void on_pushButton_2_clicked();
    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::users *ui;
    QSqlDatabase database;
};

#endif // USERS_H
