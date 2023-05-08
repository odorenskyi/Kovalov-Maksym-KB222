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
        std::cerr << "Помилка, знаменник x менше ";
        return NULL;
    }
    if (z == 0 || y == 0) {
        std::cerr << "Помилка, sin не може дорівнювати 0";
        return NULL;
    }

        s = 0.5*((pow(y,2)+ 2*z)/sqrt(7*pi + x)) - sqrt(pow(e,abs(x))+ (sqrt(abs(y-z)))/sin(z*y));
        return s;

}

// Lab 10 ----------
// 1 -------------
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
// 1 -------------

// 2 -------------
int consonants_num(const char* filename){
    // Кількість приголосних з word.txt
    std::ifstream input_f(filename); // Відкриваємо файл для читання word.txt
    int c_count = 0;
    if(input_f){
        std::string ukr_word;
        std::getline(input_f, ukr_word);

        // Создаємо множину приголосних літер
        std::unordered_set<char> consonants = {'б', 'в', 'г', 'ґ', 'д', 'ж', 'з', 'й', 'к', 'л', 'м', 'н', 'п', 'р', 'с', 'т', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ь'};

        for (char c : ukr_word) {
            if (consonants.count(c) == 1 && std::isalpha(c)) {
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
// 2 -------------

// 3 -------------

bool does_it_has_in(const char* filename){
    bool found = false;
    std::string ukr_word;
    std::string word;
// ------------ Відкриваємо файл для зчитання слова яке потрібно шукати
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
        std::cerr << "Не вдалося відкрити файл" << std::endl;
    }
    read_file.close();
    word_file.close();
    return found;
}

void write_does_it_has_in(const char* filename, bool found){
    // ------------ Дозапис результата
    std::ofstream output_f(filename, std::ios::binary | std::ios::app);
    std::ifstream input_f("word.txt");

    std::string ukr_word;

    if(output_f){
        if(input_f){
            std::getline(input_f, ukr_word);
        }
        if(found == true){
            output_f << "Слово \""<< ukr_word << "\" присутнє в тексті" << std::endl;
        }else{
            output_f << "Слова \""<< ukr_word << "\" немає в тексті" << std::endl;
        }

    }else{
        std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
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
        output_f << "\nПерша буква слова: " << word[0] << std::endl
                 << "Остання буква слова: " << word[word_length - 1] << std::endl;
    }else{
        std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
    }
    input_f.close();
    output_f.close();
}

void time_date(const char* filename){
    std::ofstream output_f(filename, std::ios::app | std::ios::ate);

    if(output_f){
        auto now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);
        output_f << "Дата та час дозапису інформації: " << std::ctime(&now_c);
    }else{
        std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
    }

    output_f.close();
}
// 10.3 -------------
// Перевод у двійкову систему
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
        output_f << "Результат функції s_calculation: " << s_calc << std::endl;
        output_f << "Число \"" << b << "\" у двійковій системі: " << number << std::endl;
    }else{
        std::cerr << "Не вдалося відкрити цей файл: " << filename << std::endl;
    }
    output_f.close();
}
