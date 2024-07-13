#include "mainwindow.h"
#include"logindia.h"
#include <QApplication>
#include"database.h"

    //#define IS_DEBUG

    int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!Database::createConnection()){
        return 1;
    }

    MainWindow w;
#ifndef IS_DEBUG
    LoginDia logDia;
    logDia.exec();
    if(!logDia.canLog())
    {
        return 0;
    }

#endif
    w.show();
    return a.exec();
}
