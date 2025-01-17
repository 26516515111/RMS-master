#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("登录界面");

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/qtDatabase/database.db");

    if (!database.open()) {
            qDebug() << "数据库连接失败！";
            return;
        }
    bool loginSuccess = false;

    QSqlQuery mySqlQuery;

    mySqlQuery.exec("SELECT * FROM table1 where account >= 1");

    QString kindbotton;

    if(ui->radioButton->isChecked()){
        kindbotton = "1";
    }else{
        kindbotton = "2";
    }

    while(mySqlQuery.next())
    {
        QString account1 = mySqlQuery.value(2).toString();
        QString password1 = mySqlQuery.value(1).toString();
        QString kind1 = mySqlQuery.value(3).toString();
        if((account1 == username) && (password1 ==password) && (kind1 == kindbotton)){
             loginSuccess = true;
             if(kind1 == "1"){
                 MainWindow *mainwindow = new MainWindow();
                 mainwindow->show();
                 this->close();
             }else{
                 MainWindow2 *mainwindow2 = new MainWindow2;
                 mainwindow2->show();
                 this->close();
             }
        }
    }

    if (!loginSuccess)
        {
            QMessageBox::warning(this, "登录失败", "用户名或密码错误或选择职务错误，请重试。");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
        }
}

void login::on_pushButton_2_clicked()
{
    QMessageBox::about(this,tr("关于系统"),tr("制作者：向荟婷 吴雨轩 杨智羚 张鑫月"));
}
