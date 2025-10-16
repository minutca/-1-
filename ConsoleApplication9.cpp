#include <iostream>
#include "goods.h"
using namespace std;

int main()
{
    Goods g1;
    cout << "Конструктор без параметрів:" << endl;
    g1.Display();

    Goods g2("Телефон", "2025-10-16", 12000, 3, "INV-001");
    cout << "Конструктор з параметрами:" << endl;
    g2.Display();

    Goods g3(g2);
    cout << "Конструктор копіювання:" << endl;
    g3.Display();

    cout << "Введіть новий товар:" << endl;
    Goods g4;
    g4.Read();
    g4.Display();

    cout << "Вартість у рядку: " << g4.toString() << " грн" << endl;

    return 0;
}
