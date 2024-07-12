#include "logindia.h"
#include "ui_logindia.h"
#include<QInputDialog>
#include<QMessageBox>
#include<fstream>
#include<QSqlQuery>

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
    std::ofstream ofs("password.pwd");
    ofs<<_passWord.toStdString();//关闭数据库（未实现）
}

bool LoginDia::canLog()
{
    return _canLog;
}

void LoginDia::on_okBtn_released()  //确定密码
{

    //从数据库中的manager与customer中查询并检索（未实现）
    if(ui->pwdEdit->text() ==_passWord&&ui->accountEdit->text()==QString("admin"))
    {
        _canLog=true;
        this->close();
    }

    else
    {
        QMessageBox::critical(this,tr("错误"),tr("密码错误，请重新输入"));
    }

}


void LoginDia::on_cancelBtn_released()  //关闭窗口
{
    this->close();
}


void LoginDia::on_chPwdEdit_released() //改密码
{


    //改密码前先确认账户
    bool ok;
    auto oriPwd = QInputDialog::getText(this,"输入","请输入旧密码:",
                                        QLineEdit::Password,"",&ok);
    if(ok)
    {
        if(oriPwd==_passWord)
        {
            auto newPwd = QInputDialog::getText(this,"输入","请输入新密码:",QLineEdit::Password,"",&ok);
            if(ok)
            {
                _passWord = newPwd;
                QMessageBox::information(this,tr("提示"),tr("修改成功！"));
            }
        }
        else
        {
            QMessageBox::critical(this,tr("错误"),tr("原密码错误"));
        }
    }
}


void LoginDia::on_aboutBtn_released()
{
    QMessageBox::about(this,tr("关于系统"),tr("制作者：向荟婷 吴雨轩 杨智羚 张鑫月\n\n系统版本：V1.0\n\nQt版本：Qt 6.7.2"));
}

