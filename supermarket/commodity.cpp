#include "commodity.h"
#include "ui_commodity.h"

Commodity::Commodity(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Commodity)
{
    ui->setupUi(this);
}

Commodity::~Commodity()
{
    delete ui;
}
