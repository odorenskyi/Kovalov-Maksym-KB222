#include <iostream>
#include <stdlib.h>
#include "../ModulesKovalov/kovalov_lib.h"
using namespace std;

string copyright(){
    return "(c) �������� ������";
}
bool expression(char a, char b){
    return a + 5 > b + 2;
}
string toDecToHex(int x, int y, int z){
    cout << "� ��������i� ������: " << endl
         << "'x' -> " << dec << x << endl
         << "'y' -> " << dec << y << endl
         << "'z' -> " << dec << z << endl << endl;
    cout << "� �i�����������i� ������: " << endl
         << "'x' -> " << hex << x << endl
         << "'y' -> " << hex << y << endl
         << "'z' -> " << hex << z << endl << endl;
    cout << endl << "��������� ���������� ������: S = " << s_calculation(x, y, z) << endl;
    return "";
}
