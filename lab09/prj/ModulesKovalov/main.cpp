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
   if(kwh < 0){
       std::cout << "Отримане число менше ";
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
