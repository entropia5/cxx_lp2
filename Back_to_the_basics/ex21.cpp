// два условия сразу
// Теперь добавим логический оператор.
/*Пользователь вводит число.

Программа должна вывести:

IN RANGE — если число от 10 до 20 включительно

OUT OF RANGE — если число меньше 10 или больше 20*/

#include <iostream>

int main()
{

    int a;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;

    if (a >= 10 && a <= 20)
    {
        std::cout << "IN RANGE" << std::endl;
    }
    else
    {
        std::cout << "OUT OF RANGE" << std::endl;
    }
    return 0;
}