#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include <unordered_set>
// 8 Lab ----------
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

        s = 0.5*((pow(y,2)+ 2*z)/sqrt(7*pi + x)) - sqrt(pow(e,abs(x))+ (sqrt(abs(y-z)))/sin(z*y));
        return s;

}
// Lab 10 ----------

// ��������� ��� ������ �����
struct PersonInfo {
    std::string name;
    std::string surname;
    std::string organization;
    std::string city;
    std::string country;
    int year;
};

void write_info(const char* filename, const PersonInfo& person){
    std::ofstream op_file(filename);
    if(op_file){
        op_file << "��������� ����������:" << std::endl;
        op_file << "��'�: " << person.name << std::endl;
        op_file << "�������: " << person.surname << std::endl;
        op_file << "����������: " << person.organization << std::endl;
        op_file << "̳���: " << person.city << std::endl;
        op_file << "�����: " << person.country << std::endl;
        op_file << "г�: " << person.year << std::endl;
    }else{
        std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
    }
}

// 2
int consonants_num(const char* filename){
    // ʳ������ ����������� � word.txt
    std::ifstream input_f(filename); // ³�������� ���� ��� ������� word.txt
    int c_count = 0;
    if(input_f){
        std::string ukr_word;
        std::getline(input_f, ukr_word);

        // ������� ��������� �� ����������� ����
        std::unordered_set<char> consonants = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

        for (char c : ukr_word) {
            if (consonants.count(c) == 0 && std::isalpha(c)) {
                c_count++;
            }
        }
        }else{
      std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
      return -1;
    }
    input_f.close();
    return c_count;
}

void write_consosnants_num(const char* filename, int c_count){
    // ³�������� ���� ��� ������ task10_1.txt
    std::ofstream output_f(filename, std::ios::out | std::ios::binary | std::ios::app);

    // ������� ������� ����������� � task10_1.txt
        if(output_f){
            output_f << "ʳ������ �����������: "<< c_count << std::endl;
        }else{
            std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
        }
    output_f.close();
}
