/*Наследники Shape
Нужно реализовать:
Базовый класс Shape: приватное поле color (string), публичный метод info (string) возвращает информацию о цвете фигуры в формате "Color:
 "поле color"" без кавычек, есть конструктор который принимает string и инициализирует поле color.

 Класс наследник Circle: приватное поле radius (int), публичный метод calculateArea (int) который возвращает целую часть площади круга, 
число пи для вычисления можно взять как 3.14, есть конструктор который принимает string color и int radius для инициализации.

Класс наследник Rectangle: приватные поля a и b (int), публичный метод calculateArea (int) который возвращает площадь прямоугольника, 
есть конструктор который принимает string color, int a, int b для инициализации.*/



#pragma once
#include <string>
using namespace std;
 
class Shape {
private:
    string color;
public:
    Shape(string c) {
        color = c;
    }
    
    string info() {
        return "Color: " + color;
    }
};
 
class Circle : public Shape {
private:
    int radius;
    
public:
    Circle(string c, int r) : Shape(c) {
        radius = r;
    }
    
    int calculateArea() {
        return 3.14 * radius * radius;
    }
};
 
class Rectangle : public Shape {
private:
    int a;
    int b;
    
public:
    Rectangle(string c, int a, int b) : Shape(c) {
        this->a = a;
        this->b = b;
    }
    
    int calculateArea() {
        return a * b;
    }
};