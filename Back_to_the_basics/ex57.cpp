/*Метод структуры
Напишите структуру Person с полями name строчного типа и age целочисленного типа. И написать метод структуры print. который выводит на экран информацию о структуре, в формате:
"Name: Andrew"
"Age: 40"
если поле name = "Andrew" и поле age = 40.
Метод ничего не возвращает.*/

#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};