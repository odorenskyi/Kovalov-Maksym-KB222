#include <iostream>
#include <fstream>
#include "../moduleskovalov/kovalov_lib.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int cons_num;

    PersonInfo person = {
    "Максим",
    "Ковальов",
    "ЦНТУ",
    "Кропивницький",
    "Україна",
    2023
    };

    write_info("task10_1.txt", person);

    cons_num = consonants_num("word.txt");
    cout << cons_num;
    if(cons_num > 0){
        write_consosnants_num("task10_1.txt", cons_num);
    }else{
        write_consosnants_num("task10_1.txt", 0);
    }

}
