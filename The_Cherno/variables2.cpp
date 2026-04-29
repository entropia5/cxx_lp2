#include <iostream>


int Sum (int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    // Добавь сюда вывод для char, float, double и bool
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: "<< sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;


int x;
int y;
std::cout << "Enter x: " << std::endl;
std::cin >> x;
std::cout << "Enter y: " << std::endl;
std::cin >>  y;

int result = Sum(x, y);
std::cout << "Sum: " << result << std::endl;

if (result > 10) {
std::cout << "Nice result" << std::endl;
}
    else {
        std::cout << "Bad result" << std::endl;

}

    return 0;
}
