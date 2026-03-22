/*Создайте класс под названием Pair, который имеет две открытые целочисленные переменные-члены с именами "a" и "b", а также открытую функцию-член sum(), которая не имеет аргументов, но складывает две переменные-члены и возвращает их сумму.*/


#include <iostream>

class Pair {

    public:
        int a;
        int b;

         int sum(){
        return a + b;
         }
};

int main() {
  Pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}