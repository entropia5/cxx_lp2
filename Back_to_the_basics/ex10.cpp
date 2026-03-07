// Даны два целых чисел a и b, выведи a в степени b.

#include <cmath>
#include <iostream>
using namespace std;

void power()
{

    int a, b;
    cin >> a >> b;

    cout << pow(a, b) << endl;
}