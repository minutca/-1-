#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, value;
    int arr[1000];
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Введіть " << i + 1 << "-й елемент: ";
        cin >> arr[i];
    }
    cout << "Введіть число для пошуку: ";
    cin >> value;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
        cout << "Лінійний пошук: елемент знайдено — це " << index + 1 << "-й елемент у масиві." << endl;
    else
        cout << "Лінійний пошук: елемент не знайдено." << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Відсортований масив: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int left = 0, right = n - 1;
    index = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == value)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (index != -1)
        cout << "Двійковий пошук: елемент знайдено — це " << index + 1 << "-й елемент у відсортованому масиві." << endl;
    else
        cout << "Двійковий пошук: елемент не знайдено." << endl;
    return 0;
}
