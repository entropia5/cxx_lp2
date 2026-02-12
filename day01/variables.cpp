// 3


#include <format>
#include <iostream>


using std::format;
using std::cout;


int main() {
    int i {};
    cout << format("i is {}\n", i); //здесь в потоке вывода результат: i = 0;
    i = 10; //присвоим значение переменной i;
    cout << format("i is {}\n", i); // вывод здесь покажет, что i = 10;

return 0;
}
