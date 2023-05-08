#include <string>
#ifndef KOVALOV_LIB_H_INCLUDED
#define KOVALOV_LIB_H_INCLUDED

using namespace std;


float s_calculation(float, float, float);

struct PersonInfo {
    string name;
    string surname;
    string organization;
    string city;
    string country;
    int year;
};
void write_info(const char* filename, const PersonInfo& person);

int consonants_num(const char* filename);
void write_consosnants_num(const char* filename, int c_count);

bool does_it_has_in(const char* filename);
void write_does_it_has_in(const char* filename, bool);

#endif // KOVALOV_LIB_H_INCLUDED
