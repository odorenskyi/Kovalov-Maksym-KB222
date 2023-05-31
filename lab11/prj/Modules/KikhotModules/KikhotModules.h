#ifndef KIKHOT_MODULES_H
#define KIKHOT_MODULES_H

#include <vector>
#include <string>

// �������� ��������� ��'����
struct Operator {
    std::string name; // ����� ���������
    std::string code; // ��� ���������
};

// ����������� ��� � �����
void loadFromFile(const std::string& filename, std::vector<Operator>& operators);

// �������� ��� � ����
void saveToFile(const std::string& filename, const std::vector<Operator>& operators);

#endif
