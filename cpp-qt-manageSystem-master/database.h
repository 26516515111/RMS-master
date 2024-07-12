#ifndef DATABASE_H
#define DATABASE_H

#include<QSqlDatabase>
#include<QSqlQuery>
#include<QMessageBox>

class Database
{
    static QSqlDatabase db1;//用户数据库
    static QSqlDatabase db2;//商品数据库
    static QSqlDatabase db3;//订单数据库
public:

    static QSqlQuery* sql_01;//编辑用户数据库
    static QSqlQuery* sql_02;//编辑商品数据库
    static QSqlQuery* sql_03;//编辑订单数据库

    static bool createConnection();

    Database();
};

#endif // DATABASE_H
