// day03, ex2


#include <format>
#include <iostream>
#include <typeinfo>

using std::format;
using std::cout;

int main() {
    std::string s {"This is a string"};
    auto x = s; //автотип
    cout << format("x is {}\n", x);
    cout << format("type of x is {}\n", typeid(x).name());
}
