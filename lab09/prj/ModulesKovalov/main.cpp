#include <cmath>
#include <iostream>
#include "../moduleskovalov/kovalov_lib.h"

const double pi = 3.14159;
const double e = 2.71828;
float s_calculation(float x, float y, float z){
    double s=0;

    if(x < 0){
        std::cerr << "�������, ��������� x ����� ����" << std::endl;
        return 1;
    }
    if (z == 0 || y == 0) {
        std::cerr << "�������, sin �� ���� ���������� 0" << std::endl;
        return 1;
    }

    double temp = pow(e, abs(x)) + sqrt(abs(y - z) / sin(z * y));
    if (temp < 0 || std::isnan(temp)) {
        std::cerr << "�������, ���������� ����� �� ��'������ �����" << std::endl;
        return 1;
    }

        s = 0.5*((pow(y,2)+ 2*z)/sqrt(7*pi + x)) - sqrt(pow(e,abs(x))+ (sqrt(abs(y-z)))/sin(z*y));
        return s;

}

float kwh_calculation(float kwh) {
    float kwh_cost = 5.34047;
    if (kwh > 800) {
        return kwh * kwh_cost;
    } else if (kwh >= 151 && kwh <= 800) {
        kwh_cost = 2.41945;
        return kwh * kwh_cost;
    } else if (kwh >= 0 && kwh <= 150) {
        kwh_cost = 1.30843;
        return kwh * kwh_cost;
    }else{
        return 0.0f;
    }
}

float avg_calculation(float tempSum){
    return tempSum * 9/5 + 32;
}


int binary_calculation(int N){
    // �������� �������� 10-�� ��� N
    bool is_zero_bit = (N >> 9) % 2 == 0;
    // ������ 0 ��� 1 � ��������� �� �������� 10-�� ���
    int count = is_zero_bit ? count_zero_bits(N):count_one_bits(N);
    return count;
}
int count_zero_bits(int N){
    int count = 0;
    while (N != 0){
        if((N & 1) == 0){
            count++;
        }
        N >>= 1;
    }
    return count;
}
int count_one_bits(int N){
    int count = 0;
    while (N != 0){
        if((N & 1) == 1){
            count++;
        }
        N >>= 1;
    }
    return count;
}

