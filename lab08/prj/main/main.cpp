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
    cin >> x;
    cout << "������ y: ";
    cin >> y;
    cout << "������ z: ";
    cin >> z;
    cout << "��������� S: " << equation(x,y,z);


    return 0;
}
