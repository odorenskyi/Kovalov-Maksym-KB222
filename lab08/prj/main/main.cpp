#include <iostream>
#include <cmath>
#include <locale>
#include "my_lib.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    float x,y,z;

    cout << "������ x: ";
    if(!(cin >> x) || isdigit(x)){
        std::cerr << "�������: ������� �������� � X.";
        return 1;
    }
    cout << "������ y: ";
    if(!(cin >> y) || isdigit(y)){
        std::cerr << "�������: ������� �������� � Y.";
        return 1;
    }
    cout << "������ z: ";
    if(!(cin >> z) || isdigit(z)){
        std::cerr << "�������: ������� �������� � Z.";
        return 1;
    }
    cout << "��������� S: " << s_calculation(x, y, z) << std::endl;


    return 0;
}
