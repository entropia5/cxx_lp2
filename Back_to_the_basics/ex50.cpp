/*Вывести кратные 3
Дан двумерный массив размера n, m. Вывести числа в этом массиве кратные 3. То есть числа которые делятся на 3 без остатка.

Пример:
Ввод:
4 3
1 2 3
4 5 6
9 9 9
7 5 2
Вывод:
3 6 9 9 9
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
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] % 3 == 0)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}