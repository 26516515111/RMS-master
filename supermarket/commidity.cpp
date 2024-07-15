#include "commidity.h"
#include "ui_commidity.h"

Commidity::Commidity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Commidity)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/qtDatabase/database.db");

    if (!database.open()) {
            qDebug() << "数据库连接失败！";
            return;
        }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable("table2");
        model->select();

    // 将模型设置给QTableView
    ui->tableView->setModel(model);

    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    connect(ui->tableView, &QTableView::doubleClicked, this, &Commidity::on_tableView_doubleClicked);
}

Commidity::~Commidity()
{
    delete ui;
}

void Commidity::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
}

void Commidity::on_tableView_doubleClicked(const QModelIndex &index)
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

void Commidity::on_pushButton_2_clicked()
{
    QSqlQuery *query1 = new QSqlQuery;

    query1->prepare("INSERT INTO table2 (商品编号,商品名称,商品库存,商品单价,供应商名称,生产日期) VALUES (?,?,?,?,?,?)");

    QString newid = ui->lineEdit->text();
    QString newname = ui->lineEdit_2->text();
    QString newrestoration = ui->lineEdit_3->text();
    QString newprice = ui->lineEdit_4->text();
    QString newsupplier = ui->lineEdit_5->text();
    QString newdate = ui->lineEdit_6->text();

    query1->addBindValue(newid);
    query1->addBindValue(newname);
    query1->addBindValue(newrestoration);
    query1->addBindValue(newprice);
    query1->addBindValue(newsupplier);
    query1->addBindValue(newdate);

    if(!query1->exec()){
        QMessageBox::warning(this, "添加失败", "请重新添加！");
    }else{
        QMessageBox::information(this,tr("提示"),tr("添加成功！"));
    }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable("table2");
        model->select();

    ui->tableView->setModel(model);

    delete query1;

}

void Commidity::on_pushButton_3_clicked()
{
    QString name = QInputDialog::getText(this,"输入","请输入要删除商品的名称:",QLineEdit::Normal);
    QSqlQuery *query1 = new QSqlQuery;
    query1->prepare("DELETE FROM table2 WHERE 商品名称 = :name");
    query1->bindValue(":name",name);

    if (!query1->exec()) {
        qDebug() << "删除失败：" << query1->lastError().text();
    } else {
        qDebug() << "删除成功";
    }

    QSqlTableModel *model = new QSqlTableModel(this, database);
        model->setTable("table2");
        model->select();

    ui->tableView->setModel(model);

    delete query1;

}
