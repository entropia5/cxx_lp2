// day03, ex6

#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    const char s [] {"String"};
    //const char s [] {'S', 't', 'r', 'i', 'n', 'g', 0}; //это тоже самое, что и строка 10.
    //получим доступ сейчас к отдельным символам также как и в массиве
    for (const auto& c : s) {
        cout << format ("{}\n", c);
    }
}
