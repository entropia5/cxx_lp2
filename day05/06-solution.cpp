//day05

using std::format;
using std::cout;

unsigned long factorial(unsigned long n) {
    auto result = n;
    while (n > 1) {
        result *= --n;
    }
    return result;
}

int main() {
    unsigned long n {5};
    cout << format("Factorial of {} is {}\n", n, factorial(n));
}
