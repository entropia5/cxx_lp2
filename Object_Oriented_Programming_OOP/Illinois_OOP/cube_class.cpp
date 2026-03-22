#include "Cube.h"

double Cube::getVolume() {
    return lenght_ * lenght_ * lenght_;

}

double Cube::getSurfaceArea() {
    return 6 * lenght_ * lenght_;
}

void Cube::setLenght(double lenght) {
    lenght_ = lenght;

}

