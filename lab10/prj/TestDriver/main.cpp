#include <iostream>
#include <fstream>
#include "../moduleskovalov/kovalov_lib.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int cons_num, b;
    bool found;
    float s_calc, x, y, z;
    string decToBin;

// 10.1 -------------

// 10.1_1
    PersonInfo person = {
    "Максим",
    "Ковальов",
    "ЦНТУ",
    "Кропивницький",
    "Україна",
    2023
    };

// 10.1_2
    write_info("task10_1.txt", person);

    cons_num = consonants_num("word.txt");

    if(cons_num > 0){
        write_consosnants_num("task10_1.txt", cons_num);
    }else{
        write_consosnants_num("task10_1.txt", 0);
    }

// 10.1_3

    found = does_it_has_in("text10_1.txt");
    write_does_it_has_in("task10_1.txt", found);

// 10.1 --------------


// 10.2

    f_l_char("word.txt");
    time_date("word.txt");

// 10.3
    x = 6,
    y = 4,
    z = 1.42,
    b = 5;

    s_calc = s_calculation(x, y, z);
    decToBin = decToBinary(b);

    write_s_calc("task10_1.txt", s_calc, decToBin, b);


    return 0;
}

