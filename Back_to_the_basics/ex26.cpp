/*
Четные
Дано целое число n, вывести все четные числа начиная с 0 до n (включительно).

Пример 1:
Ввод: 5
Вывод: 0 2 4

Пример 2:
Ввод:  8
Вывод: 0 2 4 6 8*/
#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i += 2)
    {
        cout << i << " ";
    }
}