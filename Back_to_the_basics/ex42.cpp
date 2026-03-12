// вложенные циклы

/*
Даны целые числа n и m. Вывести все числа от 1 до n включительно m раз.

Например:
Ввод: 5 3
Вывод:
1 1 1
2 2 2
3 3 3
4 4 4
5 5 5
*/

#include <iostream>
using namespace std;

void mainx()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}