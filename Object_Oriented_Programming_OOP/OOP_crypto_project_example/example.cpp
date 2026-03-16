
/*
Создай класс Rectangle
У него есть:

width
height

Но есть правило: ширина и высота не могут быть <= 0

задача
Написать класс с: 
private полями
setWidth()
setHeight()
getWidth()
getHeight()

И проверкой: значение > 0
*/



#include <iostream>
#include <stdexcept> //для  throw std::invalid_argument(


class Rectangle {
private:
    int width;
    int height;

public:

        //Конструктор с проверкой значений
    Rectangle(int w, int h) {
        setWidth(w);     
        setHeight (h);                               //Используем сеттеры, чтобы не дублировать проверку
    }

        //Setters с проверкой

    void setWidth(int w) {
    if (w <= 0)
        throw std::invalid_argument("Width must be > 0");    //исключение
    width = w;
}

    void setHeight(int h) {
        if (h <= 0)
        throw std::invalid_argument("Height must be > 0");
    height = h;
    }

  


        //Getters

        int getWidth() const {
            return width;
        }

        int getHeight() const {
            return height;
        }


        //Пример метода для работы с объектом

        int area() const {
            return width * height;
        }
};

int main () {
    try{ 
    Rectangle r (5,10);
    std::cout << "area: " << r.area() << std:: endl;        //всё ок

    r.setWidth(0);                                           //выбросит исключение

    }

    catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
}

    return 0;


}
