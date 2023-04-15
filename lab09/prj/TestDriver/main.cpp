#include <iostream>
#include "../moduleskovalov/kovalov_lib.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ukr");

    float kwh, tempC, tempSum = 0, N;
    // 9.1
  /*  cin >> kwh;
    cout << kwh_calculation(kwh) << endl; */

    // 9.2
    // Обрахунок середньої температури за рік В цельсіях
    for(int i = 0; i < 12; i++){
        cin >> tempC;
        if(cin.fail()){
            std::cout << ("Введений неправильний тип даних. Введіть число.");
            break;
        }
        tempSum = tempSum + tempC;
        tempC = 0;

    if(i == 11){
        tempSum = tempSum / 12;
        cout << "Середня температура в рік за Цельсія: " << tempSum << "°C" << endl;
        cout << "Середня температура в рік за Фаренгейтом: " << avg_calculation(tempSum) << "°F" <<endl;
    }
    }


    // 9.3

}

