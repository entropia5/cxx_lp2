#include <iostream>
#include <string>

class Employee{
    private:
        int salary;

    public:
        void setSalary (int s) {
            if( s > 0) {
                salary = s;
            } else {
                std::cout << "Ошибка. Зарплата не может быть отрицательной" << std::endl;
            }
        }

        int getSalary() {
            return salary;
        }

};

int main() {

    Employee worker;

    worker.setSalary(100000);
    worker.getSalary();
    std::cout << worker.getSalary() << std::endl;

    return 0;
}


//это был пример инкапсуляции. Далее будет пример с конструкторами и деструкторами. В файле class.exercise3.cpp
