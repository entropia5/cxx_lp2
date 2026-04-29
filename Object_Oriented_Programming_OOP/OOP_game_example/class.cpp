#include <iostream>
#include <string>

class Enemy {

    private:
        int health;
        int damage;

    public:

    void setHealth (int h){
        if(h>=0){
    health = h;
        }
        else {
            std::cout << "Ошибка спавна: Здоровье не может быть меньше 0"<< std::endl;
            health = 0;
        }
    }

    int getHealth (){
        return health;
    }

    int getDamage () {
        return damage;
    }

    void setDamage (int d){
        if (d > 0) {
            damage = d;
        }
        else {
            std::cout<<"Урон может быть только 0 или больше 0" << std::endl;
            damage = 1;

        }
    }

};
