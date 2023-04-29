#include <iostream>
#include <cmath>
#include <conio.h>
#include "../moduleskovalov/kovalov_lib.h"
#define ARR_S 7
using namespace std;

int main()
{
   setlocale(LC_ALL, "ukr");
   float x, y, z, kwh;
   float tempC, tempSum = 0;
   int N;
   char char_input;
   bool exit = false, is_zero_bit = true;

   // 9.4

while (!exit) {
    cout << "\"n\" - функція s_calculation()\n"
         << "\"v\" - 9.1\n"
         << "\"c\" - 9.2\n"
         << "\"x\" - 9.3\n"
         << "\"z/Z\" - Завершити програму" << endl;
    char_input = _getch();
    cout << endl;
    switch (char_input) {

        case 'n':
            cout << "Задача 9.0" << endl << "Обчислення площі." << endl;
            cout << "Введіть x,y,z:" << endl;
            cin >> x >> y >> z;
            if(cin.fail()){
                cin.clear();
                cin.ignore(10000, '\n');
                cout << ("Введений неправильний тип даних. Введіть число.") << endl;
                break;
            }
            cout << s_calculation(x, y, z) << endl;
            break;
        case 'v':
            cout << "Задача 9.1" << endl << "К-ть спожитої електроенергії за місяць." << endl;
            cin >> kwh;
            if(cin.fail()){
                cin.clear();
                cin.ignore(10000, '\n');
                cout << ("Введений неправильний тип даних. Введіть число.") << endl;
                break;
            }
            cout << kwh_calculation(kwh) << endl;
            break;
        case 'c':
            cout << "Задача 9.2" << endl << "Обрахунок середньої температури за рік В цельсіях." << endl;
            for (int i = 0; i < 12; i++) {
                cin >> tempC;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << ("Введений неправильний тип даних. Введіть число.") << endl;
                    break;
                }
                tempSum = tempSum + tempC;
                tempC = 0;

                if (i == 11) {
                    tempSum = tempSum / 12;
                    cout << "Середня температура в рік за Цельсія: " << round(tempSum * 100) / 100 << "°C" << endl;
                    cout << "Середня температура в рік за Фаренгейтом: " << round(avg_calculation(tempSum * 100)) / 100 << "°F" << endl << endl;
                    break;
                }
            }
            break;
            case 'x':
               cout << "Задача 9.3" << endl << "Кількість двійкових одиниць/нулів" << endl << "Введіть число: ";
               cin >> N;
               if(cin.fail() || N < 0 || N > 5740500){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << ("Введений неправильний тип даних. Введіть число від 0 до 5740500") << endl;
                    break;
               }

               is_zero_bit = (N >> 9) % 2 == 0;
               if(is_zero_bit == false){
                   cout << "Кількість двійкових одиниць у N:"<< binary_calculation(N) << endl;
               }else{
                   cout << "Кількість двійкових нулів у N:"<< binary_calculation(N) << endl;
               }
            break;
            case 'z':
            case 'Z':
                exit = true;
                cout << "Програма успішно завершена." << endl;
                break;
            default:
                cout << "\a" << "Перевірте, чи вибрана в вас англійська розкладка.\nАбо увімкнено Caps Lock.\n" << endl;
                break;
        }
    }
    cout << "Натисніть будь-яку клавішу...";
    _getch();
    return 0;
}


