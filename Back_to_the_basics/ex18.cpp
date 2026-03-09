/*
Дано целое число.
Если число положительное, вывести:

YES

Если число отрицательное, вывести:
NO


*/

#include <iostream>

int main()
{
    std::cout << "INPUT NUM: " << std::endl;
    int a;

    std::cin >> a;
    if (a > 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
        (a < 0);
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
