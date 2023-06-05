#include <iostream>
#include <cmath>
#include <windows.h>
#include "../moduleskovalov/kovalov_lib.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);SetConsoleCP(1251);
    // Створення об'єкта класу ConeRoof
    ConeRoof Cone(5.0, 8.0);

    // Отримання значень атрибутів
    cout << "Радіус: " << Cone.getRadius() << endl;
    cout << "Висота: " << Cone.getHeight() << endl;

    // Зміна значень атрибутів
    Cone.setRadius(7.0);
    Cone.setHeight(10.0);

    // Обчислення та виведення об'єму
    cout << "Об'єм конічного даху: " << Cone.calculateVolume() << endl;

    return 0;
}
