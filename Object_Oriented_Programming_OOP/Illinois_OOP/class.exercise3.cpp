#include <iostream>
#include <string>

class Employee{
    private:
        int salary;
        int age;

    public:

        Employee(){
            salary = 0;
            age = 18;
            std::cout<< "Родился новый объект Employee. Базовые значения заданы." << std::endl;
        }
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

        void setAge (int a) {
            if (a >= 18 && a <= 65) {
                age = a;

            }
            else {
                std::cout << "ошибка возраста" << std::endl;
            }
        }

        int getAge(){
            return age;
        }


};

int main() {

    Employee worker;

    worker.setSalary(100000);
    worker.getSalary();
    worker.setAge(25);
    worker.getAge();
    std::cout <<"Зарплата: "<< worker.getSalary() << std::endl;
    std::cout << "возраст: "<< worker.getAge() << std::endl;

    return 0;
}

