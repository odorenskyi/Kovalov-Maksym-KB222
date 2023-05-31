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
        std::cout << "Виберіть опцію:" << std::endl;
        std::cout << "1. Пошук за кодом" << std::endl;
        std::cout << "2. Пошук за назвою" << std::endl;
        std::cout << "3. Відобразити всіх операторів" << std::endl;
        std::cout << "4. Додати нового оператора" << std::endl;
        std::cout << "5. Видалити оператора" << std::endl;
        std::cout << "6. Зберегти та вийти" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1: {
                        std::string code;
            std::cout << "Введіть код: ";
            std::cin >> code;
            searchByCode(code, operators);
            break;
        }
        case 2: {
            std::string name;
            std::cout << "Введіть назву: ";
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
            std::cout << "Введіть назву: ";
            std::cin >> name;
            std::cout << "Введіть код: ";
            std::cin >> code;
            addOperator(name, code, operators);
            std::cout << "Оператор додано" << std::endl;
            break;
        }
        case 5: {
            std::string name, code;
            std::cout << "Введіть назву: ";
            std::cin >> name;
            std::cout << "Введіть код: ";
            std::cin >> code;
            removeOperator(name, code, operators);
            std::cout << "Оператор видалено" << std::endl;
            break;
        }
        case 6: {
            saveToFile(filename, operators);
            std::cout << "Вихід з програми..." << std::endl;
            return 0;
        }
        default:
            std::cout << "Неправильний вибір. Спробуйте ще раз." << std::endl;
        }
    }

    return 0;
}

