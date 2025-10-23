#pragma once
#include <string>
using namespace std;

class Goods
{
private:
    string name;
    string date;
    double price;
    int quantity;
    string invoice;

public:
    Goods();
    Goods(string n, string d, double p, int q, string inv);
    Goods(const Goods& g);

    void Init(string n, string d, double p, int q, string inv);
    void Read();
    void Display();
    string toString();

    void changePrice(double newPrice);
    void changeQuantity(int delta);
    double getTotalCost();
    Goods operator+(const Goods& g);
    Goods operator-(const Goods& g);
    bool operator==(const Goods& g);
    bool operator<(const Goods& g);
};
