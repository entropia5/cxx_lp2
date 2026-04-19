//day2, ex1

#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    auto x = 15;
    auto y = 15;

    if (x > y)
    {
        cout << "conditional is true\n";
    }

    else if (y > x)
    {
        cout << "False\n";
    }

    else
    {
        cout << "x = y\n";
    }

}

