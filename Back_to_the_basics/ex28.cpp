/* A->B
Даны два целых числа a и b, нужно вывести все числа от a до b включительно.

Пример:
Ввод: 5 10
Вывод: 5 6 7 8 9 10 */

#include <iostream>
using namespace std;

void mainx()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
    }
}