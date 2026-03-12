/*
Массив + число
Дано целое число n, размер массива. И n чисел, элементы массива и еще одно целое число x. Добавить x на все элементы массива. Вывести массив.

Например:
Ввод:
5
4 2 6 5 8
6
Вывод:
10 8 12 11 14
*/

#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        arr[i] += x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}
