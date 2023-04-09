#include <cmath>
#include <iostream>
const double pi = 3.14159;
const double e = 2.71828;
float s_calculation(float x, float y, float z){
    double s=0;

    if(x < 0){
        std::cerr << "Помилка, знаменник x менше нуля" << std::endl;
        return 1;
    }
    if (z == 0 || y == 0) {
        std::cerr << "Помилка, sin не може дорівнювати 0" << std::endl;
        return 1;
    }

    double temp = pow(e, abs(x)) + sqrt(abs(y - z) / sin(z * y));
    if (temp < 0 || std::isnan(temp)) {
        std::cerr << "Помилка, квадратний корінь від від'ємного числа" << std::endl;
        return 1;
    }

        s = 0.5*((pow(y,2)+ 2*z)/sqrt(7*pi + x)) - sqrt(pow(e,abs(x))+ (sqrt(abs(y-z)))/sin(z*y));
        return s;

}
float kwh_calculation(float kwh){
    float kwh_cost;
    kwh_cost = (130,843 / 100);
    if(kwh > 0){
        if(kwh <= 150){
            return kwh*kwh_cost;

        }else if(kwh >= 151 && kwh <= 800){
            kwh_cost = (241,945 / 100);
            return kwh*kwh_cost;
        }else{
            kwh_cost = (534,047 / 100);
            return kwh*kwh_cost;
        }

    }else{
        return 1;
    }
}
