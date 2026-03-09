// оператор ИЛИ ||

/*Пользователь вводит число.

Программа должна вывести:

SPECIAL — если число меньше 0 или больше 100

NORMAL — если число в диапазоне 0–100 включительно*/

#include <iostream>

int main()
{
    int a;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;

    if (a < 0 || a > 100)
    {
        std::cout << "SPECIAL" << std::endl;
    }
    else
    {
        std::cout << "NORMAL" << std::endl;
    }

    return 0;
}