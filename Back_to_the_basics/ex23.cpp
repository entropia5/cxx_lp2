/*От 0 до n
Дано целое число n, вывести числа от 0 (включительно) до n (не включительно). Можно использовать любой цикл.
Пример:
Ввод: 5
Вывод: 0 1 2 3 4*/

#include <iostream>
using namespace std;

void mainx()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << i << " ";
    }
}