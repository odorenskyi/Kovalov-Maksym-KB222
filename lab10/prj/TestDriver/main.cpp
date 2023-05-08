#include <iostream>
#include <fstream>
#include "../moduleskovalov/kovalov_lib.h"

using namespace std;

bool does_it_has_in(const char* filename);

int main()
{
    setlocale(LC_ALL, "ukr");
    int cons_num;
    bool found;
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

    if(cons_num > 0){
        write_consosnants_num("task10_1.txt", cons_num);
    }else{
        write_consosnants_num("task10_1.txt", 0);
    }
    found = does_it_has_in("text10_1.txt");
    write_does_it_has_in("task10_1.txt", found);
}

