#include <iostream>
#include <cmath>
#include <locale>
#include "my_lib.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int x,y,z;

    cout << "������ x: ";
    if(!(cin >> x) || isdigit(x)){
        std::cerr << "�������: ������� �������� � x.";
        return 1;
    }
    cout << "������ y: ";
    if(!(cin >> y) || isdigit(y)){
        std::cerr << "�������: ������� �������� � y.";
        return 1;
    }
    cout << "������ z: ";
    if(!(cin >> z) || isdigit(z)){
        std::cerr << "�������: ������� �������� � z.";
        return 1;
    }
    cout << "��������� S: " << s_calculation(x,y,z) << std::endl;


    return 0;
}
