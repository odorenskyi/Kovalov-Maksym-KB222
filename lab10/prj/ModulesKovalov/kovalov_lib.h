#include <string>
#ifndef KOVALOV_LIB_H_INCLUDED
#define KOVALOV_LIB_H_INCLUDED

using namespace std;


float s_calculation(float, float, float);
// 10.1

// 10.1_1
struct PersonInfo {
    string name;
    string surname;
    string organization;
    string city;
    string country;
    int year;
};

void write_info(const char* filename, const PersonInfo& person);
// 10.1_2
int consonants_num(const char* filename);
void write_consosnants_num(const char* filename, int);
// 10.1_3
bool does_it_has_in(const char* filename);
void write_does_it_has_in(const char* filename, bool);

// 10.2
void f_l_char(const char* filename);
void time_date(const char* filename);

#endif // KOVALOV_LIB_H_INCLUDED
