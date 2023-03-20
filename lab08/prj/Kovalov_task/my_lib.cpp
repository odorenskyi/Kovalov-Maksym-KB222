#include <iostream>
#include <stdlib.h>
#include "../ModulesKovalov/kovalov_lib.h"
using namespace std;

string copyright(){
    return "(c) Ковальов Максим";
}
bool expression(char a, char b){
    return a + 5 > b + 2;
}
string toDecToHex(int x, int y, int z){
    cout << "В десятковiй системі: " << endl
         << "'x' -> " << dec << x << endl
         << "'y' -> " << dec << y << endl
         << "'z' -> " << dec << z << endl << endl;
    cout << "В шiстнадцятковiй системі: " << endl
         << "'x' -> " << hex << x << endl
         << "'y' -> " << hex << y << endl
         << "'z' -> " << hex << z << endl << endl;
    cout << endl << "Результат обчислення виразу: S = " << s_calculation(x, y, z) << endl;
    return "";
}
