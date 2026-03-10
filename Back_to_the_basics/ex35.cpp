/*Создать массив
Создайте массив размера 5, состоящий из чисел {7, 8, 1, 2, 3} и вывести на экран.*/
#include <iostream>
using namespace std;

void mainx()
{

    int a[5] = {7, 8, 1, 2, 3};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " " << endl;
    }
}