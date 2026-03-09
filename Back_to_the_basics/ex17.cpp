/*
AM to the PM, PM to the AM
Вам дано целое число, показывающий время в часах от 1 до 23, если время AM (от 1 до 12) то нужно перевести это в PM (от 13 до 23), иначе наоборот перевести в AM.

Пример 1:
Ввод: 2
Вывод: 14

Пример 2:
Ввод: 22
Вывод: 10
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void mainx()
{
    int time;

    cin >> time;

    if (time >= 12)
    {

        time -= 12;
    }

    else
    {
        time += 12;
    }
    cout << time << endl;
}