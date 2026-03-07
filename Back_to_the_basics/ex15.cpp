/*
Дано целое число, вывести символ 'A' если число равно 1, вывести символ 'B' если число равно 2, 'C' если равно 3, 'D' если равно 4. Если число не равно указанным числам (1, 2, 3, 4), то ничего не выводить.
Символы на английском.
*/

#include <iostream>
using namespace std;

void mainx()
{
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << 'A';
    }
    else if (num == 2)
    {
        cout << 'B';
    }
    else if (num == 3)
    {
        cout << 'C';
    }
    else if (num == 4)
    {
        cout << 'D';
    }
}