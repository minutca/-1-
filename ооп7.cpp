#include <iostream>
#include "Duration.h"
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Duration d;
    string s;
    cout << "Введіть рядок: ";
    getline(cin, s);
    try 
    {
        cout << "1) " << (d.isPalindrome1(s) ? "паліндром" : "не паліндром");
    }
    catch (exception& e) 
    {
        cout << "1) Виняток: " << e.what() << endl;
    }
    try 
    {
        cout << "2) " << (d.isPalindrome2(s) ? "паліндром" : "не паліндром");
    }
    catch (...) 
    {
        cout << "2) Несподіваний виняток";
    }
    try 
    {
        cout << "3) " << (d.isPalindrome3(s) ? "паліндром\n" : "не паліндром\n");
    }
    catch (invalid_argument& e)
    {
        cout << "3) Виняток: " << e.what() << endl;
    }
    try 
    {
        cout << "4) " << (d.isPalindrome4(s) ? "паліндром" : "не паліндром");
    }
    catch (MyEmptyException&) {
        cout << "4) Виняток: порожній рядок";
    }
    catch (MyBadStringException& e)
    {
        cout << "4) Виняток: " << e.what() << endl;
    }
    catch (MyLogicException& e) 
    {
        cout << "4) Виняток: " << e.what()
            << "  Дані: " << e.getData() << endl;
    }
    return 0;
}
