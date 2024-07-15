#include "sales.h"
#include "ui_sales.h"

Sales::Sales(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sales)
{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/qtDatabase/database.db");

    if (!database.open()) {
            qDebug() << "数据库连接失败！";
            return;
        }

    //查询订单数
    QSqlQuery myquery;

    myquery.exec("SELECT * FROM odernumber where number >= 1");
    int number;

    if(myquery.next()){
         number = myquery.value(0).toInt();
    }else{
        qDebug() << "没有查询到结果";
    }

    //统计销售总额
    int i = number - 1001;//当前订单数量
    int j;

    if(i == 0){
        ui->lcdNumber->display(0);
    }else{
        int sumsum = 0;
        for(j = 0; j < i ; j++){
            int nowoder0 = 1001 + j;
            QString nowoder1 = QString::number(nowoder0);

            QString nowoder = "OrderNo_" + nowoder1;

            QSqlQuery query1;
            query1.exec(QString("SELECT * FROM %1 where 商品单价 >= 1").arg(nowoder));
            int sum = 0;

            while(query1.next()){
                sum += query1.value(5).toInt();
            }

            sumsum += sum;
        }

        ui->lcdNumber->display(sumsum);

    }

}

Sales::~Sales()
{
    delete ui;
}

void Sales::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
}

void Sales::on_pushButton_3_clicked()
{
    QString ordernumber = ui->lineEdit->text();
    QString tableName = "OrderNo_" + ordernumber;

    //当前订单总价显示
    QSqlQuery query1;
    query1.exec(QString("SELECT * FROM %1 where 商品单价 >= 1").arg(tableName));
    int sum = 0;

    while(query1.next()){
        sum += query1.value(5).toInt();
    }

    ui->lcdNumber_2->display(sum);

    QSqlTableModel *model = new QSqlTableModel(this, database);
    model->setTable(tableName);
    model->select();

    // 将模型设置给QTableView
    ui->tableView->setModel(model);


}
