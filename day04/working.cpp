//day04 ex2.1
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    auto x = 6;

    cout << format ("x is {}\n", ++x);
    cout << format ("x is {}\n", ++x);
    cout << format ("x is {}\n", ++x);//++x увеличит х до след значения, прежде чем вернуть его

    //есть ещё декремент --х, противоположный ++х по смыслу


}
