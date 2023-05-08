#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include <unordered_set>
#include <chrono>
#include <ctime>

// 8 Lab ----------

const double pi = 3.14159;
const double e = 2.71828;
float s_calculation(float x, float y, float z){
    double s=0;

    if(x < 0){
        std::cerr << "�������, ��������� x ����� ";
        return NULL;
    }
    if (z == 0 || y == 0) {
        std::cerr << "�������, sin �� ���� ���������� 0";
        return NULL;
    }

        s = 0.5*((pow(y,2)+ 2*z)/sqrt(7*pi + x)) - sqrt(pow(e,abs(x))+ (sqrt(abs(y-z)))/sin(z*y));
        return s;

}

// Lab 10 ----------
// 1 -------------
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
// 1 -------------

// 2 -------------
int consonants_num(const char* filename){
    // ʳ������ ����������� � word.txt
    std::ifstream input_f(filename); // ³�������� ���� ��� ������� word.txt
    int c_count = 0;
    if(input_f){
        std::string ukr_word;
        std::getline(input_f, ukr_word);

        // ������� ������� ����������� ����
        std::unordered_set<char> consonants = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

        for (char c : ukr_word) {
            if (consonants.count(c) == 1 && std::isalpha(c)) {
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
// 2 -------------

// 3 -------------

bool does_it_has_in(const char* filename){
    bool found = false;
    std::string ukr_word;
    std::string word;
// ------------ ³�������� ���� ��� �������� ����� ��� ������� ������
    std::ifstream word_file("word.txt");
    std::ifstream read_file(filename);
    if(read_file && word_file){
        std::getline(word_file, ukr_word);

        while (read_file >> word) {
            if (ukr_word == word) {
                found = true;
                break;
            }
        }
    }else{
        std::cerr << "�� ������� ������� ����" << std::endl;
    }
    read_file.close();
    word_file.close();
    return found;
}

void write_does_it_has_in(const char* filename, bool found){
    // ------------ ������� ����������
    std::ofstream output_f(filename, std::ios::binary | std::ios::app);
    std::ifstream input_f("word.txt");

    std::string ukr_word;

    if(output_f){
        if(input_f){
            std::getline(input_f, ukr_word);
        }
        if(found == true){
            output_f << "����� \""<< ukr_word << "\" ������� � �����" << std::endl;
        }else{
            output_f << "����� \""<< ukr_word << "\" ���� � �����" << std::endl;
        }

    }else{
        std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
    }
    input_f.close();
    output_f.close();
}
// 3 -------------
// 10.2

void f_l_char(const char* filename){
    std::ifstream input_f(filename);
    std::ofstream output_f(filename, std::ios::app | std::ios::ate);

    std::string word;

    int word_length;

    if(input_f && output_f){
        std::getline(input_f, word);

        word_length = word.length();
        output_f << "\n����� ����� �����: " << word[0] << std::endl
                 << "������� ����� �����: " << word[word_length - 1] << std::endl;
    }else{
        std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
    }
    input_f.close();
    output_f.close();
}

void time_date(const char* filename){
    std::ofstream output_f(filename, std::ios::app | std::ios::ate);

    if(output_f){
        auto now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);
        output_f << "���� �� ��� �������� ����������: " << std::ctime(&now_c);
    }else{
        std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
    }

    output_f.close();
}
// 10.3 -------------
// ������� � ������� �������
std::string decToBinary(int n){
    std::string result = "";

    while (n > 0) {
        if (n % 2 == 0)
            result = "0" + result;
        else
            result = "1" + result;
        n /= 2;
    }
    return result;
}

void write_s_calc(const char* filename, float s_calc, std::string number, int b){
    std::ofstream output_f(filename, std::ios::app | std::ios::ate);

    if(output_f){
        output_f << "��������� ������� s_calculation: " << s_calc << std::endl;
        output_f << "����� \"" << b << "\" � ������� ������: " << number << std::endl;
    }else{
        std::cerr << "�� ������� ������� ��� ����: " << filename << std::endl;
    }
    output_f.close();
}
