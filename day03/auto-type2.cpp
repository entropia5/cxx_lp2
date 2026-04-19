// day03, ex2.2


#include <format>
#include <iostream>
#include <typeinfo>
#include <vector>

using std::format;
using std::cout;

int main() {
    std::vector<int> vi { 1, 2, 3, 4, 5 };
    for(std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        cout << format("int is {}\n", *it);
        cout << format("type of it is {}\n", typeid(it).name());
    }
}
