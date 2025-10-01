#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;
const double PI = 3.14;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice;
    double angle, result;
    cout << "Оберіть режим:\n";
    cout << "1 - Градуси -> Радіани\n";
    cout << "2 - Радіани -> Градуси\n";
    cout << "Ваш вибір: ";
    cin >> choice;
    if (choice == 1) 
    {
        cout << "Введіть кут у градусах: ";
        cin >> angle;
        if (angle < 0) {
            cout << "Помилка: кут не може бути  від’ємним!" << endl;
            return 0;

        }
        result = angle * PI / 180.0;
        cout << "Кут у радіанах: " << result << endl;
    }
    else if (choice == 2) {
        cout << "Введіть кут у радіанах: ";
        cin >> angle;
        if (angle < 0)
        {
            cout << "Помилка: кут не може бути від’ємним!" << endl;
            return 0;
        }
        result = angle * 180.0 / PI;
        cout << "Кут у градусах: " << result << endl;
    }
    else {
        cout << "Помилка: неправильний вибір режиму!" << endl;
    }

    return 0;
}
