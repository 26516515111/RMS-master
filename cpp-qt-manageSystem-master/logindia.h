#ifndef LOGINDIA_H
#define LOGINDIA_H

#include <QDialog>
#include <database.h>

namespace Ui {
class LoginDia;
}

class LoginDia : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDia(QWidget *parent = nullptr);
    ~LoginDia();
    bool canLog();
private slots:


    //void on_okBtn_released();

    void on_cancelBtn_released();

    //void on_chPwdEdit_released();

    void on_aboutBtn_released();

    void on_okBtn_clicked();
    
    void on_pushButton_clicked();
    
private:
    Ui::LoginDia *ui;
    QString _passWord;
    bool _canLog;
    QSqlDatabase *db1;
    QSqlQuery *query1;
};

#endif // LOGINDIA_H
