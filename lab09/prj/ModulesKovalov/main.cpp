#include <cmath>
#include <iostream>
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

float kwh_calculation(float kwh){
   if(kwh < 0){
       std::cout << "�������� ����� ����� ";
       return NULL;
   }
   float kwh_cost = 5.34047;
       if(kwh >= 801){
           return kwh*kwh_cost;

       }else if(kwh >= 151 && kwh <= 800){
           kwh_cost = 2.41945;
           return kwh*kwh_cost;
       }else if(kwh > 0 && kwh <= 150){
           kwh_cost = 1.30843;
           return kwh*kwh_cost;
       }

}

float avg_calculation(float tempSum){
    return 32 + 9/5 * tempSum;
}

int binary_calculation(int N){

}
