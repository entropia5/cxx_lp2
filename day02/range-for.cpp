//продолжениие для for


#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };

    for (const auto& e : array) {   //элемент который получаем в левой части цикла for является ссылкой на фактический элемент в массиве
        cout << format("element is {}\n", e);
    }
}
