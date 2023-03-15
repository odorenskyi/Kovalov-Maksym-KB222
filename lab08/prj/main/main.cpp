#include <iostream>
#include <cmath>
#include <locale>
#include "my_lib.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    float x,y,z;

    cout << "Введіть x: ";
    if(!(cin >> x) || isdigit(x)){
        std::cerr << "Помилка: Недійсне значення у X.";
        return 1;
    }
    cout << "Введіть y: ";
    if(!(cin >> y) || isdigit(y)){
        std::cerr << "Помилка: Недійсне значення у Y.";
        return 1;
    }
    cout << "Введіть z: ";
    if(!(cin >> z) || isdigit(z)){
        std::cerr << "Помилка: Недійсне значення у Z.";
        return 1;
    }
    cout << "Результат S: " << s_calculation(x, y, z) << std::endl;


    return 0;
}
