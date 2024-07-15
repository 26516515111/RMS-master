#ifndef COMMODITY_H
#define COMMODITY_H

#include <QMainWindow>

namespace Ui {
class Commodity;
}

class Commodity : public QMainWindow
{
    Q_OBJECT

public:
    explicit Commodity(QWidget *parent = 0);
    ~Commodity();

private:
    Ui::Commodity *ui;
};

#endif // COMMODITY_H
