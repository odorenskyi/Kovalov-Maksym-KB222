#include "../KikhotModules/KikhotModules.h"

#include <algorithm>
#include <iostream>

// ����� ��������� �� �����
void searchByCode(const std::string& code, const std::vector<Operator>& operators) {
    auto it = std::find_if(operators.begin(), operators.end(), [&](const Operator& op) {
        return op.code == code;
    });

    if (it != operators.end()) {
        std::cout << "��������: " << it->name << ", ���: " << it->code << std::endl;
    } else {
        std::cout << "��������� � �����: " << code << " �� ��������" << std::endl;
    }
}

// ����� ��������� �� ������
void searchByName(const std::string& name, const std::vector<Operator>& operators) {
    auto it = std::find_if(operators.begin(), operators.end(), [&](const Operator& op) {
        return op.name == name;
    });

    if (it != operators.end()) {
        std::cout << "��������: " << it->name << ", ���: " << it->code << std::endl;
    } else {
        std::cout << "��������� � ������: " << name << " �� ��������" << std::endl;
    }
}

// ³��������� ��� ���������
void displayAllOperators(const std::vector<Operator>& operators) {
    for (const auto& op : operators) {
        std::cout<< "��������: "<< op.name<< ", ���: "<< op.code<<std::endl;
    }
}
