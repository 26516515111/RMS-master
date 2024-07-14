#include "inputwidget.h"
#include "ui_inputwidget.h"
#include<QMessageBox>
#include<QSqlError>
InputWidget::InputWidget(char classCh,QWidget *parent,Commodity* com) :
    QWidget(parent),
    ui(new Ui::InputWidget),rm(),_classCh(classCh),_com(com)
{
    ui->setupUi(this);

    db2 = new QSqlDatabase(QSqlDatabase::database("connection2"));
    query2=new QSqlQuery(*db2);
    bool success = query2->exec("CREATE TABLE IF NOT EXISTS items ("
                                "id varchar PRIMARY KEY,"
                                "product_code varchar,"
                                "product_type varchar,"
                                "price REAL,"
                                "amount varchar,"
                                "brand varchar,"
                                "manufacturer varchar,"
                                "sales varchar,"
                                "cost REAL,"
                                "category varchar,"
                                "weight REAL,"
                                "UNIQUE(product_code, brand)"
                                ")");
    if(!success)
        QMessageBox::information(this,"失败","用户数据库表创建失败！",QMessageBox::Ok);


    QStringList kList ;
    switch(_classCh)
    {
    case'F':
        kList = {tr("熟食"), tr("生食"),tr("袋装食品")};
        break;
    case'C':
        kList={tr("美容"),tr("清洁"),tr("护肤")};
        break;
    case 'B':
        kList={tr("普通饮料"),tr("酒"),tr("碳酸饮料")};
        ui->weiOrCapaLab->setText(tr("商品容量"));
        break;
    case 'D':
        kList={tr("床上用品"),tr("厨房用品"),tr("电器"),tr("常用品")};
    }
    ui->kindBox->clear();
    ui->kindBox->addItems(kList); //设置下拉选择框内容

    if(com){
        query2->exec("select from *items");
        while(query2->next()){
            if(query2->value(0).toString()==*nid){
                //数据库中种类为数字，代表第一种或者第二种
                ui->kindBox->setCurrentIndex(query2->value(2).toInt());
                ui->nameEdit->setText(query2->value(1).toString());
                ui->brandEdit->setText(query2->value(5).toString());
                ui->manuEdit->setText(query2->value(6).toString());
                ui->priceBox->setValue(query2->value(3).toDouble());
                ui->costBox->setValue(query2->value(8).toDouble());
                ui->weightOrCapaBox->setValue(query2->value(10).toDouble());
                ui->amountBox->setValue(query2->value(4).toInt());
            }
        }
    }


    // if(com)
    // {
    //     ui->kindBox->setCurrentIndex(com->getKind());
    //     ui->nameEdit->setText(tr(com->getName().c_str()));
    //     ui->brandEdit->setText(tr(com->getBrand().c_str()));
    //     ui->manuEdit->setText(tr(com->getManufacturer().c_str()));
    //     ui->priceBox->setValue(com->getPrice());
    //     ui->costBox->setValue(com->getCost());
    //     ui->weightOrCapaBox->setValue((com->getWeiOrCapa()));
    //     ui->amountBox->setValue(com->getAmount());
    // }
}

InputWidget::~InputWidget()
{
    delete ui;
    delete query2;
}


