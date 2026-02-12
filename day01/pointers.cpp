// 4
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int x {7};
    int y {42};
    int* ip = &x;

    cout << format("The value of x is {}\n", x);
    cout << format("The value of y is {}\n", y);
    cout << format("The value of *ip is {}\n", *ip); //здесь увидим на что указывает ip, поэтому разыменовываем ip и указываем на его значение которое должно быть таким же как х.То есть 7.
}
