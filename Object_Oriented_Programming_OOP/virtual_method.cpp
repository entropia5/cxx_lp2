/*Абстрактный Shape
Нужно переделать класс Shape в абстрактный. 
Методы calculateArea и calculatePerimeter переделываем как чисто виртуальные.*/


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
    
    virtual int calculateArea() = 0;
    
    virtual int calculatePerimeter() = 0;
};
 
class Circle : public Shape {
private:
    int radius;
    
public:
    Circle(string c, int r) : Shape(c) {
        radius = r;
    }
    
    int calculateArea() override {
        return 3.14 * radius * radius;
    }
    
    int calculatePerimeter() override {
        return 2 * 3.14 * radius;
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
    
    int calculateArea() override {
        return a * b;
    }
    
    int calculatePerimeter() override {
        return (a + b) * 2;
    }
};
