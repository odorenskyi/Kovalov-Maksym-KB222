#include "kovalov_lib.h"
#include <iostream>
#include <cmath>

ConeRoof::ConeRoof(double r, double h) {
    radius = r;
    height = h;
}

double ConeRoof::getRadius() const {
    return radius;
}

double ConeRoof::getHeight() const {
    return height;
}

void ConeRoof::setRadius(double r) {
    if (r > 0) {
        radius = r;
    } else {
        std::cout << "Неприпустиме значення радіуса!" << std::endl;
    }
}

void ConeRoof::setHeight(double h) {
    if (h > 0) {
        height = h;
    } else {
        std::cout << "Неприпустиме значення висоти!" << std::endl;
    }
}

double ConeRoof::calculateVolume() const {
    return (1.0 / 3.0) * M_PI * radius * radius * height;
}
