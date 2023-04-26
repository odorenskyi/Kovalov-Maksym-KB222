#include <iostream>
#include <cmath>
#include "../moduleskovalov/kovalov_lib.h"
#define ARR_S 7
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    // 9.1
    cout << "������ 9.1" << endl;

    const float kwh[ARR_S] = {10, 151, -2, -14.45, 800, 806, 1000};
    const float expected_res[ARR_S] = {13.0843, 365.337, 0, 0, 1935.56, 4304.42, 5340.47};
    float eps = 0.002;
    for(short int i = 0; i < ARR_S; i++){
        float currResult = round(kwh_calculation(kwh[i])*10000)/10000;
        cout << "Test #" << i + 1 << ": " << kwh[i] << " \n ���������� ���������: " << expected_res[i]
        << ",\n ĳ����� ���������: " << currResult << endl;

        // ��������� ��������� ��� ��������� ����������
        if(abs(currResult - expected_res[i]) < eps){
            cout << "Test id #" << i+1 << " - Passed\n";
        } else {
            cout << "Test id #" << i+1 << " - Failed\n";
        }
    }

    // 9.2
    // ��������� �������� ����������� �� �� � �������
    cout << "������ 9.2" << endl;

    float tempC, tempSum = 0;

    for(int i = 0; i < 12; i++){
        cin >> tempC;
        if(cin.fail()){
            std::cout << ("�������� ������������ ��� �����. ������ �����.");
            break;
        }
        tempSum = tempSum + tempC;
        tempC = 0;

        if(i == 11){
            tempSum = tempSum / 12;
            cout << "������� ����������� � �� �� ������: " << tempSum << "�C" << endl;
            cout << "������� ����������� � �� �� �����������: " << avg_calculation(tempSum) << "�F" <<endl;
        }
    }

    // 9.3
    cout << "������ 9.3" << endl;
    int N;
    cin >> N;
    if(cin.fail()){
        std::cout << ("�������� ������������ ��� �����. ������ �����.");
        return -1;
    }
    bool is_zero_bit = (N >> 9) % 2 == 0;
    if(is_zero_bit == false){
        cout << "ʳ������ �������� ������� � N:"<< binary_calculation(N) << endl;
    }else{
        cout << "ʳ������ �������� ���� � N:"<< binary_calculation(N) << endl;
    }


}
