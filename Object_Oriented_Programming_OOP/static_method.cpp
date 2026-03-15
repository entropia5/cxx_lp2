
/*
Создать static поля и методы

Создайте класс Item с приватным полем id (int) и приватным статическим полем count (int).
Нужно написать геттер для каждого поля. Внутри конструктора Item надо присвоить id с текущим значением count.
Если это первый Item то id = 1 и count = 1.
count должен расти всегда, даже если некоторые объекты Item были уничтожены.
*/

#pragma once

class Item
{

private:
    int id;
    static int count;

public:
    Item()
    {

        id = ++count;
    }

    int getId()
    {
        return id;
    }

    static int getCount()
    {
        return count;
    }
};

int Item ::count = 0;
