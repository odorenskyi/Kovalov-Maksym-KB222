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

        s = 1.0/2.0 * ((pow(y,2) + 2 * z) / sqrt(7 * pi + x)) - sqrt(pow(e, abs(x)) + sqrt(abs(y - z) / sin(z * y)));
        return s;

}
