#include <iostream>
#include <cmath>
#include <locale>
#include "my_lib.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int x, y, z;
    char a, b;
    cout << copyright() << endl << endl;


    cout << "������ x, y, z" << endl;
    cin >> x >> y >> z;

    cout << "������ a �� b" << endl;
    cin >> a >> b;
    if (expression(a, b) == 1){
        cout << "��������� ������: a + 5 > b + 2 -> True" << endl << endl;
    }else{
        cout << "��������� ������: a + 5 > b + 2 -> False" << endl << endl;
    }
    cout << toDecToHex(x, y, z);

    return 0;
}
