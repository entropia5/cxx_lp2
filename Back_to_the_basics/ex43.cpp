/*Лестница
Дано целое число n, вывести все числа i от 1 до n включительно вывести i раз.

Например:
Ввод: 5
Вывод:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5*/
#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}