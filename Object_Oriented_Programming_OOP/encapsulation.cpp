/*Улучшаем класс Car
Улучшаем класс Car из прошлой задачи.
Добавьте геттеры и сеттеры для полей mark и price. Сделайте эти поля приватными.

#pragma once
#include <string>
using namespace std;

class Car
{
private:
    string mark;
    int price;

public:
    Car(string m, int p)
    {
        mark = m;
        price = p;
    }

    string getMark() const
    {
        return mark;
    }

    int getPrice() const
    {
        return price;
    }

    void setMark(string m)
    {
        mark = m;
    }

    void setPrice(int p)
    {
        price = p;
    }
};

*/

/*Улучшаем класс Dog
Улучшаем класс Dog из прошлой задачи.
Добавьте геттеры и сеттеры для полей name и age. Сделайте эти поля приватными.*/

#pragma once
#include <string>
using namespace std;

class Dog
{
private:
    string name;
    int age;

public:
    Dog(string n, int a)
    {
        name = n;
        age = a;
    }

    string getName() const
    {
        return name;
    }

    void setName(string n)
    {
        name = n;
    }

    int getAge() const
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    string bark()
    {
        return "bark";
    }
};

/*
2. private, геттер, сеттер

Сделай класс Car.
Требования:

поле price сделать private
метод setPrice(int p)
метод getPrice()

В main():
создай объект
установи цену 5000
выведи цену через геттер


#include <iostream>

class Car
{
private:
    int price;

public:
    void setPrice(int p)
    {
        price = p;
    }

    int getPrice()
    {
        return price;
    }

    int main()
    {
        Car car;
        car.setPrice(5000);
        std::cout << "Price: " << car.getPrice() << std::endl;

        return 0;
    }

}

*/