// day06, class 


#include <format>
#include <iostream>

using std::format;
using std::cout;

//простой класс с одним полем и двумя методами для установки и получения значения этого поля

class C1 {
    int c1val {};
public:
    void setvalue(int value) { c1val = value; }
    int getvalue() { return c1val; }
};

int main() {
    C1 o1;
    o1.setvalue(47);
    cout << format("value is {}\n", o1.getvalue());
}
