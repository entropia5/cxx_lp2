// Инвертировать значение
// Дано битовое значение типа bool, вывести инверсию этого бита. Значит для 1 вывести 0, а для 0 вывести 1.

#include <iostream>
using namespace std;

int inv()
{
    bool a;
    cin >> a;

    bool inverted = !a;

    cout << inverted << endl;

    return 0;
}