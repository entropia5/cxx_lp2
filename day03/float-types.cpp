// day03, ex1

#include <format>
#include <iostream>

using std::format;
using std::cout;

// 1 байт = 8 бит.

const size_t byte {8};

int main() {
    float f {};
    double df {};
    long double ldf {};
    
    cout << format("size of float f is {} bits\n", sizeof(f) * byte);
    cout << format("size of double df is {} bits\n", sizeof(df) * byte);
    cout << format("size of long double ldf is {} bits\n", (ldf) * byte);
}
