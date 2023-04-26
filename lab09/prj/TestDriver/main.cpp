#include <iostream>
#include <cmath>
#include "../moduleskovalov/kovalov_lib.h"
#define ARR_S 7
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    // 9.1
    cout << "Задача 9.1" << endl;

    const float kwh[ARR_S] = {10, 151, -2, -14.45, 800, 806, 1000};
    const float expected_res[ARR_S] = {13.0843, 365.337, 0, 0, 1935.56, 4304.42, 5340.47};
    float eps = 0.002;
    for(short int i = 0; i < ARR_S; i++){
        float currResult = round(kwh_calculation(kwh[i])*10000)/10000;
        cout << "Test #" << i + 1 << ": " << kwh[i] << " \n Очікуваний результат: " << expected_res[i]
        << ",\n Дійсний результат: " << currResult << endl;

        // допустима погрішність при зрівнюванні результатів
        if(abs(currResult - expected_res[i]) < eps){
            cout << "Test id #" << i+1 << " - Passed\n";
        } else {
            cout << "Test id #" << i+1 << " - Failed\n";
        }
    }

    // 9.2
    // Обрахунок середньої температури за рік В цельсіях
    cout << "Задача 9.2" << endl;

    float tempC, tempSum = 0;

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
    cout << "Задача 9.3" << endl;
    int N;
    cin >> N;
    if(cin.fail()){
        std::cout << ("Введений неправильний тип даних. Введіть число.");
        return -1;
    }
    bool is_zero_bit = (N >> 9) % 2 == 0;
    if(is_zero_bit == false){
        cout << "Кількість двійкових одиниць у N:"<< binary_calculation(N) << endl;
    }else{
        cout << "Кількість двійкових нулів у N:"<< binary_calculation(N) << endl;
    }


}
