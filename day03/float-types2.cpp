// day03, ex1
//Создадим литералы в С++. Литеральные числа с плавающей запятой.

#include <format>
#include <iostream>

using std::format;
using std::cout;

// 1 байт = 8 бит.

const size_t byte {8};

int main() {
    float f {500.0};
    double df {};
    long double ldf {};

    f = .1 + .2 + .2;

    cout << format("size of float f is {} bits\n", sizeof(f) * byte);
    cout << format("size of double df is {} bits\n", sizeof(df) * byte);
    cout << format("size of long double ldf is {} bits\n", (ldf) * byte);

    cout << format("value of f is {}\n", f);

    if (f == 0.3) {
        cout << "true\n";
    }
    else cout << "false\n";
}