void InputWidget::on_okBtn_released()  //录入信息
{
    int kind = ui->kindBox->currentIndex();
    string name = ui->nameEdit->text().toStdString();
    string brand = ui->brandEdit->text().toStdString();
    string manufacturer=ui->manuEdit->text().toStdString();
    double price = ui->priceBox->value();
    double cost = ui->costBox->value();
    double weiOrCapa=ui->weightOrCapaBox->value();
    int amount = ui->amountBox->value();
    if(brand==""||manufacturer==""||brand==""||cost<=0||
        price<=0||weiOrCapa<=0||amount<=0)
    {
        QMessageBox::critical(this,tr("错误"),tr("输入信息有误，请重新输入！"));
        return ;
    }


    if(_com) //修改
    {
        std::string no = _com->getNo();
        rm.setPricre(no,price);
        rm.setAmount(no,amount);
        _com->setName(name);
        _com->setCost(cost);
        _com->setManufacturer(manufacturer);
        _com->setBrand(brand);
        _com->setWeiOrCapa(weiOrCapa);
        _com->setKind(kind);
    }
    else //新增
    {
        if(rm.comExist(name,brand))  //查重 品牌+商品名 相同为重复
        {
            QMessageBox::information(this,tr("提示"),tr("该商品已存在！"));
            this->close();
            return;
        }
        switch (_classCh)
        {

        case 'F': //food

            rm.addFood(std::move(name),std::move(brand),std::move(manufacturer),
                       price,cost,amount,weiOrCapa,(Food::FoodKind)kind);
            break;
        case 'C':

            rm.addCosmetic(std::move(name),std::move(brand),std::move(manufacturer),
                           price,cost,amount,weiOrCapa,(Cosmetic::CosmeticKind)kind);
            break;
        case 'B':
            rm.addBeverage(std::move(name),std::move(brand),std::move(manufacturer),
                           price,cost,amount,weiOrCapa,(Beverage::BeverageKind)kind);
            break;
        case 'D':
            rm.addDaily(std::move(name),std::move(brand),std::move(manufacturer),
                        price,cost,amount,weiOrCapa,(Daily::DailyKind)kind);
            break;
        }
    }




    // 对于数据库的加入与删改
    QString Nid;
    QString kind1;

    if(_com){
        std::string no = _com->getNo();
        QSqlQuery updateQuery(*db2);
        updateQuery.prepare("UPDATE items SET product_code = :name, cost = :cost, manufacturer = :manufacturer, brand = :brand, weight = :weiOrCapa, product_type = :kind, price = :price, amount = :amount WHERE id = :id");
        updateQuery.bindValue(":name", QString::fromStdString(name));
        updateQuery.bindValue(":cost", cost);
        updateQuery.bindValue(":manufacturer", QString::fromStdString(manufacturer));
        updateQuery.bindValue(":brand", QString::fromStdString(brand));
        updateQuery.bindValue(":weiOrCapa", weiOrCapa);
        updateQuery.bindValue(":kind", kind);
        updateQuery.bindValue(":price", price);
        updateQuery.bindValue(":amount", amount);
        updateQuery.bindValue(":id", QString::fromStdString(no));


        if (!updateQuery.exec()) {
            qDebug() << "Update failed:" <<"插入失败";
        } else {
            qDebug() << "Update successful!";
        }
    }else {
        switch (_classCh) {
        case 'F': // food
            Nid = 'F' + QString::number(food_nid++);
            kind1 = "食物";
            break;
        case 'C': // cosmetic
            Nid = 'C' + QString::number(cosmetic_nid++);
            kind1 = "化装品";
            break;
        case 'B': // beverage
            Nid = 'B' + QString::number(beverage_nid++);
            kind1 = "酒水";
            break;
        case 'D': // daily
            Nid = 'D' + QString::number(daily_nid++);
            kind1 = "日用品";
            break;
        }


        query2->prepare("insert into items (id, product_code, product_type, price, amount, brand, manufacturer, sales, cost, category, weight) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
        query2->addBindValue(Nid);
        query2->addBindValue(ui->nameEdit->text());
        query2->addBindValue(kind1);
        query2->addBindValue(price);
        query2->addBindValue(amount);
        query2->addBindValue( ui->brandEdit->text());
        query2->addBindValue(ui->manuEdit->text());
        query2->addBindValue(0);
        query2->addBindValue(kind);
        query2->addBindValue(cost);
        query2->addBindValue(weiOrCapa);

        if (!query2->exec()) {
            qDebug() << "Insert failed:"<<query2->lastError().text();
        } else {
            qDebug() << "Insert successful!";
        }
    }




    QMessageBox::information(this,tr("提示"),tr("成功！"));
    this->close();
}


void InputWidget::on_cancelBtn_released()
{
    this->close();
}
