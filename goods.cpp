#include "goods.h"
#include <iostream>
#include <sstream>
using namespace std;
Goods::Goods()
{
    name = "";
    date = "";
    price = 0;
    quantity = 0;
    invoice = "";
}
Goods::Goods(string n, string d, double p, int q, string inv)
{
    name = n;
    date = d;
    price = p;
    quantity = q;
    invoice = inv;
}
Goods::Goods(const Goods& g)
{
    name = g.name;
    date = g.date;
    price = g.price;
    quantity = g.quantity;
    invoice = g.invoice;
}
void Goods::Init(string n, string d, double p, int q, string inv)
{
    name = n;
    date = d;
    price = p;
    quantity = q;
    invoice = inv;
}
void Goods::Read()
{
    cout << "Назва товару: ";
    getline(cin, name);
    cout << "Дата оформлення: ";
    getline(cin, date);
    cout << "Ціна: ";
    cin >> price;
    cout << "Кількість: ";
    cin >> quantity;
    cin.ignore();
    cout << "Номер накладної: ";
    getline(cin, invoice);
}
void Goods::Display()
{
    cout << "Товар: " << name << endl;
    cout << "Дата: " << date << endl;
    cout << "Ціна: " << price << " грн" << endl;
    cout << "Кількість: " << quantity << endl;
    cout << "Накладна: " << invoice << endl;
    cout << "Загальна вартість: " << getTotalCost() << " грн" << endl;
}
string Goods::toString()
{
    stringstream s;
    s << getTotalCost();
    return s.str();
}
void Goods::changePrice(double newPrice)
{
    price = newPrice;
}
void Goods::changeQuantity(int delta)
{
    quantity += delta;
    if (quantity < 0) quantity = 0;
}

double Goods::getTotalCost()
{
    return price * quantity;
}
Goods Goods::operator+(const Goods& g)
{
    Goods temp = *this;
    temp.quantity += g.quantity;
    return temp;
}
Goods Goods::operator-(const Goods& g)
{
    Goods temp = *this;
    temp.quantity -= g.quantity;
    if (temp.quantity < 0) temp.quantity = 0;
    return temp;
}
bool Goods::operator==(const Goods& g)
{
    return (name == g.name && invoice == g.invoice);
}
bool Goods::operator<(const Goods& g)
{
    return price < g.price;
}
