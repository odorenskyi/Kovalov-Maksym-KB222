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
// Lab 10 ----------

// Структура для запису даних
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
        op_file << "Авторська інформація:" << std::endl;
        op_file << "Ім'я: " << person.name << std::endl;
        op_file << "Прізвище: " << person.surname << std::endl;
        op_file << "Організація: " << person.organization << std::endl;
        op_file << "Місто: " << person.city << std::endl;
        op_file << "Країна: " << person.country << std::endl;
        op_file << "Рік: " << person.year << std::endl;
    }else{
        std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
    }
}

// 2
int consonants_num(const char* filename){
    // Кількість приголосних з word.txt
    std::ifstream input_f(filename); // Відкриваємо файл для читання word.txt
    int c_count = 0;
    if(input_f){
        std::string ukr_word;
        std::getline(input_f, ukr_word);

        // Создаем множество из приголосных букв
        std::unordered_set<char> consonants = {'б', 'в', 'г', 'ґ', 'д', 'ж', 'з', 'й', 'к', 'л', 'м', 'н', 'п', 'р', 'с', 'т', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ь'};

        for (char c : ukr_word) {
            if (consonants.count(c) == 0 && std::isalpha(c)) {
                c_count++;
            }
        }
        }else{
      std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
      return -1;
    }
    input_f.close();
    return c_count;
}

void write_consosnants_num(const char* filename, int c_count){
    // Відкриваємо файл для запису task10_1.txt
    std::ofstream output_f(filename, std::ios::out | std::ios::binary | std::ios::app);

    // Дозапис кількості приголосних у task10_1.txt
        if(output_f){
            output_f << "Кількість приголосних: "<< c_count << std::endl;
        }else{
            std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
        }
    output_f.close();
}
