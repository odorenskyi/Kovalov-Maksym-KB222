#include <iostream>
#include <windows.h>
#include "../modules/KikhotModules/KikhotModules.h"
#include "../modules/ModulesKohan/KohanModules.h"
#include "../modules/KovalovModules/KovalovModules.h"

int main() {
    SetConsoleOutputCP(1251); SetConsoleCP(1251);
    std::string filename = "phonebook.txt";
    std::vector<Operator> operators;
    loadFromFile(filename, operators);

    while (true) {
        std::cout << "������� �����:" << std::endl;
        std::cout << "1. ����� �� �����" << std::endl;
        std::cout << "2. ����� �� ������" << std::endl;
        std::cout << "3. ³��������� ��� ���������" << std::endl;
        std::cout << "4. ������ ������ ���������" << std::endl;
        std::cout << "5. �������� ���������" << std::endl;
        std::cout << "6. �������� �� �����" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1: {
                        std::string code;
            std::cout << "������ ���: ";
            std::cin >> code;
            searchByCode(code, operators);
            break;
        }
        case 2: {
            std::string name;
            std::cout << "������ �����: ";
            std::cin >> name;
            searchByName(name, operators);
            break;
        }
        case 3: {
            displayAllOperators(operators);
            break;
        }
        case 4: {
            std::string name, code;
            std::cout << "������ �����: ";
            std::cin >> name;
            std::cout << "������ ���: ";
            std::cin >> code;
            addOperator(name, code, operators);
            std::cout << "�������� ������" << std::endl;
            break;
        }
        case 5: {
            std::string name, code;
            std::cout << "������ �����: ";
            std::cin >> name;
            std::cout << "������ ���: ";
            std::cin >> code;
            removeOperator(name, code, operators);
            std::cout << "�������� ��������" << std::endl;
            break;
        }
        case 6: {
            saveToFile(filename, operators);
            std::cout << "����� � ��������..." << std::endl;
            return 0;
        }
        default:
            std::cout << "������������ ����. ��������� �� ���." << std::endl;
        }
    }

    return 0;
}

