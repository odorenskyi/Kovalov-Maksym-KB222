#include "../KikhotModules/KikhotModules.h"

#include <algorithm>
#include <iostream>

// Пошук оператора за кодом
void searchByCode(const std::string& code, const std::vector<Operator>& operators) {
    auto it = std::find_if(operators.begin(), operators.end(), [&](const Operator& op) {
        return op.code == code;
    });

    if (it != operators.end()) {
        std::cout << "Оператор: " << it->name << ", Код: " << it->code << std::endl;
    } else {
        std::cout << "Оператора з кодом: " << code << " не знайдено" << std::endl;
    }
}

// Пошук оператора за назвою
void searchByName(const std::string& name, const std::vector<Operator>& operators) {
    auto it = std::find_if(operators.begin(), operators.end(), [&](const Operator& op) {
        return op.name == name;
    });

    if (it != operators.end()) {
        std::cout << "Оператор: " << it->name << ", Код: " << it->code << std::endl;
    } else {
        std::cout << "Оператора з назвою: " << name << " не знайдено" << std::endl;
    }
}

// Відобразити всіх операторів
void displayAllOperators(const std::vector<Operator>& operators) {
    for (const auto& op : operators) {
        std::cout<< "Оператор: "<< op.name<< ", Код: "<< op.code<<std::endl;
    }
}
