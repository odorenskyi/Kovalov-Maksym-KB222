#include <iostream>
#include <cmath>
#include <locale>
#include "../ModulesKovalov/kovalov_lib.h"

#define ARR_S 7

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    const float x[ARR_S] = {3, 2,  4,   1, 3,   2,  0.4};
    const float y[ARR_S] = {-3, 8, 0.8, 3, 5,   11.1, 12};
    const float z[ARR_S] = {2,  1, 3.2, 3, 1.4, 4,  6.4};
        const float expected_res[ARR_S] = {-3.9996, 3.5651, -6.8708, -0.0846, -1.9863, 9.6643, 14.7604};

    for(short int i=0; i<ARR_S; i++){
        const float currResult = round(s_calculation(x[i], y[i], z[i])*10000) / 10000;
        if (currResult == expected_res[i]){
            cout << "Test id #" << i+1 << " - Passed\n";
        }else {
            cout << "Test id #" << i+1 << " - Failed\n";
        }
    }


    return 0;
}
