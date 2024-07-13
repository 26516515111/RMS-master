#include "logindia.h"
#include "ui_logindia.h"
#include<QInputDialog>
//#include<fstream>

LoginDia::LoginDia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDia)
{
    _canLog=false;
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/rc/n133f35jvek.jpg"));
    QImage* keyImg=new QImage(":/new/prefix1/rc/key.png");
    ui->imgLab->setScaledContents(true);
    ui->imgLab->setPixmap(QPixmap::fromImage(*keyImg));




    db1 = new QSqlDatabase (QSqlDatabase::database("connection1"));
    query1 = new QSqlQuery(*db1);
    bool success=query1->exec("CREATE TABLE IF NOT EXISTS users(account vachar PRIMARY KEY,password vachar)");
    if(!success)
        QMessageBox::information(this,"失败","用户数据库表创建失败！",QMessageBox::Ok);



    //将密码写入记事本-->改为数据库
    /*std::ifstream ifs("passWord.pwd");
    if(ifs.is_open())
    {
        std::string buff;
        ifs>>buff;
        _passWord = buff.c_str();
        ifs.close();
    }
    else  //不存在密码文件
    {

        bool  ok=false;
        _passWord = QInputDialog::getText(this,"设置密码","请输入新密码:",QLineEdit::Password,"",&ok);
        if(!ok)
        {
            this->close();
        }
        std::ofstream ofs("passWord.pwd");
        ofs<<_passWord.toStdString();
        ofs.close();
    }*///以上均可以改动==创建manager数据库（未实现）



}

LoginDia::~LoginDia()
{
    delete ui;
    delete query1;
    db1->close();

}

bool LoginDia::canLog()
{
    return _canLog;
}




void LoginDia::on_cancelBtn_released()  //关闭窗口
{
    this->close();
}



void LoginDia::on_okBtn_clicked()//按确定按钮登录
{
    QString account1 = ui->accountEdit->text();
    QString password1 = ui->pwdEdit->text();

    query1->exec("select * from users");

    while(query1->next()){
        if((account1 ==query1->value(0).toString() ) && (password1 == query1->value(1).toString())){
            _canLog=true;
            this->close();
        }
    }

    if(!_canLog){
        QMessageBox::critical(this,tr("错误"),tr("密码错误，请重新输入"));
    }

}



// void LoginDia::on_chPwdEdit_released() //改密码
// {
//     //改密码前先确认账户
//     bool ok;
//     auto oriPwd = QInputDialog::getText(this,"输入","请输入旧密码:",
//                                         QLineEdit::Password,"",&ok);
//     if(ok)
//     {
//         if(oriPwd==_passWord)
//         {
//             auto newPwd = QInputDialog::getText(this,"输入","请输入新密码:",QLineEdit::Password,"",&ok);
//             if(ok)
//             {
//                 _passWord = newPwd;
//                 QMessageBox::information(this,tr("提示"),tr("修改成功！"));
//             }
//         }
//         else
//         {
//             QMessageBox::critical(this,tr("错误"),tr("原密码错误"));
//         }
//     }
// }


void LoginDia::on_aboutBtn_released()
{
    QMessageBox::about(this,tr("关于系统"),tr("制作者：向荟婷 吴雨轩 杨智羚 张鑫月\n\n系统版本：V1.0\n\nQt版本：Qt 6.7.2"));
}



void LoginDia::on_pushButton_clicked()
{
    query1->prepare("INSERT INTO users (account,password) VALUES (?,?)");

    QString account1 = ui->accountEdit->text();
    QString password1 = ui->pwdEdit->text();

    query1->addBindValue(account1);
    query1->addBindValue(password1);


    if(!query1->exec()){
        QMessageBox::warning(this, "注册失败", "请重新注册！");
    }else{
        QMessageBox::information(this,tr("提示"),tr("注册成功！请重新输入密码"));
    }

    ui->pwdEdit->clear();
}


void LoginDia::on_chPwdEdit_clicked()
{

}

