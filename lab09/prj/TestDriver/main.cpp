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
    // ��������� �������� ����������� �� �� � �������
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

}

