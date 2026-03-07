// Даны два целых числа, найти максимум

#include <iostream>
using namespace std;

void maxx()
{
    int a, b;

    cin >> a >> b;

    if (a > b)
    {
        cout << "Максимальное число: " << a << endl;
    }
    else if (b > a)
    {
        cout << "Максимальное число: " << b << endl;
    }
    else
    {
        cout << "Оба числа равны: " << a << endl;
    }
}