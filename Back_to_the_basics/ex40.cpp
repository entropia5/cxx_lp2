/*
Считай четные. Часть 1
Даны целое число n и массив из n чисел. Посчитать количество четных элементов в массиве и вывести количество.

Пример:
Ввод:
6
7 4 8 1 6 4
Вывод:
4
*/

#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
}
