#pragma once

#include<string>
#include<array>
class Commodity
{
protected:

    std::string _no;   //商品编号
    std::string _name; //商品名称
    std::string _brand;  //品牌
    std::string _manufacturer; //厂家
    double _price;  //价格
    double _cost;  // 成本
    int _amount;    //库存数量
    bool _onSale;  //是否在售
    int _saleCount; //销量
public:
    Commodity() = default;
    Commodity(std::string no, std::string name, std::string brand,
              std::string manufacturer, double price, double cost, int amount,bool onSale,int saleCount);
    virtual ~Commodity() = default;
    //通过= default;，
    //我们告诉编译器使用默认的生成方式来创建这个构造函数。默认生成的构造函数会执行成员变量的默认初始化操作

    int getAmount(void);//返回库存数量
    int getSaleCount(void);//返回销量
    void setSaleCount(int c);//获得销售量
    std::string getManufacturer();//返回厂家
    double getPrice(void);
    void setPrice(double p);
    double getCost(void);//返回成本
    std::string getNo(void);//返回编号(string 类型)
    std::string getName(void);
    std::string getBrand(void);
    std::string getClassStr(void);//获得商品类型
    void setName(std::string name);
    void setCost(int c);
    void setManufacturer(std::string m);
    void setAmount(int a);
    bool onSale(void); //判断是否在售
    void setOffSale(); //下架商品
    void setBrand(std::string b);
    virtual int getKind(void)=0; //返回种类
    virtual double getWeiOrCapa(void)=0;//获得重量或容量
    virtual void setWeiOrCapa(double wc)=0;
    virtual std::string getKindStr(void)=0;
    virtual void setKind(int k)=0;  //重设商品类型
};

