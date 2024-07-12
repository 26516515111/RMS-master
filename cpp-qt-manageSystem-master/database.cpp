#include "database.h"

QSqlDatabase Database::db1=QSqlDatabase::addDatabase("QSQLITE","connection1");
QSqlDatabase Database::db2=QSqlDatabase::addDatabase("QSQLITE","connection2");
QSqlDatabase Database::db3=QSqlDatabase::addDatabase("QSQLITE","connection3");
QSqlQuery* Database::sql_01 = nullptr;
QSqlQuery* Database::sql_02 = nullptr;
QSqlQuery* Database::sql_03 = nullptr;

bool Database::createConnection(){
    // 设置连接参数
    db1.setDatabaseName("user_db");

    db2.setDatabaseName("item_db");

    db3.setDatabaseName("order_db");
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

    // 初始化 QSqlQuery 指针
    sql_01 = new QSqlQuery(db1);
    sql_02 = new QSqlQuery(db2);
    sql_03 = new QSqlQuery(db3);

    sql_01->exec("create table user(account varchar(20) primary key,password int)");

    return true;
}


Database::Database() {}
