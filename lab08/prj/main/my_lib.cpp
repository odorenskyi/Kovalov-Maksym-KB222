#include <cmath>
#include <iostream>
double s_calculation(double x, double y, double z){
    double s=0;
    double znam1 = 7 * M_PI + x;
    double znam2 = sin(z * y);

    if (znam1 < 0) {
        std::cerr << "Помилка: знаменник менше нуля" << std::endl;
        return 1;
    }
    if (znam2 == 0) {
        std::cerr << "Помилка: знаменник дорівнює нулю" << std::endl;
        return 1;
    }
        s = 1.0/2.0 * ((pow(y,2) + 2 * z) / sqrt(znam1)) - sqrt(pow(exp(1), abs(x)) + sqrt(abs(y - z) / znam2));
        return s;

}
