

/*Создать класс Player


Требования:

поле health
метод showHealth(), который выводит health

В main():
создай объект hero
задай health = 100
вызови showHealth()



#pragma once
#include <iostream>

class Player
{
public:
    int health;

    void showHealth()
    {
        std::cout << "Health: " << health << std ::endl;
    }

    int main()
    {
        Player hero;
        hero.health = 100;
        hero.showHealth();

        return 0;
    }
}

*/

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


*/
