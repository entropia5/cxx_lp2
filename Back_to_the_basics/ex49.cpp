/*Перевернутый двумерный массив
Даны целые числа n и m размер двумерного массива, также n * m чисел элементы массива. Вывести массив перевернутым.

Пример:
Ввод:
4 3
1 2 3
9 5 4
7 2 0
-1 -1 5
Вывод:
1 9 7 -1
2 5 2 -1
3 4 0 5
*/

#include <iostream>
using namespace std;

int mainx()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}