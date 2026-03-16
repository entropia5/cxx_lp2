/*
Animals
в прошлых задачах был класс Dog:
class Dog {
private:
    string name;
    int age;
    
public:
    Dog(string n, int a) {
        name = n;
        age = a;
    }
    
    string getName() const {
        return name;
    }
    
    void setName(string n) {
        name = n;
    }
    
    int getAge() const {
        return age;
    }
    
    void setAge(int a) {
        age = a;
    }
    
    string bark() {
        return "bark";
    }
};
Теперь мы хотим создать такой же класс Cat:
class Cat {
private:
    string name;
    int age;
    
public:
    Cat(string n, int a) {
        name = n;
        age = a;
    }
    
    string getName() const {
        return name;
    }
    
    void setName(string n) {
        name = n;
    }
    
    int getAge() const {
        return age;
    }
    
    void setAge(int a) {
        age = a;
    }
    
    string meow() {
        return "meow";
    }
};
Заметьте что классы очень похожие и можно их наследовать от класса Animal где будем писать все общие поля и методы.

Пример использования:
Animal animal("animal", 1);
animal.setAge(2);
cout << animal.getName() << endl; // на экран выходит animal
 
Dog dog("Ben", 2);
cout << dog.getName() << " " << dog.bark() << endl; // Ben bark
 
Cat cat("Misa", 1);
cout << cat.getAge() << " " << cat.meow() << endl; // 1 meow

*/



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
    
    string sound() {
        return "";
    }
};
 
class Dog : public Animal {
public:
    Dog(string name, int age) : Animal(name, age) {
        
    }
 
    string bark() {
        return "bark";
    }
};
 
class Cat : public Animal {
public:
    Cat(string name, int age) : Animal(name, age) {
        
    }
 
    string meow() {
        return "meow";
    }
};