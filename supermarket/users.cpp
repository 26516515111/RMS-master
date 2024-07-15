#include "users.h"
#include "ui_users.h"

users::users(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::users)
{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/qtDatabase/database.db");

    if (!database.open()) {
            qDebug() << "数据库连接失败！";
            return;
        }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable("table1");
        model->select();

    // 将模型设置给QTableView
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    connect(ui->tableView, &QTableView::doubleClicked, this, &users::on_tableView_doubleClicked);

}

users::~users()
{
    delete ui;
}

/*
void users::on_pushButton_2_clicked()
{
    QSqlQuery *query1 = new QSqlQuery;

    QString account2 = QInputDialog::getText(this,"输入","请输入要修改密码的账户:",QLineEdit::Normal);

    QString oriPwd = QInputDialog::getText(this,"输入","请输入旧密码:", QLineEdit::Password);
    bool editsuccess = false;

    if(!query1->exec("select * from table1")){
        qDebug() << "查询失败：" ;
    }

    while(query1->next()){
        QString account1 = query1->value(2).toString();
        QString password1 = query1->value(1).toString();

        if((account2 == account1) && (password1 == oriPwd)){
            editsuccess = true;

            QString newPwd = QInputDialog::getText(this,"输入","请输入新密码:",QLineEdit::Password);

            query1->prepare("UPDATE table1 SET password = :newpassword WHERE name = :name");

            query1->bindValue(":newpassword",newPwd);

            query1->bindValue(":name",account2);

            if(query1->exec()){
                QMessageBox::information(this,tr("提示"),tr("修改成功！"));
            }else {
                QMessageBox::warning(this, "错误", "密码修改失败：");
            }

            break;
        }

    }

    if(!editsuccess){
        QMessageBox::critical(this,tr("错误"),tr("原密码错误"));
    }

    delete query1;

}

*/


void users::on_tableView_doubleClicked(const QModelIndex &index)
{
    QVariant data = index.data(Qt::EditRole);

    bool ok;
    QString newText = QInputDialog::getText(this, "修改信息", "New value:", QLineEdit::Normal, data.toString(), &ok);
    if (ok && !newText.isEmpty()) {
        // 获取模型
        QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
        if (!model) {
            qDebug() << "Model is not QSqlTableModel!";
            return;
        }

        // 更新数据
        model->setData(index, newText);
        if (!model->submitAll()) {
            qDebug() << "Failed to update database:" << model->lastError().text();
        }
    }
}



void users::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
}

void users::on_pushButton_3_clicked()
{
    QSqlQuery *query1 = new QSqlQuery;

    query1->prepare("INSERT INTO table1 (account,password,name,kind) VALUES (?,?,?,?)");

    QString newaccount = ui->lineEdit->text();
    QString newpassword = ui->lineEdit_2->text();
    QString newname = ui->lineEdit_3->text();
    QString newkind = ui->lineEdit_4->text();

    query1->addBindValue(newaccount);
    query1->addBindValue(newpassword);
    query1->addBindValue(newname);
    query1->addBindValue(newkind);

    if(!query1->exec()){
        QMessageBox::warning(this, "添加失败", "请重新添加！");
    }else{
        QMessageBox::information(this,tr("提示"),tr("添加成功！"));
    }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable("table1");
        model->select();

    ui->tableView->setModel(model);

    delete query1;
}

void users::on_pushButton_4_clicked()
{
    QString account1 = QInputDialog::getText(this,"输入","请输入要删除员工的编号:",QLineEdit::Normal);
    QSqlQuery *query1 = new QSqlQuery;
    query1->prepare("DELETE FROM table1 WHERE account = :account1");
    query1->bindValue(":account1",account1);

    if (!query1->exec()) {
        qDebug() << "删除失败：" << query1->lastError().text();
    } else {
        qDebug() << "删除成功";
    }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable("table1");
        model->select();

    ui->tableView->setModel(model);

    delete query1;
}
