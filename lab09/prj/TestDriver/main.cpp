#include <iostream>
#include "../ModulesKovalov/kovalov_lib.h"

using namespace std;


int main()
{
    setlocale(LC_ALL,"ukr");
    float kwh, kwh_cost;
    cin >> kwh;
    cout << kwh_calculation(kwh) << endl;
    cout << kwh_calculation(156);
}
