
//2

#include <format>
#include <iostream>

using std::cout;
using std::format;

int main() {
    int x;
    x = 42; //выражение, присваивание целочисленной переменной х значение 42. Также это и оператор.

    auto str = format("x is {}\n", x); //оператор, вызывающий библиотечную ф-цию format и присваивает возвращаемое значение переменной str
    cout << str;
}

//код может не скомпилироваться на старых компиляторах...<format> — это новинка C++20/23.
//using std::format; Работает, если компилятор поддерживает std::format
// альтернатива для старых: auto str = std::format("x is {}\n", x);
/*
 //Для того, чтобы работало у всех вот:
 //std::string, чтобы явно видеть тип.
 //
#include <format>
#include <iostream>

int main() {
    int x = 42;

    std::string str = std::format("x is {}\n", x);
    std::cout << str;

    return 0;
}

 */