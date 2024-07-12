#include "database.h"


bool Database::createConnection(){
    QSqlDatabase db1=QSqlDatabase::addDatabase("QSQLITE","connection1");
    QSqlDatabase db2=QSqlDatabase::addDatabase("QSQLITE","connection2");
    QSqlDatabase db3=QSqlDatabase::addDatabase("QSQLITE","connection3");

    // 设置连接参数
    db1.setDatabaseName("user.db");

    db2.setDatabaseName("item.db");

    db3.setDatabaseName("order.db");
    // 打开连接
    if (!db1.open()) {
        QMessageBox::critical(0,"错误","连接数据数据库失败",QMessageBox::Cancel);
        return false;
    }

    if (!db2.open()) {
        QMessageBox::critical(0,"错误","连接数据数据库失败",QMessageBox::Cancel);
        return false;
    }

    if (!db3.open()) {
        QMessageBox::critical(0,"错误","连接数据数据库失败",QMessageBox::Cancel);
        return false;
    }


    return true;
}


Database::Database() {}
