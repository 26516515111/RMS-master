#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/qtDatabase/database.db");

    if (!database.open()) {
            qDebug() << "数据库连接失败！";
            return;
        }
    QSqlQuery myquery;

    /*
    bool success = myquery.exec("CREATE TABLE IF NOT EXISTS odernum(number VARCHAR PRIMARY KEY)");
    if(!success){
        qDebug() << "创建表失败:" << query1->lastError().text();
        QMessageBox::information(this, "失败", "用户数据库表创建失败！", QMessageBox::Ok);
    }
    */

    myquery.exec("SELECT * FROM odernumber where number >= 1");

    if(myquery.next()){
        int number = myquery.value(0).toInt();

        num = number;

    }else{
        qDebug() << "没有查询到结果";
    }

    sumsum = 0;
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_clicked()
{
    login *w = new login;
    w->show();
    this->close();
}

void MainWindow2::on_pushButton_3_clicked()
{
    QSqlQuery *query1 = new QSqlQuery;

    //表名不能是纯数字，可以使用一个合适的前缀或者其他命名方式
    QString tableName = "OrderNo_" + QString::number(num); // 使用"table_"前缀避免纯数字表名

        // 使用QSqlQuery的exec方法创建表
    bool success = query1->exec(QString("CREATE TABLE IF NOT EXISTS %1 ("
                                           "商品名称 VARCHAR PRIMARY KEY,"
                                           "商品单价 INTEGER,"
                                           "购买数量 INTEGER,"
                                           "供应商名称 VARCHAR,"
                                           "生产日期 VARCHAR,"
                                           "总价 INTEGER"
                                           ")").arg(tableName));


    if(!success){
        qDebug() << "创建表失败:" << query1->lastError().text();
        QMessageBox::information(this, "失败", "用户数据库表创建失败！", QMessageBox::Ok);
    }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable(tableName);
        model->select();

    // 将模型设置给QTableView
    ui->tableView->setModel(model);

    delete query1;

}

void MainWindow2::on_pushButton_2_clicked()
{
    bool addsuccess = false;

    QString id = ui->lineEdit->text();
    int number1 = ui->spinBox->value();
    QString number = QString::number(number1);

    QString tableName = "OrderNo_" + QString::number(num);

    QSqlQuery query1;
    query1.exec("SELECT * FROM table2 where 商品编号 >= 1");

    while(query1.next()){
        QString id1 = query1.value(0).toString();
        QString name1 = query1.value(1).toString();
        QString price1 = query1.value(3).toString();
        QString supplier1 = query1.value(4).toString();
        QString date1 = query1.value(5).toString();

        int sum = query1.value(3).toInt() * number1;
        int restoration1 = query1.value(2).toInt() - number1;
        QString newrestoration = QString::number(restoration1);

        QString sum1 = QString::number(sum);

        if(id1 == id){
            addsuccess = true;

            if(restoration1 <= 0){
                QMessageBox::warning(this, "添加失败", "库存不够！");
                break;
            }

            QSqlQuery query2;
            query2.prepare(QString("INSERT INTO %1 (商品名称,商品单价,购买数量,供应商名称,生产日期,总价) VALUES (?,?,?,?,?,?)").arg(tableName));

            query2.addBindValue(name1);
            query2.addBindValue(price1);
            query2.addBindValue(number);
            query2.addBindValue(supplier1);
            query2.addBindValue(date1);
            query2.addBindValue(sum1);

            //lcdnumber显示总价
            sumsum = sumsum + sum;
            ui->lcdNumber->display(sumsum);


            QSqlQuery query3;


            query3.prepare("UPDATE table2 SET 商品库存 = :newrestoration WHERE 商品编号 = :id");

            query3.addBindValue(newrestoration);
            query3.addBindValue(id);


            if(!query2.exec() || !query3.exec()){
                QMessageBox::warning(this, "添加失败", "请重新添加！");
            }else{
                ui->lineEdit->clear();
                ui->spinBox->clear();
                QMessageBox::information(this,tr("提示"),tr("添加成功！"));
            }
        }

    }

    if(!addsuccess){
        QMessageBox::warning(this, "添加失败", "不存在该商品！");
    }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable(tableName);
        model->select();

    // 将模型设置给QTableView
    ui->tableView->setModel(model);

}

void MainWindow2::on_pushButton_4_clicked()
{
    ui->tableView->setModel(nullptr);
    num = num + 1;

    QSqlQuery query;
    query.prepare("UPDATE odernumber SET number = :newnumber");

    query.bindValue(":newnumber",num);
    if (!query.exec()) {
        qDebug() << "更新失败:" << query.lastError().text();

    } else {
        qDebug() << "更新成功";
    }
    ui->lcdNumber->display(0);
    sumsum = 0;

}
