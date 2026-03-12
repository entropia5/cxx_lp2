/*Считай четные. Часть 2
Даны целое число n и массив из n чисел. Посчитать количество четных элементов в массиве и вывести количество. Так же на следующей строке вывести эти четные числа.

Пример:
Ввод:
6
7 4 8 1 6 4
Вывод:
4
4 8 6 4*/

#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    int count = 0;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    delete[] arr;
}