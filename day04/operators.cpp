//day04 ex1

#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    auto x = 5;
    auto y = 47;
    cout << format("x is {}\n", x);
    cout << format("y is {}\n", y);

    x = y;

    cout << format("x is {}\n", x);


    /*
    x = y % x;

    if (x==y)
    {
        cout << "true \n";
    }

    else
    {
        cout << "false\n";
    }

     */
}
