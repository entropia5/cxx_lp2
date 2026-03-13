/*Создать класс Car
Создайте класс Car, у которого есть поля mark (string) и price (int).
 Также надо реализовать метод getMark который возвращает значение поля mark.
 У класса должен быть конструктор который принимает параметры типа string для инициализации поля mark и int для инициализации поля price.
 Все поля и методы должны быть публичные.



#pragma once

#include <string>
using namespace std;

class Car
{
public:
    string mark;
    int price;

    Car(string m, int p)
    {
        mark = m;
        price = p;
    }

    string getMark()
    {
        return mark;
    }
};

*/

/*Создать класс Dog
Создайте класс Dog, с полями name (string) и age (int).
У класса должен быть конструктор который для инициализации полей name и age.
Также должен быть метод bark который возвращает строку "bark".
*/

#pragma once
#include <string>
using namespace std;

class Dog
{
public:
    string name;
    int age;

    Dog(string n, int a)
    {
        name = n;
        age = a;
    }

    string bark()
    {
        return "bark";
    }
};
