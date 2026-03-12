/*
от 1 до NxM
Даны целые числа n и m, вывести все от 1 до n*m.

Пример:
Ввод:
5 3
Вывод:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
*/

#include <iostream>
using namespace std;

void mainx()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n * m; i++)
    {
        cout << i << " ";
        if (i % m == 0)
        {
            cout << endl;
        }
    }
}