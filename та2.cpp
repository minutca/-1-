#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів масиву";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Введіть " << i + 1 << "-й елемент";
        cin >> arr[i];
    }
    cout << "Сортування бульбашкою";
    int count1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            count1++;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        cout << "Після " << i + 1 << "-го сортування";
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << " Кількість дій" << count1 << endl;
    }
    cout << "Сортування вибором";
    int arr2[100];
    for (int i = 0; i < n; i++)
        arr2[i] = arr[i];
    int count2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            count2++;
            if (arr2[j] < arr2[minIndex])
                minIndex = j;
        }
        int temp = arr2[i];
        arr2[i] = arr2[minIndex];
        arr2[minIndex] = temp;
        cout << "Після " << i + 1 << "-го проходу";
        for (int k = 0; k < n; k++)
            cout << arr2[k] << " ";
        cout << " Кількість дій" << count2 << endl;
    }
    cout << "Результат бульбашкового сортуванн ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "Результат сортування вибором";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;
    return 0;
}
