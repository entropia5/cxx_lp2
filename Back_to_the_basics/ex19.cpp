/*
Пользователь вводит целое число.

Программа должна вывести:

POSITIVE — если число больше нуля

NEGATIVE — если число меньше нуля

ZERO — если число равно нулю



*/

#include <iostream>

int main()
{

    std::cout << "INPUT NUM: " << std::endl;
    int a;

    std::cin >> a;
    if (a > 0)
    {
        std::cout << "POSITIVE" << std::endl;
    }
    else if (a < 0)
    {
        std::cout << "NEGATIVE" << std::endl;
    }
    else
    {
        std::cout << "ZERO" << std::endl;
    }

    return 0;
}