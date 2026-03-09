/*
Пользователь вводит число.

Программа должна вывести:

EVEN — если число чётное

ODD — если число нечётное
*/

#include <iostream>

int main()
{

    int a;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << "EVEN" << std::endl;
    }
    else
    {
        std::cout << "ODD" << std::endl;
    }
}