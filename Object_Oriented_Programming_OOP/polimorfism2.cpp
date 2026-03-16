/*Animals
Давайте добавим в наш базовый класс Animal виртуальный метод sound который будет возвращать пустую строку. Eще заменим методы bark и meow на метод sound. И в классах наследниках переопределим метод sound чтобы они работали как обычно(возвращал bark для Dog, meow для Cat).

Пример использования:
Animal animal("animal", 1);
cout << animal.sound() << endl; // на экран выходит пустая строка
 
Dog dog("Ben", 2);
cout << dog.getName() << " " << dog.sound() << endl; // Ben bark
 
Cat cat("Misa", 1);
cout << cat.getAge() << " " << cat.sound() << endl; // 1 meow*/


#pragma once
#include <string>
using namespace std;
 
class Animal {
    string name;
    int age;
    
public:
    Animal(string name, int age) {
        this->name = name;
        this->age = age;
    }
    
    string getName() const {
        return name;
    }
    
    void setName(string name) {
        this->name = name;
    }
    
    int getAge() const {
        return age;
    }
    
    void setAge(int age) {
        this->age = age;
    }
    
    virtual string sound() {
        return "";
    }
};
 
class Dog : public Animal {
public:
    Dog(string name, int age) : Animal(name, age) {
        
    }
 
    string sound() override {
        return "bark";
    }
};
 
class Cat : public Animal {
public:
    Cat(string name, int age) : Animal(name, age) {
        
    }
 
    string sound() override {
        return "meow";
    }
};