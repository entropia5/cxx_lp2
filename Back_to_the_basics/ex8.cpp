// Среднее арифметическое
// Даны два целых числа, найти среднее арифметическое число. Формула: Avg = (a + b) / 2; где a и b данные числа
#include <iostream>
using namespace std;

void avg()
{
    int a, b;
    cin >> a >> b;
    cout << (a + b) / 2.0 << endl;
}