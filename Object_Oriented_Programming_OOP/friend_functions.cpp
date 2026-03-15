/*
Дружественные функции и классы для класса Car
Нужно добавить дружественные функции и класс для класса Car.
Перед этим давайте добавим в класс Car еще одно приватное поле number (int), для этого поля нет сеттера или геттера потому что номер машины не может извне меняться.
Надо создать дружественный класс Admin который меняет значение поля number с помощью метода setCarNumber(Car& car, int number);
Также нужно создать дружественную функцию print(const Car& car), который печатает информацию о машине в формате:
Mark: "поле mark"
Price: "поле price"
Number: "поле number"

Пример 1:
Car{mark = "Toyota", price = 10000, number = 123}
print(Car):
Mark: Toyota
Price: 10000
Number: 123
*/

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Admin;

class Car
{
private:
    string mark;
    int price;
    int number;

public:
    Car(string m, int p)
    {
        mark = m;
        price = p;
        number = 0;
    }

    void setMark(string m)
    {
        mark = m;
    }

    string getMark() const
    {
        return mark;
    }

    void setPrice(int p)
    {
        price = p;
    }

    int getPrice() const
    {
        return price;
    }

    friend void print(const Car &car);
    friend class Admin;
};

void print(const Car &car)
{
    cout << "Mark: " << car.getMark() << endl;
    cout << "Price: " << car.getPrice() << endl;
    cout << "Number: " << car.number << endl;
}

class Admin
{
public:
    void setCarNumber(Car &car, int number)
    {
        car.number = number;
    }
};
