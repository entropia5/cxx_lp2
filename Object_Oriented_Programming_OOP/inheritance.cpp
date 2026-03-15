/*
Задача

Сделай 2 класса:
1. Animal
У него должны быть:
поле name
метод showName(), который выводит имя

2. Dog
Он должен наследоваться от Animal
и иметь свой метод:
bark(), который выводит Woof

*/

#include <iostream>
#include <string>

class Animal
{
public:
    //поле
    string name;

    //метод...То есть любой Animal имеет имя и умеет показать это имя.
    void showName()
    {
        std::cout << name << std::endl;
    }
};

//создал 2 класс, наследование от Animal    
class Dog ::public Animal{

    //добавил свой метод помимо того, что унаследовал от Animal name, showName()
    void bark(){
        std::cout << "Woof" << std::endl;
}
}
;

int main()
{

    Dog dog;                    //Создал объект dog класса Dog. Поскольку Dog наследуется от Animal, у него уже есть поле name.
    dog.name = "Rex";           //Записали имя.
    dog.showName();             //Вызвали метод, который пришёл из Animal.
    dog.bark();                 //Вызвали метод, который пришёл из Animal.

    return 0;
}