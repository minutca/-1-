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
    cout << "����� ������: ";
    getline(cin, name);
    cout << "���� ����������: ";
    getline(cin, date);
    cout << "ֳ��: ";
    cin >> price;
    cout << "ʳ������: ";
    cin >> quantity;
    cin.ignore();
    cout << "����� ��������: ";
    getline(cin, invoice);
}

void Goods::Display()
{
    cout << "�����: " << name << endl;
    cout << "����: " << date << endl;
    cout << "ֳ��: " << price << " ���" << endl;
    cout << "ʳ������: " << quantity << endl;
    cout << "��������: " << invoice << endl;
    cout << "�������� �������: " << getTotalCost() << " ���" << endl;
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
