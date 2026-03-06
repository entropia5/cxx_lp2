// ex3Создайте переменные целочисленного, вещественного, символьного и строчного типов данных со значениями 100, 123.456, 'q', "My program". Вывести все на экран, значение каждой переменной с новой строки.

#include <iostream>
using namespace std;

void createVariables()
{
    int a;
    a = 100;

    float f;
    f = 123.456;

    char ch;
    ch = 'q';

    string s;
    s = "My program";

    cout << a << endl;
    cout << f << endl;
    cout << ch << endl;
    cout << s << endl;
}
