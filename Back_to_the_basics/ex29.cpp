/*Вывести 1
Дано целое число n, вывести число 1 - n раз.

Пример:
Ввод: 3
Вывод: 1 1 1*/

#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "1 ";
    }
}