#ifndef DATABASE_H
#define DATABASE_H

#include<QSqlDatabase>
#include<QSqlQuery>
#include<QMessageBox>

class Database
{
public:

    static bool createConnection();

    Database();
};

#endif // DATABASE_H
