/*От 1 до n
Дано целое число n, вывести числа от 1 (включительно) до n (включительно). Можно использовать любой цикл.
Пример:
Ввод: 5
Вывод:  1 2 3 4 5*/
#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << i << " ";
    }
}