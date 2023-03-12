#include <iostream>
#include <cmath>
#include <locale>
#include "my_lib.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int x,y,z;

    cout << "¬вед≥ть x: ";
    cin >> x;
    cout << "¬вед≥ть y: ";
    cin >> y;
    cout << "¬вед≥ть z: ";
    cin >> z;
    cout << "–езультат S: " << s_calculation(x,y,z) << std::endl;


    return 0;
}
