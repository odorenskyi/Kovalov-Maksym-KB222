#include <iostream>
#include "../moduleskovalov/kovalov_lib.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ukr");

    float kwh, tempC, tempSum = 0;
    // 9.1
    cin >> kwh;
    cout << kwh_calculation(kwh) << endl;

    // 9.2
    // Обрахунок середньої температури за рік В цельсіях
    for(int i = 0; i < 12; i++){
        cin >> tempC;
        tempSum = tempSum + tempC;
        tempC = 0;
    }
      tempSum = tempSum / 12;

    cout << "Середня температура в рік за Цельсія: " << tempSum << "°C" << endl;
    cout << "Середня температура в рік за Фаренгейтом: " << avg_calculation(tempSum) << "°F" <<endl;
}


