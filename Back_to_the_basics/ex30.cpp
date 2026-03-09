/*Вывести символы
Даны целое число n и символ ch, вывести символ ch - n раз, без пробела между символами.

Пример 1:
Ввод: 7 a
Вывод: aaaaaaa

Пример 2:
Ввод: 5 @
Вывод: @@@@@*/

#include <iostream>
using namespace std;

void mainx()
{
    int n;
    char ch;
    cin >> n >> ch;
    for (int i = 0; i < n; i++)
    {
        cout << ch;
    }
}