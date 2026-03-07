/*
Дано целое число, вывести символ 'A' если число равно 1, вывести символ 'B' если число равно 2, иначе вывести символ 'C'.

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
    else
    {
        cout << 'C';
    }
}